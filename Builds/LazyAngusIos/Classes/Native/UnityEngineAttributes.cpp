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
extern TypeInfo* InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t638_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2265);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t638 * tmp;
		tmp = (ExtensionAttribute_t638 *)il2cpp_codegen_object_new (ExtensionAttribute_t638_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3119(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1297 * tmp;
		tmp = (InternalsVisibleToAttribute_t1297 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1297_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6645(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1000_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1000_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_t732_LayerMask_GetMask_m5157_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void RuntimePlatform_t637_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void RuntimePlatform_t637_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SystemInfo_t1006_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Coroutine_t787_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5163_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MeshFilter_t625_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_t400_Mesh_Internal_Create_m5237_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_vertices_m2980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_triangles_m2981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_set_enabled_m2828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_material_m2806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_set_material_m2808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_bounds_m2837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_get_width_m2530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_get_height_m2546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_get_dpi_m4923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Screen_t1020_CustomAttributesCacheGenerator_Screen_get_orientation_m2545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5264_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5265_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5265_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RenderTexture_t1021_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RenderTexture_t1021_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUILayer_t1024_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Gradient_t1027_CustomAttributesCacheGenerator_Gradient_Init_m5276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Gradient_t1027_CustomAttributesCacheGenerator_Gradient_Cleanup_m5277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_set_changed_m5289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_get_enabled_m5290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_set_enabled_m2564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Label_m2542_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Box_m2558_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Button_m2540_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_TextField_m2543_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_TextField_m2916_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Toggle_m2589_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_SelectionGrid_m2587_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_SelectionGrid_m5328_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginHorizontal_m2541_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginHorizontal_m5329_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginVertical_m2555_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginVertical_m5330_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginScrollView_m2563_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginScrollView_m5331_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_t548_GUILayoutUtility_GetRect_m5352_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_t548_GUILayoutUtility_GetRect_m5354_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIClip_t1043_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIClip_t1043_CustomAttributesCacheGenerator_GUIClip_Pop_m5422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISettings_t1044_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISettings_t1044_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISettings_t1044_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISettings_t1044_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISettings_t1044_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t950_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t950_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t950 * tmp;
		tmp = (ExecuteInEditMode_t950 *)il2cpp_codegen_object_new (ExecuteInEditMode_t950_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5032(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUISkin_t616_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUIContent_t618_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUIContent_t618_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void GUIContent_t618_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_Init_m5491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_Init_m5498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_left_m4940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_left_m5500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_right_m5501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_right_m5502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_top_m4941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_top_m5503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5534_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Init_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Cleanup_m5557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_rawType_m4796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_type_m2924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_modifiers_m4792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_character_m4794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_commandName_m5563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_get_keyCode_m4793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_Use_m5566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Event_t619_CustomAttributesCacheGenerator_Event_PopEvent_m4797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t940_il2cpp_TypeInfo_var;
void EventModifiers_t1054_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t940 * tmp;
		tmp = (FlagsAttribute_t940 *)il2cpp_codegen_object_new (FlagsAttribute_t940_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4977(tmp, NULL);
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
void Vector3_t413_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void Color_t257_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1155_il2cpp_TypeInfo_var;
void Color32_t591_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1155 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1155 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1155_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6293(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t620_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t879_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Mathf_t627_CustomAttributesCacheGenerator_Mathf_t627_Mathf_SmoothDamp_m4857_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Mathf_t627_CustomAttributesCacheGenerator_Mathf_t627_Mathf_SmoothDamp_m4857_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t940_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1056_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t940 * tmp;
		tmp = (FlagsAttribute_t940 *)il2cpp_codegen_object_new (FlagsAttribute_t940_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void Resources_t623_CustomAttributesCacheGenerator_Resources_Load_m5710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextAsset_t615_CustomAttributesCacheGenerator_TextAsset_get_text_m2907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Shader_t1061_CustomAttributesCacheGenerator_Shader_PropertyToID_m5713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_SetTexture_m5715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_GetTexture_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_SetFloat_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_HasProperty_m5720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_t401_Material_Internal_CreateWithMaterial_m5721_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_rect_m4723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_texture_m4716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_border_m4717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5747_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5756_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5758_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5758_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_URLEncode_m5762_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_QPEncode_m5764_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_SevenBitClean_m5767_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void CacheIndex_t1066_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void UnityString_t1067_CustomAttributesCacheGenerator_UnityString_t1067_UnityString_Format_m5769_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AsyncOperation_t1001_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_isPlaying_m4837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_isEditor_m4839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_platform_m2784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_t1068_Application_ExternalCall_m2873_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_t1068_Application_BuildInvocationForArguments_m5778_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_OpenURL_m2778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1299_il2cpp_TypeInfo_var;
void Application_t1068_CustomAttributesCacheGenerator_Application_t1068____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1299 * tmp;
		tmp = (SecurityCriticalAttribute_t1299 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1299_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m6651(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_depth_m4529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_eventMask_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_main_m2812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var;
void CameraCallback_t1069_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1300 * tmp;
		tmp = (EditorBrowsableAttribute_t1300 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6652(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Debug_t1070_CustomAttributesCacheGenerator_Debug_Internal_Log_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void Debug_t1070_CustomAttributesCacheGenerator_Debug_t1070_Debug_Internal_Log_m5808_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Debug_t1070_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void Debug_t1070_CustomAttributesCacheGenerator_Debug_t1070_Debug_Internal_LogException_m5809_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Debug_t1070_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Display_t1073_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetAxis_m3108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetButtonDown_m4607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButton_m3024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_get_mousePosition_m2813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_get_mousePresent_m4606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_GetTouch_m2560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_get_touchCount_m2559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_get_compositionString_m4774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Input_t551_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t940_il2cpp_TypeInfo_var;
void HideFlags_t1076_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t940 * tmp;
		tmp = (FlagsAttribute_t940 *)il2cpp_codegen_object_new (FlagsAttribute_t940_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_Destroy_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_t547_Object_Destroy_m5851_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_Destroy_m2718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_t547_Object_DestroyImmediate_m5852_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_get_name_m4809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_set_name_m4899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_set_hideFlags_m4810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_ToString_m3266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_Instantiate_m2948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void Object_t547_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_get_transform_m2842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_get_gameObject_m2636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_GetComponent_m4947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_GetComponent_m6654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Component_t597_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5868_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5868_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1218 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1218 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1218_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6508(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1161_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5871_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1161 * tmp;
		tmp = (WritableAttribute_t1161 *)il2cpp_codegen_object_new (WritableAttribute_t1161_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6301(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5888_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Time_t1078_CustomAttributesCacheGenerator_Time_get_time_m2970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Time_t1078_CustomAttributesCacheGenerator_Time_get_deltaTime_m2996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Time_t1078_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Time_t1078_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Time_t1078_CustomAttributesCacheGenerator_Time_set_timeScale_m2779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Random_t1079_CustomAttributesCacheGenerator_Random_set_seed_m3046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Random_t1079_CustomAttributesCacheGenerator_Random_Range_m2994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Random_t1079_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_t1081_PlayerPrefs_GetString_m5896_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m5915_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m5915_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_Raycast_m2816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m4696_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m4696_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m4632_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m4632_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m5916_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m5916_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics_t1083_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Collider_t600_CustomAttributesCacheGenerator_Collider_set_enabled_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Collider_t600_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_IgnoreLayerCollision_m3006_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_Raycast_m4697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Collider2D_t483_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Collider2D_t483_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_set_clip_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_Play_m5943_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m2971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m2984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Stop_m2805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1215_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_PlayOneShot_m5944_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2263);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1215 * tmp;
		tmp = (DefaultValueAttribute_t1215 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1215_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6503(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1216 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1216 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1216_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6507(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void AnimationEvent_t1094_CustomAttributesCacheGenerator_AnimationEvent_t1094____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1098_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_t1098_AnimationCurve__ctor_m5970_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_Init_m5974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1095_CustomAttributesCacheGenerator_AnimatorStateInfo_t1095____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Animator_t516_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Animator_t516_CustomAttributesCacheGenerator_Animator_StringToHash_m5993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Animator_t516_CustomAttributesCacheGenerator_Animator_SetIntegerString_m5994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Animator_t516_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Animator_t516_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void CharacterInfo_t1104_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void CharacterInfo_t1104_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void CharacterInfo_t1104_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t643_il2cpp_TypeInfo_var;
void CharacterInfo_t1104_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t643 * tmp;
		tmp = (ObsoleteAttribute_t643 *)il2cpp_codegen_object_new (ObsoleteAttribute_t643_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3243(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Font_t747_CustomAttributesCacheGenerator_Font_get_material_m4903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Font_t747_CustomAttributesCacheGenerator_Font_HasCharacter_m4795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Font_t747_CustomAttributesCacheGenerator_Font_get_dynamic_m4905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Font_t747_CustomAttributesCacheGenerator_Font_get_fontSize_m4906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1300 * tmp;
		tmp = (EditorBrowsableAttribute_t1300 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6652(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_Init_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1154_il2cpp_TypeInfo_var;
void RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1154 * tmp;
		tmp = (WrapperlessIcall_t1154 *)il2cpp_codegen_object_new (WrapperlessIcall_t1154_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6292(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_Request_get_sourceId_m6063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_Request_get_appId_m6064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1109_CustomAttributesCacheGenerator_Request_get_domain_m6065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_Response_get_success_m6074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_Response_set_success_m6075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1111_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_name_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_name_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1125_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1125_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1125_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1126_il2cpp_TypeInfo_var;
void AppID_t1126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2274);
		AppID_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2162);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1302 * tmp;
		tmp = (DefaultValueAttribute_t1302 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1302_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6669(tmp, Box(AppID_t1126_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1127_il2cpp_TypeInfo_var;
void SourceID_t1127_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2274);
		SourceID_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2161);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1302 * tmp;
		tmp = (DefaultValueAttribute_t1302 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1302_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6669(tmp, Box(SourceID_t1127_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1128_il2cpp_TypeInfo_var;
void NetworkID_t1128_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2274);
		NetworkID_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2164);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1302 * tmp;
		tmp = (DefaultValueAttribute_t1302 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1302_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6669(tmp, Box(NetworkID_t1128_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1129_il2cpp_TypeInfo_var;
void NodeID_t1129_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2274);
		NodeID_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2165);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1302 * tmp;
		tmp = (DefaultValueAttribute_t1302 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1302_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6669(tmp, Box(NodeID_t1129_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1134_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6670(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6676(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6677(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6679(CustomAttributesCache* cache)
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
extern TypeInfo* EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
void JsonArray_t1135_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1300 * tmp;
		tmp = (EditorBrowsableAttribute_t1300 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6652(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1300 * tmp;
		tmp = (EditorBrowsableAttribute_t1300 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6652(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
void SimpleJson_t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var;
void SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1306 * tmp;
		tmp = (SuppressMessageAttribute_t1306 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6681(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6682(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var;
void SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1306 * tmp;
		tmp = (SuppressMessageAttribute_t1306 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6681(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var;
void SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_t1139____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1300 * tmp;
		tmp = (EditorBrowsableAttribute_t1300 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1300_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6652(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1137_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1306 * tmp;
		tmp = (SuppressMessageAttribute_t1306 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6681(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6682(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1306 * tmp;
		tmp = (SuppressMessageAttribute_t1306 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6681(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6682(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1306 * tmp;
		tmp = (SuppressMessageAttribute_t1306 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1306_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6681(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6682(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var;
void ReflectionUtils_t1153_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1305 * tmp;
		tmp = (GeneratedCodeAttribute_t1305 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1305_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6680(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetConstructorInfo_m6276_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetContructor_m6281_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetConstructorByReflection_m6283_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1307_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1146_CustomAttributesCacheGenerator_ConstructorDelegate_t1146_ConstructorDelegate_Invoke_m6261_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t639_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1146_CustomAttributesCacheGenerator_ConstructorDelegate_t1146_ConstructorDelegate_BeginInvoke_m6262_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t639 * tmp;
		tmp = (ParamArrayAttribute_t639 *)il2cpp_codegen_object_new (ParamArrayAttribute_t639_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3138(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1149_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1150_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1151_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1152_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1155_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t951_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void RequireComponent_t945_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void WritableAttribute_t1161_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void GUIStateObjects_t1174_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_Achievement_get_id_m6338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_Achievement_set_id_m6339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1177_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1178_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1178_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1178_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_Score_get_value_m6360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1179_CustomAttributesCacheGenerator_Score_set_value_m6361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_id_m6369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_id_m6370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_range_m6373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_range_m6374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void PropertyAttribute_t1193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void TooltipAttribute_t954_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void SpaceAttribute_t952_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void RangeAttribute_t949_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void TextAreaAttribute_t955_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t953_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var;
void StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1298 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1298 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1298_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6647(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void ArgumentCache_t1204_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void PersistentCall_t1208_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void PersistentCall_t1208_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void PersistentCall_t1208_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void PersistentCall_t1208_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
void PersistentCall_t1208_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1210_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var;
void UnityEventBase_t1213_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1608);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t943 * tmp;
		tmp = (FormerlySerializedAsAttribute_t943 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t943_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t645_il2cpp_TypeInfo_var;
void UnityEventBase_t1213_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t645 * tmp;
		tmp = (SerializeField_t645 *)il2cpp_codegen_object_new (SerializeField_t645_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3248(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t942_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1214_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1607);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t942 * tmp;
		tmp = (AddComponentMenu_t942 *)il2cpp_codegen_object_new (AddComponentMenu_t942_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m4995(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1215_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t943_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6708(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6707(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t644_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t644 * tmp;
		tmp = (AttributeUsageAttribute_t644 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t644_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3245(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[786] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1000_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5145,
	AssetBundleCreateRequest_t1000_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5146,
	AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5150,
	AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5151,
	AssetBundle_t1002_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5152,
	LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5155,
	LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5156,
	LayerMask_t732_CustomAttributesCacheGenerator_LayerMask_t732_LayerMask_GetMask_m5157_Arg0_ParameterInfo,
	RuntimePlatform_t637_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t637_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t637_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1006_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5158,
	Coroutine_t787_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5161,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5163,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5163_Arg0_ParameterInfo,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5164,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5166,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5171,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5172,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5173,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5174,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5175,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5176,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5177,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5178,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5179,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5180,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5181,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5182,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5183,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5184,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5185,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5186,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5187,
	GameCenterPlatform_t636_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5189,
	GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5233,
	GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5234,
	GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5235,
	GcLeaderboard_t1018_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5236,
	MeshFilter_t625_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2979,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5237,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_t400_Mesh_Internal_Create_m5237_Arg0_ParameterInfo,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_vertices_m2980,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_triangles_m2981,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_set_enabled_m2828,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_material_m2806,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_set_material_m2808,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_bounds_m2837,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4626,
	Renderer_t541_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4627,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_get_width_m2530,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_get_height_m2546,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_get_dpi_m4923,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2903,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2904,
	Screen_t1020_CustomAttributesCacheGenerator_Screen_get_orientation_m2545,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5259,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5260,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5264,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5264_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4669,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4745,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5265,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5265_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5265_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2572,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2571,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5266,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2573,
	RenderTexture_t1021_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5267,
	RenderTexture_t1021_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5268,
	GUILayer_t1024_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5272,
	Gradient_t1027_CustomAttributesCacheGenerator_Gradient_Init_m5276,
	Gradient_t1027_CustomAttributesCacheGenerator_Gradient_Cleanup_m5277,
	GUI_t549_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t549_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t549_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5284,
	GUI_t549_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5285,
	GUI_t549_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5286,
	GUI_t549_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5287,
	GUI_t549_CustomAttributesCacheGenerator_GUI_set_changed_m5289,
	GUI_t549_CustomAttributesCacheGenerator_GUI_get_enabled_m5290,
	GUI_t549_CustomAttributesCacheGenerator_GUI_set_enabled_m2564,
	GUI_t549_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5292,
	GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5295,
	GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5298,
	GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5305,
	GUI_t549_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5312,
	GUI_t549_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5314,
	GUI_t549_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5321,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Label_m2542_Arg1_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Box_m2558_Arg1_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Button_m2540_Arg1_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_TextField_m2543_Arg1_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_TextField_m2916_Arg2_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_Toggle_m2589_Arg2_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_SelectionGrid_m2587_Arg3_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_SelectionGrid_m5328_Arg4_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginHorizontal_m2541_Arg0_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginHorizontal_m5329_Arg2_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginVertical_m2555_Arg0_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginVertical_m5330_Arg2_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginScrollView_m2563_Arg1_ParameterInfo,
	GUILayout_t1030_CustomAttributesCacheGenerator_GUILayout_t1030_GUILayout_BeginScrollView_m5331_Arg6_ParameterInfo,
	GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5346,
	GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5348,
	GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5349,
	GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_t548_GUILayoutUtility_GetRect_m5352_Arg2_ParameterInfo,
	GUILayoutUtility_t548_CustomAttributesCacheGenerator_GUILayoutUtility_t548_GUILayoutUtility_GetRect_m5354_Arg3_ParameterInfo,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5396,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5400,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5404,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5405,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5406,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5407,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5408,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5409,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5411,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5413,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5417,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5418,
	GUIUtility_t1042_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5419,
	GUIClip_t1043_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5421,
	GUIClip_t1043_CustomAttributesCacheGenerator_GUIClip_Pop_m5422,
	GUISettings_t1044_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1044_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1044_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1044_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1044_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t616_CustomAttributesCacheGenerator,
	GUISkin_t616_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t616_CustomAttributesCacheGenerator_m_box,
	GUISkin_t616_CustomAttributesCacheGenerator_m_button,
	GUISkin_t616_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t616_CustomAttributesCacheGenerator_m_label,
	GUISkin_t616_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t616_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t616_CustomAttributesCacheGenerator_m_window,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t616_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t616_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t616_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t616_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t616_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t618_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t618_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t618_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_Init_m5491,
	GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5492,
	GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5493,
	GUIStyleState_t1048_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5494,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_Init_m5498,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5499,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_left_m4940,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_left_m5500,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_right_m5501,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_right_m5502,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_top_m4941,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_top_m5503,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2927,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5504,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4933,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4935,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5506,
	RectOffset_t544_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5508,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5512,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5513,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5514,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5515,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5517,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5519,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5520,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5521,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2532,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5522,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2533,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5523,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5524,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5525,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2537,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5526,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2536,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5527,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5530,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5533,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5534_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5536,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5537,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5541,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5543,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5545,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5548,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5551,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5553,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4834,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4835,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg1_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg2_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg3_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg4_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg5_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_t782_TouchScreenKeyboard_Open_m5554_Arg6_ParameterInfo,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4772,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4773,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4833,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4771,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4832,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4783,
	TouchScreenKeyboard_t782_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4782,
	Event_t619_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t619_CustomAttributesCacheGenerator_Event_Init_m5555,
	Event_t619_CustomAttributesCacheGenerator_Event_Cleanup_m5557,
	Event_t619_CustomAttributesCacheGenerator_Event_get_rawType_m4796,
	Event_t619_CustomAttributesCacheGenerator_Event_get_type_m2924,
	Event_t619_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5558,
	Event_t619_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5560,
	Event_t619_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5562,
	Event_t619_CustomAttributesCacheGenerator_Event_get_modifiers_m4792,
	Event_t619_CustomAttributesCacheGenerator_Event_get_character_m4794,
	Event_t619_CustomAttributesCacheGenerator_Event_get_commandName_m5563,
	Event_t619_CustomAttributesCacheGenerator_Event_get_keyCode_m4793,
	Event_t619_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5564,
	Event_t619_CustomAttributesCacheGenerator_Event_Use_m5566,
	Event_t619_CustomAttributesCacheGenerator_Event_PopEvent_m4797,
	EventModifiers_t1054_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t413_CustomAttributesCacheGenerator,
	Color_t257_CustomAttributesCacheGenerator,
	Color32_t591_CustomAttributesCacheGenerator,
	Quaternion_t620_CustomAttributesCacheGenerator,
	Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5592,
	Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5595,
	Quaternion_t620_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5597,
	Matrix4x4_t918_CustomAttributesCacheGenerator,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5613,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5615,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5617,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5620,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5632,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5635,
	Matrix4x4_t918_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5636,
	Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5653,
	Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5656,
	Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5659,
	Bounds_t601_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5663,
	Vector4_t879_CustomAttributesCacheGenerator,
	Mathf_t627_CustomAttributesCacheGenerator_Mathf_t627_Mathf_SmoothDamp_m4857_Arg4_ParameterInfo,
	Mathf_t627_CustomAttributesCacheGenerator_Mathf_t627_Mathf_SmoothDamp_m4857_Arg5_ParameterInfo,
	DrivenTransformProperties_t1056_CustomAttributesCacheGenerator,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5694,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5695,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5696,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5697,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5698,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5699,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5700,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5701,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5702,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5703,
	RectTransform_t523_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5704,
	Resources_t623_CustomAttributesCacheGenerator_Resources_Load_m5710,
	TextAsset_t615_CustomAttributesCacheGenerator_TextAsset_get_text_m2907,
	SerializePrivateVariables_t1060_CustomAttributesCacheGenerator,
	Shader_t1061_CustomAttributesCacheGenerator_Shader_PropertyToID_m5713,
	Material_t401_CustomAttributesCacheGenerator_Material_SetTexture_m5715,
	Material_t401_CustomAttributesCacheGenerator_Material_GetTexture_m5717,
	Material_t401_CustomAttributesCacheGenerator_Material_SetFloat_m5719,
	Material_t401_CustomAttributesCacheGenerator_Material_HasProperty_m5720,
	Material_t401_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5721,
	Material_t401_CustomAttributesCacheGenerator_Material_t401_Material_Internal_CreateWithMaterial_m5721_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5724,
	SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5727,
	SphericalHarmonicsL2_t1062_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5730,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_rect_m4723,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4719,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_texture_m4716,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4742,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_border_m4717,
	SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5740,
	SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5741,
	DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4730,
	DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4729,
	DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4722,
	DataUtility_t1063_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5742,
	WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5745,
	WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5746,
	WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2995,
	WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5747_Arg1_ParameterInfo,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5748,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5751,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2667,
	WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5752,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5753,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2576,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5756_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2575,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5758_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5758_Arg3_ParameterInfo,
	WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_URLEncode_m5762_Arg1_ParameterInfo,
	WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_QPEncode_m5764_Arg1_ParameterInfo,
	WWWTranscoder_t1065_CustomAttributesCacheGenerator_WWWTranscoder_t1065_WWWTranscoder_SevenBitClean_m5767_Arg1_ParameterInfo,
	CacheIndex_t1066_CustomAttributesCacheGenerator,
	UnityString_t1067_CustomAttributesCacheGenerator_UnityString_t1067_UnityString_Format_m5769_Arg1_ParameterInfo,
	AsyncOperation_t1001_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5771,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2823,
	Application_t1068_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5776,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_isPlaying_m4837,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_isEditor_m4839,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2872,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_platform_m2784,
	Application_t1068_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3080,
	Application_t1068_CustomAttributesCacheGenerator_Application_t1068_Application_ExternalCall_m2873_Arg1_ParameterInfo,
	Application_t1068_CustomAttributesCacheGenerator_Application_t1068_Application_BuildInvocationForArguments_m5778_Arg1_ParameterInfo,
	Application_t1068_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5779,
	Application_t1068_CustomAttributesCacheGenerator_Application_OpenURL_m2778,
	Application_t1068_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5781,
	Application_t1068_CustomAttributesCacheGenerator_Application_t1068____persistentDataPath_PropertyInfo,
	Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3060,
	Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4806,
	Behaviour_t928_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4564,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4617,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4616,
	Camera_t440_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3096,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_depth_m4529,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4630,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_eventMask_m5787,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5788,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5789,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5790,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5792,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5793,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5794,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5795,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5796,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5797,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5798,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_main_m2812,
	Camera_t440_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5799,
	Camera_t440_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5800,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5805,
	Camera_t440_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5807,
	CameraCallback_t1069_CustomAttributesCacheGenerator,
	Debug_t1070_CustomAttributesCacheGenerator_Debug_Internal_Log_m5808,
	Debug_t1070_CustomAttributesCacheGenerator_Debug_t1070_Debug_Internal_Log_m5808_Arg2_ParameterInfo,
	Debug_t1070_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5809,
	Debug_t1070_CustomAttributesCacheGenerator_Debug_t1070_Debug_Internal_LogException_m5809_Arg1_ParameterInfo,
	Debug_t1070_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2871,
	Display_t1073_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5835,
	Display_t1073_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5836,
	Display_t1073_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5837,
	Display_t1073_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5838,
	Display_t1073_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5839,
	Display_t1073_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5840,
	Display_t1073_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5841,
	Display_t1073_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5842,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2820,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2819,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5843,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5844,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5845,
	Input_t551_CustomAttributesCacheGenerator_Input_GetAxis_m3108,
	Input_t551_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4608,
	Input_t551_CustomAttributesCacheGenerator_Input_GetButtonDown_m4607,
	Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButton_m3024,
	Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2815,
	Input_t551_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3023,
	Input_t551_CustomAttributesCacheGenerator_Input_get_mousePosition_m2813,
	Input_t551_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4581,
	Input_t551_CustomAttributesCacheGenerator_Input_get_mousePresent_m4606,
	Input_t551_CustomAttributesCacheGenerator_Input_GetTouch_m2560,
	Input_t551_CustomAttributesCacheGenerator_Input_get_touchCount_m2559,
	Input_t551_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4836,
	Input_t551_CustomAttributesCacheGenerator_Input_get_compositionString_m4774,
	Input_t551_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5847,
	HideFlags_t1076_CustomAttributesCacheGenerator,
	Object_t547_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5850,
	Object_t547_CustomAttributesCacheGenerator_Object_Destroy_m5851,
	Object_t547_CustomAttributesCacheGenerator_Object_t547_Object_Destroy_m5851_Arg1_ParameterInfo,
	Object_t547_CustomAttributesCacheGenerator_Object_Destroy_m2718,
	Object_t547_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5852,
	Object_t547_CustomAttributesCacheGenerator_Object_t547_Object_DestroyImmediate_m5852_Arg1_ParameterInfo,
	Object_t547_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4838,
	Object_t547_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5853,
	Object_t547_CustomAttributesCacheGenerator_Object_get_name_m4809,
	Object_t547_CustomAttributesCacheGenerator_Object_set_name_m4899,
	Object_t547_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2637,
	Object_t547_CustomAttributesCacheGenerator_Object_set_hideFlags_m4810,
	Object_t547_CustomAttributesCacheGenerator_Object_ToString_m3266,
	Object_t547_CustomAttributesCacheGenerator_Object_Instantiate_m2948,
	Object_t547_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5859,
	Component_t597_CustomAttributesCacheGenerator_Component_get_transform_m2842,
	Component_t597_CustomAttributesCacheGenerator_Component_get_gameObject_m2636,
	Component_t597_CustomAttributesCacheGenerator_Component_GetComponent_m4947,
	Component_t597_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5861,
	Component_t597_CustomAttributesCacheGenerator_Component_GetComponent_m6654,
	Component_t597_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5862,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5864,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5865,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6658,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5866,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5867,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2845,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4812,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4813,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2774,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4565,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3110,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3019,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5868,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5868_Arg1_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5868_Arg2_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5869,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5870,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5871,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5871_Arg0_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5875,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5876,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5877,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5878,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5879,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5880,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5881,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5882,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5883,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5884,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5885,
	Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5886,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2949,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5887,
	Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3087,
	Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5888_Arg1_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5889,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5890,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3091,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4811,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2950,
	Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3090,
	Time_t1078_CustomAttributesCacheGenerator_Time_get_time_m2970,
	Time_t1078_CustomAttributesCacheGenerator_Time_get_deltaTime_m2996,
	Time_t1078_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4610,
	Time_t1078_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4642,
	Time_t1078_CustomAttributesCacheGenerator_Time_set_timeScale_m2779,
	Random_t1079_CustomAttributesCacheGenerator_Random_set_seed_m3046,
	Random_t1079_CustomAttributesCacheGenerator_Random_Range_m2994,
	Random_t1079_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5892,
	PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5895,
	PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5896,
	PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_t1081_PlayerPrefs_GetString_m5896_Arg1_ParameterInfo,
	PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2738,
	PlayerPrefs_t1081_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2737,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5914,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m5915_Arg3_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m5915_Arg4_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_Raycast_m2816,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m4696_Arg2_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_Raycast_m4696_Arg3_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m4632_Arg1_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m4632_Arg2_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m5916_Arg2_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_t1083_Physics_RaycastAll_m5916_Arg3_ParameterInfo,
	Physics_t1083_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5917,
	Collider_t600_CustomAttributesCacheGenerator_Collider_set_enabled_m2829,
	Collider_t600_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5918,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3006,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_IgnoreLayerCollision_m3006_Arg2_ParameterInfo,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5922,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_Raycast_m4697,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg2_ParameterInfo,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg3_ParameterInfo,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg4_ParameterInfo,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_t631_Physics2D_Raycast_m5923_Arg5_ParameterInfo,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4620,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5924,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3018,
	Physics2D_t631_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5925,
	Collider2D_t483_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3077,
	Collider2D_t483_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5927,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_set_clip_m2804,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m5943,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_Play_m5943_Arg0_ParameterInfo,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m2971,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m2984,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Stop_m2805,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3076,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5944,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_PlayOneShot_m5944_Arg1_ParameterInfo,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2818,
	AnimationEvent_t1094_CustomAttributesCacheGenerator_AnimationEvent_t1094____data_PropertyInfo,
	AnimationCurve_t1098_CustomAttributesCacheGenerator,
	AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_t1098_AnimationCurve__ctor_m5970_Arg0_ParameterInfo,
	AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5972,
	AnimationCurve_t1098_CustomAttributesCacheGenerator_AnimationCurve_Init_m5974,
	AnimatorStateInfo_t1095_CustomAttributesCacheGenerator_AnimatorStateInfo_t1095____nameHash_PropertyInfo,
	Animator_t516_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4891,
	Animator_t516_CustomAttributesCacheGenerator_Animator_StringToHash_m5993,
	Animator_t516_CustomAttributesCacheGenerator_Animator_SetIntegerString_m5994,
	Animator_t516_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5995,
	Animator_t516_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5996,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2810,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2811,
	CharacterInfo_t1104_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1104_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1104_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1104_CustomAttributesCacheGenerator_flipped,
	Font_t747_CustomAttributesCacheGenerator_Font_get_material_m4903,
	Font_t747_CustomAttributesCacheGenerator_Font_HasCharacter_m4795,
	Font_t747_CustomAttributesCacheGenerator_Font_get_dynamic_m4905,
	Font_t747_CustomAttributesCacheGenerator_Font_get_fontSize_m4906,
	FontTextureRebuildCallback_t1105_CustomAttributesCacheGenerator,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_Init_m6024,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6025,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6028,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4808,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6029,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6030,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6031,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6032,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6033,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6034,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4788,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6035,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6036,
	TextGenerator_t785_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4825,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4692,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4920,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3117,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6047,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2966,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4924,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4720,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4925,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4679,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4694,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4693,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4701,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4666,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4902,
	CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3092,
	CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4883,
	CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6049,
	CanvasGroup_t496_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4678,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6052,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4682,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4957,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4674,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6053,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6054,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4670,
	CanvasRenderer_t752_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4667,
	RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6056,
	RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6058,
	RectTransformUtility_t902_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4681,
	Request_t1109_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1109_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1109_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1109_CustomAttributesCacheGenerator_Request_get_sourceId_m6063,
	Request_t1109_CustomAttributesCacheGenerator_Request_get_appId_m6064,
	Request_t1109_CustomAttributesCacheGenerator_Request_get_domain_m6065,
	Response_t1111_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1111_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1111_CustomAttributesCacheGenerator_Response_get_success_m6074,
	Response_t1111_CustomAttributesCacheGenerator_Response_set_success_m6075,
	Response_t1111_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6076,
	Response_t1111_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6077,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6082,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6083,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6084,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6085,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6086,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6087,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6088,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6089,
	CreateMatchRequest_t1114_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6090,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6093,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6094,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6095,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6096,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6097,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6098,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6099,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6100,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6101,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6102,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6103,
	CreateMatchResponse_t1115_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6104,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6108,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6109,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6110,
	JoinMatchRequest_t1116_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6111,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6114,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6115,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6116,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6117,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6118,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6119,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6120,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6121,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6122,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6123,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6124,
	JoinMatchResponse_t1117_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6125,
	DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6129,
	DestroyMatchRequest_t1118_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6130,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6133,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6134,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6135,
	DropConnectionRequest_t1119_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6136,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6139,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6140,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6141,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6142,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6143,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6144,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6145,
	ListMatchRequest_t1120_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6146,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6149,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6150,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6151,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6152,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6153,
	MatchDirectConnectInfo_t1121_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6154,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6158,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6159,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_name_m6160,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_name_m6161,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6162,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6163,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6164,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6165,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6166,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6167,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6168,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6169,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6170,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6171,
	MatchDesc_t1123_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6172,
	ListMatchResponse_t1125_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1125_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6176,
	ListMatchResponse_t1125_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6177,
	AppID_t1126_CustomAttributesCacheGenerator,
	SourceID_t1127_CustomAttributesCacheGenerator,
	NetworkID_t1128_CustomAttributesCacheGenerator,
	NodeID_t1129_CustomAttributesCacheGenerator,
	NetworkMatch_t1134_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6670,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6676,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6677,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1304_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6679,
	JsonArray_t1135_CustomAttributesCacheGenerator,
	JsonObject_t1136_CustomAttributesCacheGenerator,
	SimpleJson_t1139_CustomAttributesCacheGenerator,
	SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6221,
	SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6233,
	SimpleJson_t1139_CustomAttributesCacheGenerator_SimpleJson_t1139____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1137_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1137_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6683,
	PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6250,
	PocoJsonSerializerStrategy_t1138_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6251,
	ReflectionUtils_t1153_CustomAttributesCacheGenerator,
	ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetConstructorInfo_m6276_Arg1_ParameterInfo,
	ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetContructor_m6281_Arg1_ParameterInfo,
	ReflectionUtils_t1153_CustomAttributesCacheGenerator_ReflectionUtils_t1153_ReflectionUtils_GetConstructorByReflection_m6283_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1307_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1146_CustomAttributesCacheGenerator_ConstructorDelegate_t1146_ConstructorDelegate_Invoke_m6261_Arg0_ParameterInfo,
	ConstructorDelegate_t1146_CustomAttributesCacheGenerator_ConstructorDelegate_t1146_ConstructorDelegate_BeginInvoke_m6262_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1148_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1149_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1150_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1151_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1152_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1155_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t951_CustomAttributesCacheGenerator,
	RequireComponent_t945_CustomAttributesCacheGenerator,
	WritableAttribute_t1161_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1162_CustomAttributesCacheGenerator,
	GUIStateObjects_t1174_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6316,
	Achievement_t1177_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1177_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1177_CustomAttributesCacheGenerator_Achievement_get_id_m6338,
	Achievement_t1177_CustomAttributesCacheGenerator_Achievement_set_id_m6339,
	Achievement_t1177_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6340,
	Achievement_t1177_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6341,
	AchievementDescription_t1178_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1178_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6348,
	AchievementDescription_t1178_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6349,
	Score_t1179_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1179_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1179_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6358,
	Score_t1179_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6359,
	Score_t1179_CustomAttributesCacheGenerator_Score_get_value_m6360,
	Score_t1179_CustomAttributesCacheGenerator_Score_set_value_m6361,
	Leaderboard_t1017_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1017_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1017_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1017_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_id_m6369,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_id_m6370,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6371,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6372,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_range_m6373,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_range_m6374,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6375,
	Leaderboard_t1017_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6376,
	PropertyAttribute_t1193_CustomAttributesCacheGenerator,
	TooltipAttribute_t954_CustomAttributesCacheGenerator,
	SpaceAttribute_t952_CustomAttributesCacheGenerator,
	RangeAttribute_t949_CustomAttributesCacheGenerator,
	TextAreaAttribute_t955_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t953_CustomAttributesCacheGenerator,
	StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6419,
	StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6422,
	StackTraceUtility_t1196_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6424,
	SharedBetweenAnimatorsAttribute_t1197_CustomAttributesCacheGenerator,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1204_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1208_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1208_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1208_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1208_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1208_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1210_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1213_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1213_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1214_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1215_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1216_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t943_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1218_CustomAttributesCacheGenerator,
};
