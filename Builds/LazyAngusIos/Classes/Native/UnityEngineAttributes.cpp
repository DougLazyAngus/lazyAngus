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
extern TypeInfo* InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t697_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2382);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t697 * tmp;
		tmp = (ExtensionAttribute_t697 *)il2cpp_codegen_object_new (ExtensionAttribute_t697_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3713(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1350 * tmp;
		tmp = (InternalsVisibleToAttribute_t1350 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1350_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7247(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1055_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1055_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_t787_LayerMask_GetMask_m5762_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void RuntimePlatform_t1061_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void RuntimePlatform_t1061_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SystemInfo_t1062_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SystemInfo_t1062_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Coroutine_t842_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_t106_ScriptableObject_Internal_CreateScriptableObject_m5768_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MeshFilter_t686_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_t437_Mesh_Internal_Create_m5842_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_vertices_m3570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_triangles_m3571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_set_enabled_m3419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_material_m3398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_set_material_m3400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_bounds_m3428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_get_width_m3054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_get_height_m3070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_get_dpi_m3179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Screen_t1076_CustomAttributesCacheGenerator_Screen_get_orientation_m3069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5869_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5870_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5870_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m3096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RenderTexture_t1077_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RenderTexture_t1077_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUILayer_t1080_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Gradient_t1083_CustomAttributesCacheGenerator_Gradient_Init_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Gradient_t1083_CustomAttributesCacheGenerator_Gradient_Cleanup_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_set_changed_m5894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_get_enabled_m5895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_set_enabled_m3088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Label_m3066_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Box_m3082_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Button_m3064_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_TextField_m3067_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_TextField_m3507_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Toggle_m3113_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_SelectionGrid_m3111_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_SelectionGrid_m5933_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginHorizontal_m3065_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginHorizontal_m5934_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginVertical_m3079_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginVertical_m5935_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginScrollView_m3087_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginScrollView_m5936_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_t599_GUILayoutUtility_GetRect_m5957_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_t599_GUILayoutUtility_GetRect_m5959_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIClip_t1099_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIClip_t1099_CustomAttributesCacheGenerator_GUIClip_Pop_m6027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISettings_t1100_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISettings_t1100_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISettings_t1100_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISettings_t1100_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISettings_t1100_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1005_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1005_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1730);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1005 * tmp;
		tmp = (ExecuteInEditMode_t1005 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1005_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5637(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUISkin_t677_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUIContent_t679_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUIContent_t679_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void GUIContent_t679_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_Init_m6096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_Init_m6102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_left_m5545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_left_m6104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_right_m6105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_right_m6106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_top_m5546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_top_m6107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m6116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m6119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m6120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m6137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m6138_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Init_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Cleanup_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_rawType_m5405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_type_m3515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_modifiers_m5401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_character_m5403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_commandName_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_get_keyCode_m5402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_Use_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Event_t680_CustomAttributesCacheGenerator_Event_PopEvent_m5406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t995_il2cpp_TypeInfo_var;
void EventModifiers_t1109_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t995_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t995 * tmp;
		tmp = (FlagsAttribute_t995 *)il2cpp_codegen_object_new (FlagsAttribute_t995_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5582(tmp, NULL);
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo_var;
void Color32_t652_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2388);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1210 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1210 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6897(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t681_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t934_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Mathf_t623_CustomAttributesCacheGenerator_Mathf_t623_Mathf_SmoothDamp_m5464_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Mathf_t623_CustomAttributesCacheGenerator_Mathf_t623_Mathf_SmoothDamp_m5464_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t995_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t995_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t995 * tmp;
		tmp = (FlagsAttribute_t995 *)il2cpp_codegen_object_new (FlagsAttribute_t995_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5582(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void Resources_t684_CustomAttributesCacheGenerator_Resources_Load_m6314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextAsset_t676_CustomAttributesCacheGenerator_TextAsset_get_text_m3498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Shader_t1116_CustomAttributesCacheGenerator_Shader_PropertyToID_m6317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_SetTexture_m6319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_GetTexture_m6321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_SetFloat_m6323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_HasProperty_m6324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void Material_t438_CustomAttributesCacheGenerator_Material_t438_Material_Internal_CreateWithMaterial_m6325_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_rect_m5332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_texture_m5325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_border_m5326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SpriteRenderer_t508_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void SpriteRenderer_t508_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_InitWWW_m6350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_EscapeURL_m3583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_t223_WWW_EscapeURL_m6351_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_bytes_m6355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_error_m3251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_GetTexture_m6356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void WWW_t223_CustomAttributesCacheGenerator_WWW_get_isDone_m6357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m3100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m6360_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6362_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6362_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_URLEncode_m6366_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_QPEncode_m6368_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_SevenBitClean_m6371_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void CacheIndex_t1121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void UnityString_t1122_CustomAttributesCacheGenerator_UnityString_t1122_UnityString_Format_m6373_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AsyncOperation_t1056_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_isPlaying_m5444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_isEditor_m5446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_platform_m3164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_t1123_Application_ExternalCall_m3464_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_t1123_Application_BuildInvocationForArguments_m6382_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_OpenURL_m3357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1352_il2cpp_TypeInfo_var;
void Application_t1123_CustomAttributesCacheGenerator_Application_t1123____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2389);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1352 * tmp;
		tmp = (SecurityCriticalAttribute_t1352 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1352_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m7253(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_depth_m5139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_eventMask_m6391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_main_m3404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var;
void CameraCallback_t1124_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1353 * tmp;
		tmp = (EditorBrowsableAttribute_t1353 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7254(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Debug_t1125_CustomAttributesCacheGenerator_Debug_Internal_Log_m6412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void Debug_t1125_CustomAttributesCacheGenerator_Debug_t1125_Debug_Internal_Log_m6412_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Debug_t1125_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void Debug_t1125_CustomAttributesCacheGenerator_Debug_t1125_Debug_Internal_LogException_m6413_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Debug_t1125_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Display_t1128_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetAxis_m3699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetButtonDown_m5217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButton_m3612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_get_mousePosition_m3405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_get_mousePresent_m5216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_GetTouch_m3084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_get_touchCount_m3083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_get_compositionString_m5383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Input_t602_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t995_il2cpp_TypeInfo_var;
void HideFlags_t1131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t995_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t995 * tmp;
		tmp = (FlagsAttribute_t995 *)il2cpp_codegen_object_new (FlagsAttribute_t995_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5582(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_Destroy_m6455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_t598_Object_Destroy_m6455_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_Destroy_m3297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_t598_Object_DestroyImmediate_m6456_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_get_name_m3152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_set_name_m5506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_set_hideFlags_m5417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_ToString_m3870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_Instantiate_m3539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void Object_t598_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_get_transform_m3433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_get_gameObject_m3151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_GetComponent_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_GetComponent_m7256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Component_t658_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m6468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m7260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_transform_m3436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_layer_m5419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_set_layer_m5420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_SetActive_m3353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_tag_m3702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_SendMessage_m6472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6472_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6472_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_AddComponent_m6474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1272 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1272 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m7112(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1216_il2cpp_TypeInfo_var;
void GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_Internal_CreateGameObject_m6475_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2385);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1216 * tmp;
		tmp = (WritableAttribute_t1216 *)il2cpp_codegen_object_new (WritableAttribute_t1216_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6905(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetParent_m3540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_Rotate_m3677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_t364_Transform_Rotate_m6492_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_get_childCount_m3682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Transform_t364_CustomAttributesCacheGenerator_Transform_GetChild_m3681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Time_t1133_CustomAttributesCacheGenerator_Time_get_time_m3561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Time_t1133_CustomAttributesCacheGenerator_Time_get_deltaTime_m3584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Time_t1133_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Time_t1133_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Time_t1133_CustomAttributesCacheGenerator_Time_set_timeScale_m3358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Random_t1134_CustomAttributesCacheGenerator_Random_set_seed_m3634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Random_t1134_CustomAttributesCacheGenerator_Random_Range_m3582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Random_t1134_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_t1136_PlayerPrefs_GetString_m6500_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m6519_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m6519_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_Raycast_m3408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m5305_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m5305_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m5242_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m5242_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m6520_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m6520_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics_t1138_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Collider_t661_CustomAttributesCacheGenerator_Collider_set_enabled_m3420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Collider_t661_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_IgnoreLayerCollision_m3594_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_Raycast_m5306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Collider2D_t522_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Collider2D_t522_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_set_clip_m3396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Play_m6547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_t515_AudioSource_Play_m6547_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Play_m3664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Stop_m3397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1269_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_t515_AudioSource_PlayOneShot_m6548_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1269 * tmp;
		tmp = (DefaultValueAttribute_t1269 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1269_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7107(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var;
void AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1270 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1270 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m7111(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void AnimationEvent_t1149_CustomAttributesCacheGenerator_AnimationEvent_t1149____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1153_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_t1153_AnimationCurve__ctor_m6574_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_Init_m6578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1150_CustomAttributesCacheGenerator_AnimatorStateInfo_t1150____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Animator_t564_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Animator_t564_CustomAttributesCacheGenerator_Animator_StringToHash_m6597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Animator_t564_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Animator_t564_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Animator_t564_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_get_text_m3402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_set_text_m3403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void CharacterInfo_t1159_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void CharacterInfo_t1159_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void CharacterInfo_t1159_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t701_il2cpp_TypeInfo_var;
void CharacterInfo_t1159_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t701 * tmp;
		tmp = (ObsoleteAttribute_t701 *)il2cpp_codegen_object_new (ObsoleteAttribute_t701_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3820(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Font_t802_CustomAttributesCacheGenerator_Font_get_material_m5510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Font_t802_CustomAttributesCacheGenerator_Font_HasCharacter_m5404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Font_t802_CustomAttributesCacheGenerator_Font_get_dynamic_m5512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Font_t802_CustomAttributesCacheGenerator_Font_get_fontSize_m5513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1160_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1353 * tmp;
		tmp = (EditorBrowsableAttribute_t1353 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7254(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_Init_m6628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1209_il2cpp_TypeInfo_var;
void RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2383);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1209 * tmp;
		tmp = (WrapperlessIcall_t1209 *)il2cpp_codegen_object_new (WrapperlessIcall_t1209_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6896(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_Request_get_sourceId_m6667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_Request_get_appId_m6668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1164_CustomAttributesCacheGenerator_Request_get_domain_m6669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_Response_get_success_m6678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_Response_set_success_m6679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1166_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_name_m6764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_name_m6765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1180_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1180_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1180_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1181_il2cpp_TypeInfo_var;
void AppID_t1181_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		AppID_t1181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1355 * tmp;
		tmp = (DefaultValueAttribute_t1355 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1355_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7271(tmp, Box(AppID_t1181_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1182_il2cpp_TypeInfo_var;
void SourceID_t1182_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		SourceID_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1355 * tmp;
		tmp = (DefaultValueAttribute_t1355 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1355_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7271(tmp, Box(SourceID_t1182_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1183_il2cpp_TypeInfo_var;
void NetworkID_t1183_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		NetworkID_t1183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1355 * tmp;
		tmp = (DefaultValueAttribute_t1355 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1355_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7271(tmp, Box(NetworkID_t1183_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1184_il2cpp_TypeInfo_var;
void NodeID_t1184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2391);
		NodeID_t1184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1355 * tmp;
		tmp = (DefaultValueAttribute_t1355 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1355_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m7271(tmp, Box(NodeID_t1184_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1189_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7272(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7278(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7279(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7281(CustomAttributesCache* cache)
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
extern TypeInfo* EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
void JsonArray_t1190_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1353 * tmp;
		tmp = (EditorBrowsableAttribute_t1353 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7254(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1191_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1353 * tmp;
		tmp = (EditorBrowsableAttribute_t1353 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7254(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
void SimpleJson_t1194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var;
void SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1359 * tmp;
		tmp = (SuppressMessageAttribute_t1359 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7283(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7284(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var;
void SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1359 * tmp;
		tmp = (SuppressMessageAttribute_t1359 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7283(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var;
void SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_t1194____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2390);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1353 * tmp;
		tmp = (EditorBrowsableAttribute_t1353 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1353_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7254(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1192_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1359 * tmp;
		tmp = (SuppressMessageAttribute_t1359 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7283(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7284(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1359 * tmp;
		tmp = (SuppressMessageAttribute_t1359 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7283(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7284(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2393);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1359 * tmp;
		tmp = (SuppressMessageAttribute_t1359 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1359_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m7283(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m7284(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var;
void ReflectionUtils_t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2392);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1358 * tmp;
		tmp = (GeneratedCodeAttribute_t1358 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1358_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m7282(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetConstructorInfo_m6880_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetContructor_m6885_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6887_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1360_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1201_CustomAttributesCacheGenerator_ConstructorDelegate_t1201_ConstructorDelegate_Invoke_m6865_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t698_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1201_CustomAttributesCacheGenerator_ConstructorDelegate_t1201_ConstructorDelegate_BeginInvoke_m6866_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t698 * tmp;
		tmp = (ParamArrayAttribute_t698 *)il2cpp_codegen_object_new (ParamArrayAttribute_t698_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3732(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1210_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void RequireComponent_t1000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void WritableAttribute_t1216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void GUIStateObjects_t1228_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_Achievement_get_id_m6942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_Achievement_set_id_m6943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1231_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1232_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1232_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1232_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_Score_get_value_m6964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1233_CustomAttributesCacheGenerator_Score_set_value_m6965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_id_m6973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_id_m6974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_range_m6977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_range_m6978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void PropertyAttribute_t1247_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void TooltipAttribute_t1009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void SpaceAttribute_t1007_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void RangeAttribute_t1004_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1010_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var;
void StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2387);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1351 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1351 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1351_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m7249(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1251_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void ArgumentCache_t1258_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
void PersistentCall_t1262_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void PersistentCall_t1262_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
void PersistentCall_t1262_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void PersistentCall_t1262_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void PersistentCall_t1262_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1264_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var;
void UnityEventBase_t1267_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t998 * tmp;
		tmp = (FormerlySerializedAsAttribute_t998 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5601(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t699_il2cpp_TypeInfo_var;
void UnityEventBase_t1267_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t699 * tmp;
		tmp = (SerializeField_t699 *)il2cpp_codegen_object_new (SerializeField_t699_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3733(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t997_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1268_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1726);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t997 * tmp;
		tmp = (AddComponentMenu_t997 *)il2cpp_codegen_object_new (AddComponentMenu_t997_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5600(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1269_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t998_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7310(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7309(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t702_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1272_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t702 * tmp;
		tmp = (AttributeUsageAttribute_t702 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t702_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3850(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[790] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1055_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5750,
	AssetBundleCreateRequest_t1055_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5751,
	AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5755,
	AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5756,
	AssetBundle_t1057_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5757,
	LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5760,
	LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5761,
	LayerMask_t787_CustomAttributesCacheGenerator_LayerMask_t787_LayerMask_GetMask_m5762_Arg0_ParameterInfo,
	RuntimePlatform_t1061_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t1061_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t1061_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1062_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3707,
	SystemInfo_t1062_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5763,
	Coroutine_t842_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5766,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5768,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_t106_ScriptableObject_Internal_CreateScriptableObject_m5768_Arg0_ParameterInfo,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5769,
	ScriptableObject_t106_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5771,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5776,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5777,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5778,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5779,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5780,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5781,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5782,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5783,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5784,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5785,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5786,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5787,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5788,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5789,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5790,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5791,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5792,
	GameCenterPlatform_t696_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5794,
	GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5838,
	GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5839,
	GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5840,
	GcLeaderboard_t1074_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5841,
	MeshFilter_t686_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3569,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5842,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_t437_Mesh_Internal_Create_m5842_Arg0_ParameterInfo,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_vertices_m3570,
	Mesh_t437_CustomAttributesCacheGenerator_Mesh_set_triangles_m3571,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_set_enabled_m3419,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_material_m3398,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_set_material_m3400,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_bounds_m3428,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5236,
	Renderer_t592_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5237,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_get_width_m3054,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_get_height_m3070,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_get_dpi_m3179,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3494,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3495,
	Screen_t1076_CustomAttributesCacheGenerator_Screen_get_orientation_m3069,
	Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5864,
	Texture_t352_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5865,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5869,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5869_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5278,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5354,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5870,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5870_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5870_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m3096,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3095,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5871,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3097,
	RenderTexture_t1077_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5872,
	RenderTexture_t1077_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5873,
	GUILayer_t1080_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5877,
	Gradient_t1083_CustomAttributesCacheGenerator_Gradient_Init_m5881,
	Gradient_t1083_CustomAttributesCacheGenerator_Gradient_Cleanup_m5882,
	GUI_t600_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t600_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t600_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5889,
	GUI_t600_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5890,
	GUI_t600_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5891,
	GUI_t600_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5892,
	GUI_t600_CustomAttributesCacheGenerator_GUI_set_changed_m5894,
	GUI_t600_CustomAttributesCacheGenerator_GUI_get_enabled_m5895,
	GUI_t600_CustomAttributesCacheGenerator_GUI_set_enabled_m3088,
	GUI_t600_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5897,
	GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5900,
	GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5903,
	GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5910,
	GUI_t600_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5917,
	GUI_t600_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5919,
	GUI_t600_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5926,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Label_m3066_Arg1_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Box_m3082_Arg1_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Button_m3064_Arg1_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_TextField_m3067_Arg1_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_TextField_m3507_Arg2_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_Toggle_m3113_Arg2_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_SelectionGrid_m3111_Arg3_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_SelectionGrid_m5933_Arg4_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginHorizontal_m3065_Arg0_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginHorizontal_m5934_Arg2_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginVertical_m3079_Arg0_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginVertical_m5935_Arg2_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginScrollView_m3087_Arg1_ParameterInfo,
	GUILayout_t1086_CustomAttributesCacheGenerator_GUILayout_t1086_GUILayout_BeginScrollView_m5936_Arg6_ParameterInfo,
	GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5951,
	GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5953,
	GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5954,
	GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_t599_GUILayoutUtility_GetRect_m5957_Arg2_ParameterInfo,
	GUILayoutUtility_t599_CustomAttributesCacheGenerator_GUILayoutUtility_t599_GUILayoutUtility_GetRect_m5959_Arg3_ParameterInfo,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m6001,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m6005,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m6009,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m6010,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m6011,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m6012,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m6013,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m6014,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m6016,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m6018,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m6022,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m6023,
	GUIUtility_t1098_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m6024,
	GUIClip_t1099_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m6026,
	GUIClip_t1099_CustomAttributesCacheGenerator_GUIClip_Pop_m6027,
	GUISettings_t1100_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1100_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1100_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1100_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1100_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t677_CustomAttributesCacheGenerator,
	GUISkin_t677_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t677_CustomAttributesCacheGenerator_m_box,
	GUISkin_t677_CustomAttributesCacheGenerator_m_button,
	GUISkin_t677_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t677_CustomAttributesCacheGenerator_m_label,
	GUISkin_t677_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t677_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t677_CustomAttributesCacheGenerator_m_window,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t677_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t677_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t677_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t677_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t677_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t679_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t679_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t679_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_Init_m6096,
	GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m6097,
	GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m6098,
	GUIStyleState_t621_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m6099,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_Init_m6102,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_Cleanup_m6103,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_left_m5545,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_left_m6104,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_right_m6105,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_right_m6106,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_top_m5546,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_top_m6107,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3518,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_set_bottom_m6108,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5539,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5540,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m6110,
	RectOffset_t595_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m6112,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m6116,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m6117,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m6118,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m6119,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m6120,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m6121,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m6123,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m6124,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m6125,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3056,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m6126,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3057,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m6127,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m6128,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m6129,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3061,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m6130,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3060,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m6131,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3158,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3159,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m6134,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m6137,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m6138_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m6140,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m6141,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m6145,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m6147,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m6149,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m6152,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m6155,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m6157,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5441,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5442,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg1_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg2_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg3_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg4_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg5_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_t837_TouchScreenKeyboard_Open_m6158_Arg6_ParameterInfo,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5381,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5382,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5440,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5380,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5439,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5392,
	TouchScreenKeyboard_t837_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5391,
	Event_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t680_CustomAttributesCacheGenerator_Event_Init_m6159,
	Event_t680_CustomAttributesCacheGenerator_Event_Cleanup_m6161,
	Event_t680_CustomAttributesCacheGenerator_Event_get_rawType_m5405,
	Event_t680_CustomAttributesCacheGenerator_Event_get_type_m3515,
	Event_t680_CustomAttributesCacheGenerator_Event_GetTypeForControl_m6162,
	Event_t680_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m6164,
	Event_t680_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m6166,
	Event_t680_CustomAttributesCacheGenerator_Event_get_modifiers_m5401,
	Event_t680_CustomAttributesCacheGenerator_Event_get_character_m5403,
	Event_t680_CustomAttributesCacheGenerator_Event_get_commandName_m6167,
	Event_t680_CustomAttributesCacheGenerator_Event_get_keyCode_m5402,
	Event_t680_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m6168,
	Event_t680_CustomAttributesCacheGenerator_Event_Use_m6170,
	Event_t680_CustomAttributesCacheGenerator_Event_PopEvent_m5406,
	EventModifiers_t1109_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t449_CustomAttributesCacheGenerator,
	Color_t283_CustomAttributesCacheGenerator,
	Color32_t652_CustomAttributesCacheGenerator,
	Quaternion_t681_CustomAttributesCacheGenerator,
	Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m6196,
	Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6199,
	Quaternion_t681_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6201,
	Matrix4x4_t973_CustomAttributesCacheGenerator,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m6217,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m6219,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m6221,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m6224,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m6236,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m6239,
	Matrix4x4_t973_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m6240,
	Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m6257,
	Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m6260,
	Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m6263,
	Bounds_t662_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m6267,
	Vector4_t934_CustomAttributesCacheGenerator,
	Mathf_t623_CustomAttributesCacheGenerator_Mathf_t623_Mathf_SmoothDamp_m5464_Arg4_ParameterInfo,
	Mathf_t623_CustomAttributesCacheGenerator_Mathf_t623_Mathf_SmoothDamp_m5464_Arg5_ParameterInfo,
	DrivenTransformProperties_t1111_CustomAttributesCacheGenerator,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m6298,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m6299,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m6300,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m6301,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m6302,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m6303,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m6304,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m6305,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m6306,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m6307,
	RectTransform_t571_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m6308,
	Resources_t684_CustomAttributesCacheGenerator_Resources_Load_m6314,
	TextAsset_t676_CustomAttributesCacheGenerator_TextAsset_get_text_m3498,
	SerializePrivateVariables_t1115_CustomAttributesCacheGenerator,
	Shader_t1116_CustomAttributesCacheGenerator_Shader_PropertyToID_m6317,
	Material_t438_CustomAttributesCacheGenerator_Material_SetTexture_m6319,
	Material_t438_CustomAttributesCacheGenerator_Material_GetTexture_m6321,
	Material_t438_CustomAttributesCacheGenerator_Material_SetFloat_m6323,
	Material_t438_CustomAttributesCacheGenerator_Material_HasProperty_m6324,
	Material_t438_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m6325,
	Material_t438_CustomAttributesCacheGenerator_Material_t438_Material_Internal_CreateWithMaterial_m6325_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6328,
	SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6331,
	SphericalHarmonicsL2_t1117_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6334,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_rect_m5332,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5328,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_texture_m5325,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5351,
	Sprite_t430_CustomAttributesCacheGenerator_Sprite_get_border_m5326,
	SpriteRenderer_t508_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m6344,
	SpriteRenderer_t508_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m6345,
	DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5339,
	DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5338,
	DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5331,
	DataUtility_t1118_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m6346,
	WWW_t223_CustomAttributesCacheGenerator_WWW_DestroyWWW_m6349,
	WWW_t223_CustomAttributesCacheGenerator_WWW_InitWWW_m6350,
	WWW_t223_CustomAttributesCacheGenerator_WWW_EscapeURL_m3583,
	WWW_t223_CustomAttributesCacheGenerator_WWW_t223_WWW_EscapeURL_m6351_Arg1_ParameterInfo,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m6352,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_bytes_m6355,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_error_m3251,
	WWW_t223_CustomAttributesCacheGenerator_WWW_GetTexture_m6356,
	WWW_t223_CustomAttributesCacheGenerator_WWW_get_isDone_m6357,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m3100,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m6360_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3099,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6362_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m6362_Arg3_ParameterInfo,
	WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_URLEncode_m6366_Arg1_ParameterInfo,
	WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_QPEncode_m6368_Arg1_ParameterInfo,
	WWWTranscoder_t1120_CustomAttributesCacheGenerator_WWWTranscoder_t1120_WWWTranscoder_SevenBitClean_m6371_Arg1_ParameterInfo,
	CacheIndex_t1121_CustomAttributesCacheGenerator,
	UnityString_t1122_CustomAttributesCacheGenerator_UnityString_t1122_UnityString_Format_m6373_Arg1_ParameterInfo,
	AsyncOperation_t1056_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m6375,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3150,
	Application_t1123_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m6380,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_isPlaying_m5444,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_isEditor_m5446,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3463,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_platform_m3164,
	Application_t1123_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3669,
	Application_t1123_CustomAttributesCacheGenerator_Application_t1123_Application_ExternalCall_m3464_Arg1_ParameterInfo,
	Application_t1123_CustomAttributesCacheGenerator_Application_t1123_Application_BuildInvocationForArguments_m6382_Arg1_ParameterInfo,
	Application_t1123_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m6383,
	Application_t1123_CustomAttributesCacheGenerator_Application_OpenURL_m3357,
	Application_t1123_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m6385,
	Application_t1123_CustomAttributesCacheGenerator_Application_t1123____persistentDataPath_PropertyInfo,
	Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3648,
	Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5414,
	Behaviour_t983_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5174,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5227,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5226,
	Camera_t477_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3687,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_depth_m5139,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5240,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_eventMask_m6391,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m6392,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m6393,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m6394,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_targetTexture_m6396,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_clearFlags_m6397,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m6398,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m6399,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m6400,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m6401,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m6402,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_main_m3404,
	Camera_t477_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m6403,
	Camera_t477_CustomAttributesCacheGenerator_Camera_GetAllCameras_m6404,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m6409,
	Camera_t477_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m6411,
	CameraCallback_t1124_CustomAttributesCacheGenerator,
	Debug_t1125_CustomAttributesCacheGenerator_Debug_Internal_Log_m6412,
	Debug_t1125_CustomAttributesCacheGenerator_Debug_t1125_Debug_Internal_Log_m6412_Arg2_ParameterInfo,
	Debug_t1125_CustomAttributesCacheGenerator_Debug_Internal_LogException_m6413,
	Debug_t1125_CustomAttributesCacheGenerator_Debug_t1125_Debug_Internal_LogException_m6413_Arg1_ParameterInfo,
	Debug_t1125_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3462,
	Display_t1128_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m6439,
	Display_t1128_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m6440,
	Display_t1128_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m6441,
	Display_t1128_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m6442,
	Display_t1128_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m6443,
	Display_t1128_CustomAttributesCacheGenerator_Display_SetParamsImpl_m6444,
	Display_t1128_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m6445,
	Display_t1128_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m6446,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3412,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3411,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m6447,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6448,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m6449,
	Input_t602_CustomAttributesCacheGenerator_Input_GetAxis_m3699,
	Input_t602_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5218,
	Input_t602_CustomAttributesCacheGenerator_Input_GetButtonDown_m5217,
	Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButton_m3612,
	Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3407,
	Input_t602_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3611,
	Input_t602_CustomAttributesCacheGenerator_Input_get_mousePosition_m3405,
	Input_t602_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5191,
	Input_t602_CustomAttributesCacheGenerator_Input_get_mousePresent_m5216,
	Input_t602_CustomAttributesCacheGenerator_Input_GetTouch_m3084,
	Input_t602_CustomAttributesCacheGenerator_Input_get_touchCount_m3083,
	Input_t602_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5443,
	Input_t602_CustomAttributesCacheGenerator_Input_get_compositionString_m5383,
	Input_t602_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m6451,
	HideFlags_t1131_CustomAttributesCacheGenerator,
	Object_t598_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m6454,
	Object_t598_CustomAttributesCacheGenerator_Object_Destroy_m6455,
	Object_t598_CustomAttributesCacheGenerator_Object_t598_Object_Destroy_m6455_Arg1_ParameterInfo,
	Object_t598_CustomAttributesCacheGenerator_Object_Destroy_m3297,
	Object_t598_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6456,
	Object_t598_CustomAttributesCacheGenerator_Object_t598_Object_DestroyImmediate_m6456_Arg1_ParameterInfo,
	Object_t598_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5445,
	Object_t598_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m6457,
	Object_t598_CustomAttributesCacheGenerator_Object_get_name_m3152,
	Object_t598_CustomAttributesCacheGenerator_Object_set_name_m5506,
	Object_t598_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3182,
	Object_t598_CustomAttributesCacheGenerator_Object_set_hideFlags_m5417,
	Object_t598_CustomAttributesCacheGenerator_Object_ToString_m3870,
	Object_t598_CustomAttributesCacheGenerator_Object_Instantiate_m3539,
	Object_t598_CustomAttributesCacheGenerator_Object_FindObjectOfType_m6463,
	Component_t658_CustomAttributesCacheGenerator_Component_get_transform_m3433,
	Component_t658_CustomAttributesCacheGenerator_Component_get_gameObject_m3151,
	Component_t658_CustomAttributesCacheGenerator_Component_GetComponent_m5552,
	Component_t658_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m6465,
	Component_t658_CustomAttributesCacheGenerator_Component_GetComponent_m7256,
	Component_t658_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m6466,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m6468,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m6469,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponent_m7260,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m6470,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m6471,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_transform_m3436,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_layer_m5419,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_set_layer_m5420,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_SetActive_m3353,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5175,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_get_tag_m3702,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3607,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_SendMessage_m6472,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6472_Arg1_ParameterInfo,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_SendMessage_m6472_Arg2_ParameterInfo,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m6473,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_AddComponent_m6474,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m6475,
	GameObject_t310_CustomAttributesCacheGenerator_GameObject_t310_GameObject_Internal_CreateGameObject_m6475_Arg0_ParameterInfo,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m6479,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m6480,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m6481,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m6482,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m6483,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m6484,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m6485,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m6486,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m6487,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m6488,
	Transform_t364_CustomAttributesCacheGenerator_Transform_get_parentInternal_m6489,
	Transform_t364_CustomAttributesCacheGenerator_Transform_set_parentInternal_m6490,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetParent_m3540,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m6491,
	Transform_t364_CustomAttributesCacheGenerator_Transform_Rotate_m3677,
	Transform_t364_CustomAttributesCacheGenerator_Transform_t364_Transform_Rotate_m6492_Arg1_ParameterInfo,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m6493,
	Transform_t364_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m6494,
	Transform_t364_CustomAttributesCacheGenerator_Transform_get_childCount_m3682,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5418,
	Transform_t364_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3541,
	Transform_t364_CustomAttributesCacheGenerator_Transform_GetChild_m3681,
	Time_t1133_CustomAttributesCacheGenerator_Time_get_time_m3561,
	Time_t1133_CustomAttributesCacheGenerator_Time_get_deltaTime_m3584,
	Time_t1133_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5220,
	Time_t1133_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5252,
	Time_t1133_CustomAttributesCacheGenerator_Time_set_timeScale_m3358,
	Random_t1134_CustomAttributesCacheGenerator_Random_set_seed_m3634,
	Random_t1134_CustomAttributesCacheGenerator_Random_Range_m3582,
	Random_t1134_CustomAttributesCacheGenerator_Random_RandomRangeInt_m6496,
	PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m6499,
	PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m6500,
	PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_t1136_PlayerPrefs_GetString_m6500_Arg1_ParameterInfo,
	PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3317,
	PlayerPrefs_t1136_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3316,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m6518,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m6519_Arg3_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m6519_Arg4_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_Raycast_m3408,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m5305_Arg2_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_Raycast_m5305_Arg3_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m5242_Arg1_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m5242_Arg2_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m6520_Arg2_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_t1138_Physics_RaycastAll_m6520_Arg3_ParameterInfo,
	Physics_t1138_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m6521,
	Collider_t661_CustomAttributesCacheGenerator_Collider_set_enabled_m3420,
	Collider_t661_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m6522,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3594,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_IgnoreLayerCollision_m3594_Arg2_ParameterInfo,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m6526,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_Raycast_m5306,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg2_ParameterInfo,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg3_ParameterInfo,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg4_ParameterInfo,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_t691_Physics2D_Raycast_m6527_Arg5_ParameterInfo,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5230,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m6528,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3606,
	Physics2D_t691_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m6529,
	Collider2D_t522_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3666,
	Collider2D_t522_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m6531,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_set_clip_m3396,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Play_m6547,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_t515_AudioSource_Play_m6547_Arg0_ParameterInfo,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Play_m3664,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3680,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_Stop_m3397,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3665,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6548,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_t515_AudioSource_PlayOneShot_m6548_Arg1_ParameterInfo,
	AudioSource_t515_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3410,
	AnimationEvent_t1149_CustomAttributesCacheGenerator_AnimationEvent_t1149____data_PropertyInfo,
	AnimationCurve_t1153_CustomAttributesCacheGenerator,
	AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_t1153_AnimationCurve__ctor_m6574_Arg0_ParameterInfo,
	AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6576,
	AnimationCurve_t1153_CustomAttributesCacheGenerator_AnimationCurve_Init_m6578,
	AnimatorStateInfo_t1150_CustomAttributesCacheGenerator_AnimatorStateInfo_t1150____nameHash_PropertyInfo,
	Animator_t564_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5498,
	Animator_t564_CustomAttributesCacheGenerator_Animator_StringToHash_m6597,
	Animator_t564_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6598,
	Animator_t564_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6599,
	Animator_t564_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6600,
	TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_get_text_m3402,
	TextMesh_t361_CustomAttributesCacheGenerator_TextMesh_set_text_m3403,
	CharacterInfo_t1159_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1159_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1159_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1159_CustomAttributesCacheGenerator_flipped,
	Font_t802_CustomAttributesCacheGenerator_Font_get_material_m5510,
	Font_t802_CustomAttributesCacheGenerator_Font_HasCharacter_m5404,
	Font_t802_CustomAttributesCacheGenerator_Font_get_dynamic_m5512,
	Font_t802_CustomAttributesCacheGenerator_Font_get_fontSize_m5513,
	FontTextureRebuildCallback_t1160_CustomAttributesCacheGenerator,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_Init_m6628,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6629,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6632,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5416,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6633,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6634,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6635,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6636,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6637,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6638,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5397,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6639,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6640,
	TextGenerator_t840_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5432,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5301,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5527,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3711,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6651,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3557,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5530,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5329,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5531,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5288,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5303,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5302,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5310,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5275,
	Canvas_t416_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5509,
	CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3683,
	CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5490,
	CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6653,
	CanvasGroup_t543_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5287,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6656,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5291,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5562,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5283,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6657,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6658,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5279,
	CanvasRenderer_t807_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5276,
	RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6660,
	RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6662,
	RectTransformUtility_t957_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5290,
	Request_t1164_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1164_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1164_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1164_CustomAttributesCacheGenerator_Request_get_sourceId_m6667,
	Request_t1164_CustomAttributesCacheGenerator_Request_get_appId_m6668,
	Request_t1164_CustomAttributesCacheGenerator_Request_get_domain_m6669,
	Response_t1166_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1166_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1166_CustomAttributesCacheGenerator_Response_get_success_m6678,
	Response_t1166_CustomAttributesCacheGenerator_Response_set_success_m6679,
	Response_t1166_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6680,
	Response_t1166_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6681,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6686,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6687,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6688,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6689,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6690,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6691,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6692,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6693,
	CreateMatchRequest_t1169_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6694,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6697,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6698,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6699,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6700,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6701,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6702,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6703,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6704,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6705,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6706,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6707,
	CreateMatchResponse_t1170_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6708,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6712,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6713,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6714,
	JoinMatchRequest_t1171_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6715,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6718,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6719,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6720,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6721,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6722,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6723,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6724,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6725,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6726,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6727,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6728,
	JoinMatchResponse_t1172_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6729,
	DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6733,
	DestroyMatchRequest_t1173_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6734,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6737,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6738,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6739,
	DropConnectionRequest_t1174_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6740,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6743,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6744,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6745,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6746,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6747,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6748,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6749,
	ListMatchRequest_t1175_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6750,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6753,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6754,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6755,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6756,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6757,
	MatchDirectConnectInfo_t1176_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6758,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6762,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6763,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_name_m6764,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_name_m6765,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6766,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6767,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6768,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6769,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6770,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6771,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6772,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6773,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6774,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6775,
	MatchDesc_t1178_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6776,
	ListMatchResponse_t1180_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1180_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6780,
	ListMatchResponse_t1180_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6781,
	AppID_t1181_CustomAttributesCacheGenerator,
	SourceID_t1182_CustomAttributesCacheGenerator,
	NetworkID_t1183_CustomAttributesCacheGenerator,
	NodeID_t1184_CustomAttributesCacheGenerator,
	NetworkMatch_t1189_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m7272,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7278,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m7279,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1357_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m7281,
	JsonArray_t1190_CustomAttributesCacheGenerator,
	JsonObject_t1191_CustomAttributesCacheGenerator,
	SimpleJson_t1194_CustomAttributesCacheGenerator,
	SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6825,
	SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6837,
	SimpleJson_t1194_CustomAttributesCacheGenerator_SimpleJson_t1194____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1192_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1192_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285,
	PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854,
	PocoJsonSerializerStrategy_t1193_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855,
	ReflectionUtils_t1208_CustomAttributesCacheGenerator,
	ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetConstructorInfo_m6880_Arg1_ParameterInfo,
	ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetContructor_m6885_Arg1_ParameterInfo,
	ReflectionUtils_t1208_CustomAttributesCacheGenerator_ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6887_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1360_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1201_CustomAttributesCacheGenerator_ConstructorDelegate_t1201_ConstructorDelegate_Invoke_m6865_Arg0_ParameterInfo,
	ConstructorDelegate_t1201_CustomAttributesCacheGenerator_ConstructorDelegate_t1201_ConstructorDelegate_BeginInvoke_m6866_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1210_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1006_CustomAttributesCacheGenerator,
	RequireComponent_t1000_CustomAttributesCacheGenerator,
	WritableAttribute_t1216_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1217_CustomAttributesCacheGenerator,
	GUIStateObjects_t1228_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6920,
	Achievement_t1231_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1231_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1231_CustomAttributesCacheGenerator_Achievement_get_id_m6942,
	Achievement_t1231_CustomAttributesCacheGenerator_Achievement_set_id_m6943,
	Achievement_t1231_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6944,
	Achievement_t1231_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6945,
	AchievementDescription_t1232_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1232_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6952,
	AchievementDescription_t1232_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6953,
	Score_t1233_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1233_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1233_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6962,
	Score_t1233_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6963,
	Score_t1233_CustomAttributesCacheGenerator_Score_get_value_m6964,
	Score_t1233_CustomAttributesCacheGenerator_Score_set_value_m6965,
	Leaderboard_t1073_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1073_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1073_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1073_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_id_m6973,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_id_m6974,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6975,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6976,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_range_m6977,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_range_m6978,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6979,
	Leaderboard_t1073_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6980,
	PropertyAttribute_t1247_CustomAttributesCacheGenerator,
	TooltipAttribute_t1009_CustomAttributesCacheGenerator,
	SpaceAttribute_t1007_CustomAttributesCacheGenerator,
	RangeAttribute_t1004_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1010_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1008_CustomAttributesCacheGenerator,
	StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m7023,
	StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m7026,
	StackTraceUtility_t1250_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m7028,
	SharedBetweenAnimatorsAttribute_t1251_CustomAttributesCacheGenerator,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1258_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1262_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1262_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1262_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1262_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1262_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1264_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1267_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1267_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1268_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1269_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1270_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t998_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1272_CustomAttributesCacheGenerator,
};
