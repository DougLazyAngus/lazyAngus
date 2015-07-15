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
extern TypeInfo* InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t639_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t639 * tmp;
		tmp = (ExtensionAttribute_t639 *)il2cpp_codegen_object_new (ExtensionAttribute_t639_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3144(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1001_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1001_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_t733_LayerMask_GetMask_m5182_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void RuntimePlatform_t1007_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void RuntimePlatform_t1007_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SystemInfo_t1008_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Coroutine_t788_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5188_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MeshFilter_t627_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_t400_Mesh_Internal_Create_m5262_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_vertices_m3005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_triangles_m3006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_set_enabled_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_material_m2831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_set_material_m2833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_bounds_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_get_width_m2555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_get_height_m2571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_get_dpi_m4948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Screen_t1022_CustomAttributesCacheGenerator_Screen_get_orientation_m2570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5289_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5290_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5290_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RenderTexture_t1023_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RenderTexture_t1023_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUILayer_t1026_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Gradient_t1029_CustomAttributesCacheGenerator_Gradient_Init_m5301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Gradient_t1029_CustomAttributesCacheGenerator_Gradient_Cleanup_m5302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_set_changed_m5314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_get_enabled_m5315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_set_enabled_m2589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Label_m2567_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Box_m2583_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Button_m2565_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_TextField_m2568_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_TextField_m2941_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Toggle_m2614_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_SelectionGrid_m2612_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_SelectionGrid_m5353_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginHorizontal_m2566_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginHorizontal_m5354_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginVertical_m2580_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginVertical_m5355_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginScrollView_m2588_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginScrollView_m5356_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_t550_GUILayoutUtility_GetRect_m5377_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_t550_GUILayoutUtility_GetRect_m5379_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIClip_t1045_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIClip_t1045_CustomAttributesCacheGenerator_GUIClip_Pop_m5447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISettings_t1046_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISettings_t1046_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISettings_t1046_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISettings_t1046_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISettings_t1046_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t951_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1614);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t951 * tmp;
		tmp = (ExecuteInEditMode_t951 *)il2cpp_codegen_object_new (ExecuteInEditMode_t951_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5057(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUISkin_t618_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUIContent_t620_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUIContent_t620_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void GUIContent_t620_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_Init_m5516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_Init_m5523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_left_m4965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_left_m5525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_right_m5526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_right_m5527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_top_m4966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_top_m5528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5559_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Init_m5580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Cleanup_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_rawType_m4821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_type_m2949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_modifiers_m4817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_character_m4819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_commandName_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_get_keyCode_m4818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_Use_m5591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Event_t621_CustomAttributesCacheGenerator_Event_PopEvent_m4822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void EventModifiers_t1056_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1157_il2cpp_TypeInfo_var;
void Color32_t593_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2274);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1157 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1157 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1157_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6318(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t622_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t880_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Mathf_t629_CustomAttributesCacheGenerator_Mathf_t629_Mathf_SmoothDamp_m4882_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Mathf_t629_CustomAttributesCacheGenerator_Mathf_t629_Mathf_SmoothDamp_m4882_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1058_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void Resources_t625_CustomAttributesCacheGenerator_Resources_Load_m5735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextAsset_t617_CustomAttributesCacheGenerator_TextAsset_get_text_m2932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Shader_t1063_CustomAttributesCacheGenerator_Shader_PropertyToID_m5738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_SetTexture_m5740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_GetTexture_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_SetFloat_m5744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_HasProperty_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void Material_t401_CustomAttributesCacheGenerator_Material_t401_Material_Internal_CreateWithMaterial_m5746_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_rect_m4748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_texture_m4741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_border_m4742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SpriteRenderer_t471_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void SpriteRenderer_t471_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m3020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5772_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5781_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5783_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5783_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_URLEncode_m5787_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_QPEncode_m5789_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_SevenBitClean_m5792_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void CacheIndex_t1068_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void UnityString_t1069_CustomAttributesCacheGenerator_UnityString_t1069_UnityString_Format_m5794_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AsyncOperation_t1002_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_isPlaying_m4862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_isEditor_m4864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_platform_m2809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_t1070_Application_ExternalCall_m2898_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_t1070_Application_BuildInvocationForArguments_m5803_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_OpenURL_m2803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1301_il2cpp_TypeInfo_var;
void Application_t1070_CustomAttributesCacheGenerator_Application_t1070____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1301 * tmp;
		tmp = (SecurityCriticalAttribute_t1301 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1301_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m6676(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_depth_m4554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_eventMask_m5812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_main_m2837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var;
void CameraCallback_t1071_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1302 * tmp;
		tmp = (EditorBrowsableAttribute_t1302 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6677(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Debug_t1072_CustomAttributesCacheGenerator_Debug_Internal_Log_m5833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void Debug_t1072_CustomAttributesCacheGenerator_Debug_t1072_Debug_Internal_Log_m5833_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Debug_t1072_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void Debug_t1072_CustomAttributesCacheGenerator_Debug_t1072_Debug_Internal_LogException_m5834_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Debug_t1072_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Display_t1075_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetAxis_m3133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetButtonDown_m4632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButton_m3049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_get_mousePosition_m2838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_get_mousePresent_m4631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_GetTouch_m2585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_get_touchCount_m2584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_get_compositionString_m4799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Input_t553_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void HideFlags_t1078_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_Destroy_m5876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_t549_Object_Destroy_m5876_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_Destroy_m2743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_t549_Object_DestroyImmediate_m5877_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_get_name_m4834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_set_name_m4924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_set_hideFlags_m4835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_ToString_m3291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_Instantiate_m2973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void Object_t549_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_get_transform_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_get_gameObject_m2661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_GetComponent_m4972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_GetComponent_m6679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Component_t599_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5893_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5893_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1220 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1220 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1220_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6533(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1163_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5896_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1163 * tmp;
		tmp = (WritableAttribute_t1163 *)il2cpp_codegen_object_new (WritableAttribute_t1163_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6326(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5913_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Time_t1080_CustomAttributesCacheGenerator_Time_get_time_m2995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Time_t1080_CustomAttributesCacheGenerator_Time_get_deltaTime_m3021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Time_t1080_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Time_t1080_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Time_t1080_CustomAttributesCacheGenerator_Time_set_timeScale_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Random_t1081_CustomAttributesCacheGenerator_Random_set_seed_m3071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Random_t1081_CustomAttributesCacheGenerator_Random_Range_m3019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Random_t1081_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_t1083_PlayerPrefs_GetString_m5921_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m5940_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m5940_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_Raycast_m2841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m4721_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m4721_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m4657_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m4657_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m5941_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m5941_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics_t1085_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Collider_t602_CustomAttributesCacheGenerator_Collider_set_enabled_m2854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Collider_t602_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_IgnoreLayerCollision_m3031_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_Raycast_m4722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_set_clip_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m5968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_Play_m5968_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m2996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Stop_m2830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1217_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_PlayOneShot_m5969_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1217 * tmp;
		tmp = (DefaultValueAttribute_t1217 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1217_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6528(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var;
void AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1218 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1218 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1218_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6532(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void AnimationEvent_t1096_CustomAttributesCacheGenerator_AnimationEvent_t1096____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1100_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_t1100_AnimationCurve__ctor_m5995_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_Init_m5999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1097_CustomAttributesCacheGenerator_AnimatorStateInfo_t1097____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Animator_t518_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Animator_t518_CustomAttributesCacheGenerator_Animator_StringToHash_m6018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Animator_t518_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Animator_t518_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Animator_t518_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void CharacterInfo_t1106_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void CharacterInfo_t1106_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void CharacterInfo_t1106_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t644_il2cpp_TypeInfo_var;
void CharacterInfo_t1106_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t644 * tmp;
		tmp = (ObsoleteAttribute_t644 *)il2cpp_codegen_object_new (ObsoleteAttribute_t644_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3268(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Font_t748_CustomAttributesCacheGenerator_Font_get_material_m4928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Font_t748_CustomAttributesCacheGenerator_Font_HasCharacter_m4820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Font_t748_CustomAttributesCacheGenerator_Font_get_dynamic_m4930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Font_t748_CustomAttributesCacheGenerator_Font_get_fontSize_m4931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1107_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1302 * tmp;
		tmp = (EditorBrowsableAttribute_t1302 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6677(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_Init_m6049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1156_il2cpp_TypeInfo_var;
void RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1156 * tmp;
		tmp = (WrapperlessIcall_t1156 *)il2cpp_codegen_object_new (WrapperlessIcall_t1156_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6317(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_Request_get_sourceId_m6088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_Request_get_appId_m6089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1111_CustomAttributesCacheGenerator_Request_get_domain_m6090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_Response_get_success_m6099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_Response_set_success_m6100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1113_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_name_m6185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_name_m6186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1127_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1127_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1127_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1304_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1128_il2cpp_TypeInfo_var;
void AppID_t1128_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2277);
		AppID_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2165);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1304 * tmp;
		tmp = (DefaultValueAttribute_t1304 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1304_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6694(tmp, Box(AppID_t1128_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1304_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1129_il2cpp_TypeInfo_var;
void SourceID_t1129_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2277);
		SourceID_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2164);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1304 * tmp;
		tmp = (DefaultValueAttribute_t1304 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1304_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6694(tmp, Box(SourceID_t1129_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1304_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1130_il2cpp_TypeInfo_var;
void NetworkID_t1130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2277);
		NetworkID_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2167);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1304 * tmp;
		tmp = (DefaultValueAttribute_t1304 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1304_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6694(tmp, Box(NetworkID_t1130_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1304_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1131_il2cpp_TypeInfo_var;
void NodeID_t1131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2277);
		NodeID_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1304 * tmp;
		tmp = (DefaultValueAttribute_t1304 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1304_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6694(tmp, Box(NodeID_t1131_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1136_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6695(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6701(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6702(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6704(CustomAttributesCache* cache)
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
extern TypeInfo* EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
void JsonArray_t1137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1302 * tmp;
		tmp = (EditorBrowsableAttribute_t1302 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6677(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1302 * tmp;
		tmp = (EditorBrowsableAttribute_t1302 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6677(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
void SimpleJson_t1141_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var;
void SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1308 * tmp;
		tmp = (SuppressMessageAttribute_t1308 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6706(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6707(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var;
void SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1308 * tmp;
		tmp = (SuppressMessageAttribute_t1308 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6706(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var;
void SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_t1141____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1302 * tmp;
		tmp = (EditorBrowsableAttribute_t1302 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1302_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6677(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1139_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1308 * tmp;
		tmp = (SuppressMessageAttribute_t1308 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6706(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6707(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1308 * tmp;
		tmp = (SuppressMessageAttribute_t1308 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6706(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6707(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1308 * tmp;
		tmp = (SuppressMessageAttribute_t1308 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1308_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6706(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6707(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var;
void ReflectionUtils_t1155_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1307 * tmp;
		tmp = (GeneratedCodeAttribute_t1307 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1307_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetConstructorInfo_m6301_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetContructor_m6306_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetConstructorByReflection_m6308_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1309_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1148_CustomAttributesCacheGenerator_ConstructorDelegate_t1148_ConstructorDelegate_Invoke_m6286_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t640_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1148_CustomAttributesCacheGenerator_ConstructorDelegate_t1148_ConstructorDelegate_BeginInvoke_m6287_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t640 * tmp;
		tmp = (ParamArrayAttribute_t640 *)il2cpp_codegen_object_new (ParamArrayAttribute_t640_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3163(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1150_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1151_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1152_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1153_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1154_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1157_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t952_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void RequireComponent_t946_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void WritableAttribute_t1163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1164_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void GUIStateObjects_t1176_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_Achievement_get_id_m6363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_Achievement_set_id_m6364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1179_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1180_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1180_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1180_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_Score_get_value_m6385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1181_CustomAttributesCacheGenerator_Score_set_value_m6386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_id_m6394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_id_m6395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_range_m6398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_range_m6399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void PropertyAttribute_t1195_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void TooltipAttribute_t955_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void SpaceAttribute_t953_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void RangeAttribute_t950_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void TextAreaAttribute_t956_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t954_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var;
void StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1300 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1300 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1300_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6672(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1199_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void ArgumentCache_t1206_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void PersistentCall_t1210_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void PersistentCall_t1210_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void PersistentCall_t1210_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void PersistentCall_t1210_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
void PersistentCall_t1210_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1212_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var;
void UnityEventBase_t1215_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1611);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t944 * tmp;
		tmp = (FormerlySerializedAsAttribute_t944 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t944_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5021(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t646_il2cpp_TypeInfo_var;
void UnityEventBase_t1215_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t646 * tmp;
		tmp = (SerializeField_t646 *)il2cpp_codegen_object_new (SerializeField_t646_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3273(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t943_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1610);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t943 * tmp;
		tmp = (AddComponentMenu_t943 *)il2cpp_codegen_object_new (AddComponentMenu_t943_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5020(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t944_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6733(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t645_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1220_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t645 * tmp;
		tmp = (AttributeUsageAttribute_t645 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t645_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3270(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[786] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1001_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5170,
	AssetBundleCreateRequest_t1001_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5171,
	AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5175,
	AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5176,
	AssetBundle_t1003_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5177,
	LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5180,
	LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5181,
	LayerMask_t733_CustomAttributesCacheGenerator_LayerMask_t733_LayerMask_GetMask_m5182_Arg0_ParameterInfo,
	RuntimePlatform_t1007_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t1007_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t1007_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1008_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5183,
	Coroutine_t788_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5186,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5188,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5188_Arg0_ParameterInfo,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5189,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5191,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5196,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5197,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5198,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5199,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5200,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5201,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5202,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5203,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5204,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5205,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5206,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5207,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5208,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5209,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5210,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5211,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5212,
	GameCenterPlatform_t638_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5214,
	GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5258,
	GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5259,
	GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5260,
	GcLeaderboard_t1020_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5261,
	MeshFilter_t627_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3004,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5262,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_t400_Mesh_Internal_Create_m5262_Arg0_ParameterInfo,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_vertices_m3005,
	Mesh_t400_CustomAttributesCacheGenerator_Mesh_set_triangles_m3006,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_set_enabled_m2853,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_material_m2831,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_set_material_m2833,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_bounds_m2862,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4651,
	Renderer_t543_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4652,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_get_width_m2555,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_get_height_m2571,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_get_dpi_m4948,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2928,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2929,
	Screen_t1022_CustomAttributesCacheGenerator_Screen_get_orientation_m2570,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5284,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5285,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5289,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5289_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4694,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4770,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5290,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5290_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5290_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2597,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2596,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5291,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2598,
	RenderTexture_t1023_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5292,
	RenderTexture_t1023_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5293,
	GUILayer_t1026_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5297,
	Gradient_t1029_CustomAttributesCacheGenerator_Gradient_Init_m5301,
	Gradient_t1029_CustomAttributesCacheGenerator_Gradient_Cleanup_m5302,
	GUI_t551_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t551_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t551_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5309,
	GUI_t551_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5310,
	GUI_t551_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5311,
	GUI_t551_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5312,
	GUI_t551_CustomAttributesCacheGenerator_GUI_set_changed_m5314,
	GUI_t551_CustomAttributesCacheGenerator_GUI_get_enabled_m5315,
	GUI_t551_CustomAttributesCacheGenerator_GUI_set_enabled_m2589,
	GUI_t551_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5317,
	GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5320,
	GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5323,
	GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5330,
	GUI_t551_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5337,
	GUI_t551_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5339,
	GUI_t551_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5346,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Label_m2567_Arg1_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Box_m2583_Arg1_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Button_m2565_Arg1_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_TextField_m2568_Arg1_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_TextField_m2941_Arg2_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_Toggle_m2614_Arg2_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_SelectionGrid_m2612_Arg3_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_SelectionGrid_m5353_Arg4_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginHorizontal_m2566_Arg0_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginHorizontal_m5354_Arg2_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginVertical_m2580_Arg0_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginVertical_m5355_Arg2_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginScrollView_m2588_Arg1_ParameterInfo,
	GUILayout_t1032_CustomAttributesCacheGenerator_GUILayout_t1032_GUILayout_BeginScrollView_m5356_Arg6_ParameterInfo,
	GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5371,
	GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5373,
	GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5374,
	GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_t550_GUILayoutUtility_GetRect_m5377_Arg2_ParameterInfo,
	GUILayoutUtility_t550_CustomAttributesCacheGenerator_GUILayoutUtility_t550_GUILayoutUtility_GetRect_m5379_Arg3_ParameterInfo,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5421,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5425,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5429,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5430,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5431,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5432,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5433,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5434,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5436,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5438,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5442,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5443,
	GUIUtility_t1044_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5444,
	GUIClip_t1045_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5446,
	GUIClip_t1045_CustomAttributesCacheGenerator_GUIClip_Pop_m5447,
	GUISettings_t1046_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1046_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1046_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1046_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1046_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t618_CustomAttributesCacheGenerator,
	GUISkin_t618_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t618_CustomAttributesCacheGenerator_m_box,
	GUISkin_t618_CustomAttributesCacheGenerator_m_button,
	GUISkin_t618_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t618_CustomAttributesCacheGenerator_m_label,
	GUISkin_t618_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t618_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t618_CustomAttributesCacheGenerator_m_window,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t618_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t618_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t618_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t618_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t618_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t620_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t620_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t620_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_Init_m5516,
	GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5517,
	GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5518,
	GUIStyleState_t1050_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5519,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_Init_m5523,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5524,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_left_m4965,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_left_m5525,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_right_m5526,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_right_m5527,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_top_m4966,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_top_m5528,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2952,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5529,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4958,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4960,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5531,
	RectOffset_t546_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5533,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5537,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5538,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5539,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5540,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5542,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5544,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5545,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5546,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2557,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5547,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2558,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5548,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5549,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5550,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2562,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5551,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2561,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5552,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5555,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5558,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5559_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5561,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5562,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5566,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5568,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5570,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5573,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5576,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5578,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4859,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4860,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg1_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg2_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg3_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg4_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg5_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_t783_TouchScreenKeyboard_Open_m5579_Arg6_ParameterInfo,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4797,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4798,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4858,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4796,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4857,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4808,
	TouchScreenKeyboard_t783_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4807,
	Event_t621_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t621_CustomAttributesCacheGenerator_Event_Init_m5580,
	Event_t621_CustomAttributesCacheGenerator_Event_Cleanup_m5582,
	Event_t621_CustomAttributesCacheGenerator_Event_get_rawType_m4821,
	Event_t621_CustomAttributesCacheGenerator_Event_get_type_m2949,
	Event_t621_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5583,
	Event_t621_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5585,
	Event_t621_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5587,
	Event_t621_CustomAttributesCacheGenerator_Event_get_modifiers_m4817,
	Event_t621_CustomAttributesCacheGenerator_Event_get_character_m4819,
	Event_t621_CustomAttributesCacheGenerator_Event_get_commandName_m5588,
	Event_t621_CustomAttributesCacheGenerator_Event_get_keyCode_m4818,
	Event_t621_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5589,
	Event_t621_CustomAttributesCacheGenerator_Event_Use_m5591,
	Event_t621_CustomAttributesCacheGenerator_Event_PopEvent_m4822,
	EventModifiers_t1056_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t413_CustomAttributesCacheGenerator,
	Color_t257_CustomAttributesCacheGenerator,
	Color32_t593_CustomAttributesCacheGenerator,
	Quaternion_t622_CustomAttributesCacheGenerator,
	Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5617,
	Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5620,
	Quaternion_t622_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5622,
	Matrix4x4_t919_CustomAttributesCacheGenerator,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5638,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5640,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5642,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5645,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5657,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5660,
	Matrix4x4_t919_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5661,
	Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5678,
	Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5681,
	Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5684,
	Bounds_t603_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5688,
	Vector4_t880_CustomAttributesCacheGenerator,
	Mathf_t629_CustomAttributesCacheGenerator_Mathf_t629_Mathf_SmoothDamp_m4882_Arg4_ParameterInfo,
	Mathf_t629_CustomAttributesCacheGenerator_Mathf_t629_Mathf_SmoothDamp_m4882_Arg5_ParameterInfo,
	DrivenTransformProperties_t1058_CustomAttributesCacheGenerator,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5719,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5720,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5721,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5722,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5723,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5724,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5725,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5726,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5727,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5728,
	RectTransform_t525_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5729,
	Resources_t625_CustomAttributesCacheGenerator_Resources_Load_m5735,
	TextAsset_t617_CustomAttributesCacheGenerator_TextAsset_get_text_m2932,
	SerializePrivateVariables_t1062_CustomAttributesCacheGenerator,
	Shader_t1063_CustomAttributesCacheGenerator_Shader_PropertyToID_m5738,
	Material_t401_CustomAttributesCacheGenerator_Material_SetTexture_m5740,
	Material_t401_CustomAttributesCacheGenerator_Material_GetTexture_m5742,
	Material_t401_CustomAttributesCacheGenerator_Material_SetFloat_m5744,
	Material_t401_CustomAttributesCacheGenerator_Material_HasProperty_m5745,
	Material_t401_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5746,
	Material_t401_CustomAttributesCacheGenerator_Material_t401_Material_Internal_CreateWithMaterial_m5746_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5749,
	SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5752,
	SphericalHarmonicsL2_t1064_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5755,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_rect_m4748,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4744,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_texture_m4741,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4767,
	Sprite_t393_CustomAttributesCacheGenerator_Sprite_get_border_m4742,
	SpriteRenderer_t471_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5765,
	SpriteRenderer_t471_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5766,
	DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4755,
	DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4754,
	DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4747,
	DataUtility_t1065_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5767,
	WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5770,
	WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5771,
	WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m3020,
	WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5772_Arg1_ParameterInfo,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5773,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5776,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2692,
	WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5777,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5778,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2601,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5781_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2600,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5783_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5783_Arg3_ParameterInfo,
	WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_URLEncode_m5787_Arg1_ParameterInfo,
	WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_QPEncode_m5789_Arg1_ParameterInfo,
	WWWTranscoder_t1067_CustomAttributesCacheGenerator_WWWTranscoder_t1067_WWWTranscoder_SevenBitClean_m5792_Arg1_ParameterInfo,
	CacheIndex_t1068_CustomAttributesCacheGenerator,
	UnityString_t1069_CustomAttributesCacheGenerator_UnityString_t1069_UnityString_Format_m5794_Arg1_ParameterInfo,
	AsyncOperation_t1002_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5796,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2848,
	Application_t1070_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5801,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_isPlaying_m4862,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_isEditor_m4864,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2897,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_platform_m2809,
	Application_t1070_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3105,
	Application_t1070_CustomAttributesCacheGenerator_Application_t1070_Application_ExternalCall_m2898_Arg1_ParameterInfo,
	Application_t1070_CustomAttributesCacheGenerator_Application_t1070_Application_BuildInvocationForArguments_m5803_Arg1_ParameterInfo,
	Application_t1070_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5804,
	Application_t1070_CustomAttributesCacheGenerator_Application_OpenURL_m2803,
	Application_t1070_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5806,
	Application_t1070_CustomAttributesCacheGenerator_Application_t1070____persistentDataPath_PropertyInfo,
	Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3085,
	Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4831,
	Behaviour_t929_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4589,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4642,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4641,
	Camera_t441_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3121,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_depth_m4554,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4655,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_eventMask_m5812,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5813,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5814,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5815,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5817,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5818,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5819,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5820,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5821,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5822,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5823,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_main_m2837,
	Camera_t441_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5824,
	Camera_t441_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5825,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5830,
	Camera_t441_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5832,
	CameraCallback_t1071_CustomAttributesCacheGenerator,
	Debug_t1072_CustomAttributesCacheGenerator_Debug_Internal_Log_m5833,
	Debug_t1072_CustomAttributesCacheGenerator_Debug_t1072_Debug_Internal_Log_m5833_Arg2_ParameterInfo,
	Debug_t1072_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5834,
	Debug_t1072_CustomAttributesCacheGenerator_Debug_t1072_Debug_Internal_LogException_m5834_Arg1_ParameterInfo,
	Debug_t1072_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2896,
	Display_t1075_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5860,
	Display_t1075_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5861,
	Display_t1075_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5862,
	Display_t1075_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5863,
	Display_t1075_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5864,
	Display_t1075_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5865,
	Display_t1075_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5866,
	Display_t1075_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5867,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2845,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2844,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5868,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5869,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5870,
	Input_t553_CustomAttributesCacheGenerator_Input_GetAxis_m3133,
	Input_t553_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4633,
	Input_t553_CustomAttributesCacheGenerator_Input_GetButtonDown_m4632,
	Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButton_m3049,
	Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2840,
	Input_t553_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3048,
	Input_t553_CustomAttributesCacheGenerator_Input_get_mousePosition_m2838,
	Input_t553_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4606,
	Input_t553_CustomAttributesCacheGenerator_Input_get_mousePresent_m4631,
	Input_t553_CustomAttributesCacheGenerator_Input_GetTouch_m2585,
	Input_t553_CustomAttributesCacheGenerator_Input_get_touchCount_m2584,
	Input_t553_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4861,
	Input_t553_CustomAttributesCacheGenerator_Input_get_compositionString_m4799,
	Input_t553_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5872,
	HideFlags_t1078_CustomAttributesCacheGenerator,
	Object_t549_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5875,
	Object_t549_CustomAttributesCacheGenerator_Object_Destroy_m5876,
	Object_t549_CustomAttributesCacheGenerator_Object_t549_Object_Destroy_m5876_Arg1_ParameterInfo,
	Object_t549_CustomAttributesCacheGenerator_Object_Destroy_m2743,
	Object_t549_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5877,
	Object_t549_CustomAttributesCacheGenerator_Object_t549_Object_DestroyImmediate_m5877_Arg1_ParameterInfo,
	Object_t549_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4863,
	Object_t549_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5878,
	Object_t549_CustomAttributesCacheGenerator_Object_get_name_m4834,
	Object_t549_CustomAttributesCacheGenerator_Object_set_name_m4924,
	Object_t549_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2662,
	Object_t549_CustomAttributesCacheGenerator_Object_set_hideFlags_m4835,
	Object_t549_CustomAttributesCacheGenerator_Object_ToString_m3291,
	Object_t549_CustomAttributesCacheGenerator_Object_Instantiate_m2973,
	Object_t549_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5884,
	Component_t599_CustomAttributesCacheGenerator_Component_get_transform_m2867,
	Component_t599_CustomAttributesCacheGenerator_Component_get_gameObject_m2661,
	Component_t599_CustomAttributesCacheGenerator_Component_GetComponent_m4972,
	Component_t599_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5886,
	Component_t599_CustomAttributesCacheGenerator_Component_GetComponent_m6679,
	Component_t599_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5887,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5889,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5890,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6683,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5891,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5892,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2870,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4837,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4838,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2799,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4590,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3135,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3044,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5893,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5893_Arg1_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5893_Arg2_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5894,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5895,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5896,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5896_Arg0_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5900,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5901,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5902,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5903,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5904,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5905,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5906,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5907,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5908,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5909,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5910,
	Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5911,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2974,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5912,
	Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3112,
	Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5913_Arg1_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5914,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5915,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3116,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4836,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2975,
	Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3115,
	Time_t1080_CustomAttributesCacheGenerator_Time_get_time_m2995,
	Time_t1080_CustomAttributesCacheGenerator_Time_get_deltaTime_m3021,
	Time_t1080_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4635,
	Time_t1080_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4667,
	Time_t1080_CustomAttributesCacheGenerator_Time_set_timeScale_m2804,
	Random_t1081_CustomAttributesCacheGenerator_Random_set_seed_m3071,
	Random_t1081_CustomAttributesCacheGenerator_Random_Range_m3019,
	Random_t1081_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5917,
	PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5920,
	PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5921,
	PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_t1083_PlayerPrefs_GetString_m5921_Arg1_ParameterInfo,
	PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2763,
	PlayerPrefs_t1083_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2762,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5939,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m5940_Arg3_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m5940_Arg4_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_Raycast_m2841,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m4721_Arg2_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_Raycast_m4721_Arg3_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m4657_Arg1_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m4657_Arg2_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m5941_Arg2_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_t1085_Physics_RaycastAll_m5941_Arg3_ParameterInfo,
	Physics_t1085_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5942,
	Collider_t602_CustomAttributesCacheGenerator_Collider_set_enabled_m2854,
	Collider_t602_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5943,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3031,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_IgnoreLayerCollision_m3031_Arg2_ParameterInfo,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5947,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_Raycast_m4722,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg2_ParameterInfo,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg3_ParameterInfo,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg4_ParameterInfo,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_t633_Physics2D_Raycast_m5948_Arg5_ParameterInfo,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4645,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5949,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3043,
	Physics2D_t633_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5950,
	Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3102,
	Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5952,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_set_clip_m2829,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m5968,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_Play_m5968_Arg0_ParameterInfo,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Play_m2996,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3009,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_Stop_m2830,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3101,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5969,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_t392_AudioSource_PlayOneShot_m5969_Arg1_ParameterInfo,
	AudioSource_t392_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2843,
	AnimationEvent_t1096_CustomAttributesCacheGenerator_AnimationEvent_t1096____data_PropertyInfo,
	AnimationCurve_t1100_CustomAttributesCacheGenerator,
	AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_t1100_AnimationCurve__ctor_m5995_Arg0_ParameterInfo,
	AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5997,
	AnimationCurve_t1100_CustomAttributesCacheGenerator_AnimationCurve_Init_m5999,
	AnimatorStateInfo_t1097_CustomAttributesCacheGenerator_AnimatorStateInfo_t1097____nameHash_PropertyInfo,
	Animator_t518_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4916,
	Animator_t518_CustomAttributesCacheGenerator_Animator_StringToHash_m6018,
	Animator_t518_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6019,
	Animator_t518_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6020,
	Animator_t518_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6021,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2835,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2836,
	CharacterInfo_t1106_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1106_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1106_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1106_CustomAttributesCacheGenerator_flipped,
	Font_t748_CustomAttributesCacheGenerator_Font_get_material_m4928,
	Font_t748_CustomAttributesCacheGenerator_Font_HasCharacter_m4820,
	Font_t748_CustomAttributesCacheGenerator_Font_get_dynamic_m4930,
	Font_t748_CustomAttributesCacheGenerator_Font_get_fontSize_m4931,
	FontTextureRebuildCallback_t1107_CustomAttributesCacheGenerator,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_Init_m6049,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6050,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6053,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4833,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6054,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6055,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6056,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6057,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6058,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6059,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4813,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6060,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6061,
	TextGenerator_t786_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4850,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4717,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4945,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3142,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6072,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2991,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4949,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4745,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4950,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4704,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4719,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4718,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4726,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4691,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4927,
	CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3117,
	CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4908,
	CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6074,
	CanvasGroup_t497_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4703,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6077,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4707,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4982,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4699,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6078,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6079,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4695,
	CanvasRenderer_t753_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4692,
	RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6081,
	RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6083,
	RectTransformUtility_t903_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4706,
	Request_t1111_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1111_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1111_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1111_CustomAttributesCacheGenerator_Request_get_sourceId_m6088,
	Request_t1111_CustomAttributesCacheGenerator_Request_get_appId_m6089,
	Request_t1111_CustomAttributesCacheGenerator_Request_get_domain_m6090,
	Response_t1113_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1113_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1113_CustomAttributesCacheGenerator_Response_get_success_m6099,
	Response_t1113_CustomAttributesCacheGenerator_Response_set_success_m6100,
	Response_t1113_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6101,
	Response_t1113_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6102,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6107,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6108,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6109,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6110,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6111,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6112,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6113,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6114,
	CreateMatchRequest_t1116_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6115,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6118,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6119,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6120,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6121,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6122,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6123,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6124,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6125,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6126,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6127,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6128,
	CreateMatchResponse_t1117_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6129,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6133,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6134,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6135,
	JoinMatchRequest_t1118_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6136,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6139,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6140,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6141,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6142,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6143,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6144,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6145,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6146,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6147,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6148,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6149,
	JoinMatchResponse_t1119_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6150,
	DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6154,
	DestroyMatchRequest_t1120_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6155,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6158,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6159,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6160,
	DropConnectionRequest_t1121_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6161,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6164,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6165,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6166,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6167,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6168,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6169,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6170,
	ListMatchRequest_t1122_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6171,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6174,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6175,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6176,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6177,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6178,
	MatchDirectConnectInfo_t1123_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6179,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6183,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6184,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_name_m6185,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_name_m6186,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6187,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6188,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6189,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6190,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6191,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6192,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6193,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6194,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6195,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6196,
	MatchDesc_t1125_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6197,
	ListMatchResponse_t1127_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1127_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6201,
	ListMatchResponse_t1127_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6202,
	AppID_t1128_CustomAttributesCacheGenerator,
	SourceID_t1129_CustomAttributesCacheGenerator,
	NetworkID_t1130_CustomAttributesCacheGenerator,
	NodeID_t1131_CustomAttributesCacheGenerator,
	NetworkMatch_t1136_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6695,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6701,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6702,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1306_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6704,
	JsonArray_t1137_CustomAttributesCacheGenerator,
	JsonObject_t1138_CustomAttributesCacheGenerator,
	SimpleJson_t1141_CustomAttributesCacheGenerator,
	SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6246,
	SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6258,
	SimpleJson_t1141_CustomAttributesCacheGenerator_SimpleJson_t1141____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1139_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1139_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6708,
	PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6275,
	PocoJsonSerializerStrategy_t1140_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6276,
	ReflectionUtils_t1155_CustomAttributesCacheGenerator,
	ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetConstructorInfo_m6301_Arg1_ParameterInfo,
	ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetContructor_m6306_Arg1_ParameterInfo,
	ReflectionUtils_t1155_CustomAttributesCacheGenerator_ReflectionUtils_t1155_ReflectionUtils_GetConstructorByReflection_m6308_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1309_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1148_CustomAttributesCacheGenerator_ConstructorDelegate_t1148_ConstructorDelegate_Invoke_m6286_Arg0_ParameterInfo,
	ConstructorDelegate_t1148_CustomAttributesCacheGenerator_ConstructorDelegate_t1148_ConstructorDelegate_BeginInvoke_m6287_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1150_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1151_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1152_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1153_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1154_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1157_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t952_CustomAttributesCacheGenerator,
	RequireComponent_t946_CustomAttributesCacheGenerator,
	WritableAttribute_t1163_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1164_CustomAttributesCacheGenerator,
	GUIStateObjects_t1176_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6341,
	Achievement_t1179_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1179_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1179_CustomAttributesCacheGenerator_Achievement_get_id_m6363,
	Achievement_t1179_CustomAttributesCacheGenerator_Achievement_set_id_m6364,
	Achievement_t1179_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6365,
	Achievement_t1179_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6366,
	AchievementDescription_t1180_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1180_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6373,
	AchievementDescription_t1180_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6374,
	Score_t1181_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1181_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1181_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6383,
	Score_t1181_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6384,
	Score_t1181_CustomAttributesCacheGenerator_Score_get_value_m6385,
	Score_t1181_CustomAttributesCacheGenerator_Score_set_value_m6386,
	Leaderboard_t1019_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1019_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1019_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1019_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_id_m6394,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_id_m6395,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6396,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6397,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_range_m6398,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_range_m6399,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6400,
	Leaderboard_t1019_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6401,
	PropertyAttribute_t1195_CustomAttributesCacheGenerator,
	TooltipAttribute_t955_CustomAttributesCacheGenerator,
	SpaceAttribute_t953_CustomAttributesCacheGenerator,
	RangeAttribute_t950_CustomAttributesCacheGenerator,
	TextAreaAttribute_t956_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t954_CustomAttributesCacheGenerator,
	StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6444,
	StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6447,
	StackTraceUtility_t1198_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6449,
	SharedBetweenAnimatorsAttribute_t1199_CustomAttributesCacheGenerator,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1206_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1210_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1210_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1210_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1210_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1210_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1212_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1215_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1215_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1216_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1217_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1218_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t944_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1220_CustomAttributesCacheGenerator,
};
