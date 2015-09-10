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
extern TypeInfo* InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t828_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3472);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t828 * tmp;
		tmp = (ExtensionAttribute_t828 *)il2cpp_codegen_object_new (ExtensionAttribute_t828_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4576(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2190 * tmp;
		tmp = (InternalsVisibleToAttribute_t2190 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2190_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8071(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2709_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2709_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_t924_LayerMask_GetMask_m8922_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t811_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t811_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m8007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Coroutine_t979_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8928_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m9000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m9001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MeshFilter_t816_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_Internal_Create_m9002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_t512_Mesh_Internal_Create_m9002_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_vertices_m4566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_uv_m4568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_triangles_m4567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_enabled_m4238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_material_m4217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_material_m4219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_materials_m4429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_bounds_m4247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_get_width_m3877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_get_height_m3892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_get_dpi_m3999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Screen_t2729_CustomAttributesCacheGenerator_Screen_get_orientation_m3891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m9024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m9025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m9029_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m9030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m9030_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m9030_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m9031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RenderTexture_t2730_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m9032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RenderTexture_t2730_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m9033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUILayer_t2733_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m9037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Gradient_t2736_CustomAttributesCacheGenerator_Gradient_Init_m9041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Gradient_t2736_CustomAttributesCacheGenerator_Gradient_Cleanup_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m9049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m9050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m9051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m9052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_set_changed_m9054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_get_enabled_m9055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_set_enabled_m3910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m9057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m9060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Label_m3888_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Box_m3904_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Button_m3886_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_TextField_m3889_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_TextField_m4325_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Toggle_m3934_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_SelectionGrid_m3932_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_SelectionGrid_m9093_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginHorizontal_m3887_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginHorizontal_m9094_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginVertical_m3901_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginVertical_m9095_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginScrollView_m3909_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginScrollView_m9096_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_t729_GUILayoutUtility_GetRect_m9117_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_t729_GUILayoutUtility_GetRect_m9119_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIClip_t2752_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIClip_t2752_CustomAttributesCacheGenerator_GUIClip_Pop_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISettings_t2753_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISettings_t2753_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISettings_t2753_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISettings_t2753_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISettings_t2753_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t834_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(607);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t834 * tmp;
		tmp = (ExecuteInEditMode_t834 *)il2cpp_codegen_object_new (ExecuteInEditMode_t834_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4716(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUISkin_t805_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUIContent_t807_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUIContent_t807_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void GUIContent_t807_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_Init_m9256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_Init_m9262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_left_m6401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_left_m9264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_right_m9265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_right_m9266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_top_m6402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_top_m9267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9298_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Init_m9319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Cleanup_m9321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_rawType_m6265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_type_m4333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_modifiers_m6261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_character_m6263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_commandName_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_get_keyCode_m6262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_Use_m9330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Event_t808_CustomAttributesCacheGenerator_Event_PopEvent_m6266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1133_il2cpp_TypeInfo_var;
void EventModifiers_t2762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2021);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1133 * tmp;
		tmp = (FlagsAttribute_t1133 *)il2cpp_codegen_object_new (FlagsAttribute_t1133_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6438(tmp, NULL);
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
void Vector3_t523_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2864_il2cpp_TypeInfo_var;
void Color32_t780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2864_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4654);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2864 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2864 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2864_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m10087(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t813_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1070_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Mathf_t752_CustomAttributesCacheGenerator_Mathf_t752_Mathf_SmoothDamp_m6321_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Mathf_t752_CustomAttributesCacheGenerator_Mathf_t752_Mathf_SmoothDamp_m6321_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1133_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2764_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2021);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1133 * tmp;
		tmp = (FlagsAttribute_t1133 *)il2cpp_codegen_object_new (FlagsAttribute_t1133_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6438(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Resources_t818_CustomAttributesCacheGenerator_Resources_Load_m4359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextAsset_t804_CustomAttributesCacheGenerator_TextAsset_get_text_m4316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Shader_t2769_CustomAttributesCacheGenerator_Shader_PropertyToID_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_SetTexture_m9480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_GetTexture_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_SetFloat_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_HasProperty_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void Material_t513_CustomAttributesCacheGenerator_Material_t513_Material_Internal_CreateWithMaterial_m9486_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_rect_m6192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_texture_m6185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_border_m6186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SpriteRenderer_t594_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void SpriteRenderer_t594_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9512_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9520_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9522_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9522_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_URLEncode_m9526_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_QPEncode_m9528_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_SevenBitClean_m9531_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CacheIndex_t2774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void UnityString_t2775_CustomAttributesCacheGenerator_UnityString_t2775_UnityString_Format_m9533_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AsyncOperation_t2710_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_isPlaying_m4356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_isEditor_m6303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_platform_m3985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m8005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_t1540_Application_ExternalCall_m4283_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_t1540_Application_BuildInvocationForArguments_m9544_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_get_unityVersion_m4360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_OpenURL_m4176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2992_il2cpp_TypeInfo_var;
void Application_t1540_CustomAttributesCacheGenerator_Application_t1540____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2992_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4655);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2992 * tmp;
		tmp = (SecurityCriticalAttribute_t2992 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2992_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10431(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_get_enabled_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m6036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m6001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m4223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var;
void CameraCallback_t2776_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2223 * tmp;
		tmp = (EditorBrowsableAttribute_t2223 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8368(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Debug_t2777_CustomAttributesCacheGenerator_Debug_Internal_Log_m9574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void Debug_t2777_CustomAttributesCacheGenerator_Debug_t2777_Debug_Internal_Log_m9574_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Debug_t2777_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void Debug_t2777_CustomAttributesCacheGenerator_Debug_t2777_Debug_Internal_LogException_m9575_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Debug_t2777_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Display_t2780_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetButtonDown_m6079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButton_m4418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_get_mousePosition_m4224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m6053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_get_mousePresent_m6078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_GetTouch_m3906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_get_touchCount_m3905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_get_compositionString_m6242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Input_t732_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1133_il2cpp_TypeInfo_var;
void HideFlags_t2783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2021);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1133 * tmp;
		tmp = (FlagsAttribute_t1133 *)il2cpp_codegen_object_new (FlagsAttribute_t1133_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6438(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_Destroy_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_t728_Object_Destroy_m9617_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_Destroy_m4116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_t728_Object_DestroyImmediate_m9618_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_get_name_m3973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_set_name_m6362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_set_hideFlags_m6276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_ToString_m527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_Instantiate_m4367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void Object_t728_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_get_transform_m4252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_get_gameObject_m3972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_GetComponent_m6408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_GetComponent_m10434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Component_t786_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m4460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m6037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9634_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9634_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2924 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2924 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2924_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10298(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2870_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9637_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4651);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2870 * tmp;
		tmp = (WritableAttribute_t2870 *)il2cpp_codegen_object_new (WritableAttribute_t2870_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9655_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_get_time_m4357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_get_deltaTime_m4398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_set_timeScale_m4177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Time_t2785_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m4546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Random_t2786_CustomAttributesCacheGenerator_Random_set_seed_m4505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Random_t2786_CustomAttributesCacheGenerator_Random_Range_m4397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Random_t2786_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetInt_m4556_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetFloat_m4554_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetString_m7960_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void LocalNotification_t2789_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RemoteNotification_t2790_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m9709_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m9709_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_Raycast_m4227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m6165_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m6165_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m6103_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m6103_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m9710_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m9710_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics_t2794_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Collider_t789_CustomAttributesCacheGenerator_Collider_set_enabled_m4239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Collider_t789_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_IgnoreLayerCollision_m4419_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_Raycast_m6166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Collider2D_t724_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Collider2D_t724_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CircleCollider2D_t632_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CircleCollider2D_t632_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_set_volume_m4550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_set_clip_m4215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Play_m9737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_t553_AudioSource_Play_m9737_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Play_m4450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Stop_m4216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2921_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_t553_AudioSource_PlayOneShot_m9738_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2921 * tmp;
		tmp = (DefaultValueAttribute_t2921 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2921_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10293(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var;
void AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4652);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2922 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2922 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2922_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10297(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void AnimationEvent_t2805_CustomAttributesCacheGenerator_AnimationEvent_t2805____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_t2809_AnimationCurve__ctor_m9764_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_Init_m9768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2806_CustomAttributesCacheGenerator_AnimatorStateInfo_t2806____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Animator_t1072_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Animator_t1072_CustomAttributesCacheGenerator_Animator_StringToHash_m9787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Animator_t1072_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Animator_t1072_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t2815_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t2815_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t2815_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t2815_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4683(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Font_t940_CustomAttributesCacheGenerator_Font_get_material_m6366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Font_t940_CustomAttributesCacheGenerator_Font_HasCharacter_m6264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Font_t940_CustomAttributesCacheGenerator_Font_get_dynamic_m6368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Font_t940_CustomAttributesCacheGenerator_Font_get_fontSize_m6369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2816_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2223 * tmp;
		tmp = (EditorBrowsableAttribute_t2223 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8368(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_Init_m9817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void Canvas_t691_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2863_il2cpp_TypeInfo_var;
void RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4649);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2863 * tmp;
		tmp = (WrapperlessIcall_t2863 *)il2cpp_codegen_object_new (WrapperlessIcall_t2863_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10086(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_Request_get_sourceId_m9856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_Request_get_appId_m9857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2820_CustomAttributesCacheGenerator_Request_get_domain_m9858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_Response_get_success_m9867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_Response_set_success_m9868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2822_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_name_m9953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_name_m9954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2836_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2836_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2836_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2994_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2837_il2cpp_TypeInfo_var;
void AppID_t2837_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		AppID_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4557);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2994 * tmp;
		tmp = (DefaultValueAttribute_t2994 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2994_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10449(tmp, Box(AppID_t2837_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2994_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2838_il2cpp_TypeInfo_var;
void SourceID_t2838_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		SourceID_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4556);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2994 * tmp;
		tmp = (DefaultValueAttribute_t2994 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2994_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10449(tmp, Box(SourceID_t2838_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2994_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2839_il2cpp_TypeInfo_var;
void NetworkID_t2839_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		NetworkID_t2839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4559);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2994 * tmp;
		tmp = (DefaultValueAttribute_t2994 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2994_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10449(tmp, Box(NetworkID_t2839_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2994_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2840_il2cpp_TypeInfo_var;
void NodeID_t2840_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		NodeID_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4560);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2994 * tmp;
		tmp = (DefaultValueAttribute_t2994 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2994_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10449(tmp, Box(NodeID_t2840_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2845_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10450(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10456(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10457(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10459(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10460(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var;
void JsonArray_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2223 * tmp;
		tmp = (EditorBrowsableAttribute_t2223 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8368(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var;
void JsonObject_t2847_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3476);
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
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2223 * tmp;
		tmp = (EditorBrowsableAttribute_t2223 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8368(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
void SimpleJson_t2850_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var;
void SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m10015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4658);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2998 * tmp;
		tmp = (SuppressMessageAttribute_t2998 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10462(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10463(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var;
void SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_NextToken_m10027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4658);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2998 * tmp;
		tmp = (SuppressMessageAttribute_t2998 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10462(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var;
void SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_t2850____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3476);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2223 * tmp;
		tmp = (EditorBrowsableAttribute_t2223 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2223_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8368(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2848_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2848_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4658);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2998 * tmp;
		tmp = (SuppressMessageAttribute_t2998 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10462(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10463(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m10044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4658);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2998 * tmp;
		tmp = (SuppressMessageAttribute_t2998 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10462(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10463(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m10045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4658);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2998 * tmp;
		tmp = (SuppressMessageAttribute_t2998 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2998_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10462(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10463(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var;
void ReflectionUtils_t2862_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4657);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2997 * tmp;
		tmp = (GeneratedCodeAttribute_t2997 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2997_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10461(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetConstructorInfo_m10070_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetContructor_m10075_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetConstructorByReflection_m10077_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2856_CustomAttributesCacheGenerator_ConstructorDelegate_t2856_ConstructorDelegate_Invoke_m10055_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t829_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2856_CustomAttributesCacheGenerator_ConstructorDelegate_t2856_ConstructorDelegate_BeginInvoke_m10056_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t829 * tmp;
		tmp = (ParamArrayAttribute_t829 *)il2cpp_codegen_object_new (ParamArrayAttribute_t829_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4595(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2858_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2859_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2860_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2861_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2864_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1142_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void RequireComponent_t835_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void WritableAttribute_t2870_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2871_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void GUIStateObjects_t2882_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_Achievement_get_id_m10132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_Achievement_set_id_m10133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2885_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2886_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2886_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2886_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_Score_get_value_m10154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2887_CustomAttributesCacheGenerator_Score_set_value_m10155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_id_m10163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_id_m10164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_range_m10167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_range_m10168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void TooltipAttribute_t1145_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void SpaceAttribute_t1143_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void RangeAttribute_t1141_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1146_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1144_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4653);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2991 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2991 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2991_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10427(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2903_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void ArgumentCache_t2910_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void PersistentCall_t2914_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
void PersistentCall_t2914_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
void PersistentCall_t2914_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void PersistentCall_t2914_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void PersistentCall_t2914_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2916_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var;
void UnityEventBase_t2919_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2023);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1136 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1136 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1136_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6457(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t830_il2cpp_TypeInfo_var;
void UnityEventBase_t2919_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t830 * tmp;
		tmp = (SerializeField_t830 *)il2cpp_codegen_object_new (SerializeField_t830_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4596(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1135_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2920_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2022);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1135 * tmp;
		tmp = (AddComponentMenu_t1135 *)il2cpp_codegen_object_new (AddComponentMenu_t1135_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6456(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2921_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2922_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8231(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m8230(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t833_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2924_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t833 * tmp;
		tmp = (AttributeUsageAttribute_t833 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t833_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4713(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[829] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2709_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8910,
	AssetBundleCreateRequest_t2709_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8911,
	AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8915,
	AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8916,
	AssetBundle_t2711_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8917,
	LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8920,
	LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8921,
	LayerMask_t924_CustomAttributesCacheGenerator_LayerMask_t924_LayerMask_GetMask_m8922_Arg0_ParameterInfo,
	RuntimePlatform_t811_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t811_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t811_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4564,
	SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8923,
	SystemInfo_t2715_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m8007,
	Coroutine_t979_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8926,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8928,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8928_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8929,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8931,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8936,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8937,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8938,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8939,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8940,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8941,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8942,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8943,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8944,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8945,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8946,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8947,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8948,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8949,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8950,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8951,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8952,
	GameCenterPlatform_t821_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8954,
	GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8998,
	GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8999,
	GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m9000,
	GcLeaderboard_t2727_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m9001,
	MeshFilter_t816_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4392,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_Internal_Create_m9002,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_t512_Mesh_Internal_Create_m9002_Arg0_ParameterInfo,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_vertices_m4566,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_uv_m4568,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4569,
	Mesh_t512_CustomAttributesCacheGenerator_Mesh_set_triangles_m4567,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_enabled_m4238,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_material_m4217,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_material_m4219,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_set_materials_m4429,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_bounds_m4247,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6097,
	Renderer_t546_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6098,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_get_width_m3877,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_get_height_m3892,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_get_dpi_m3999,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4312,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4313,
	Screen_t2729_CustomAttributesCacheGenerator_Screen_get_orientation_m3891,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m9024,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m9025,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m9029,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m9029_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6139,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6213,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m9030,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m9030_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m9030_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3917,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3916,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m9031,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3918,
	RenderTexture_t2730_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m9032,
	RenderTexture_t2730_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m9033,
	GUILayer_t2733_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m9037,
	Gradient_t2736_CustomAttributesCacheGenerator_Gradient_Init_m9041,
	Gradient_t2736_CustomAttributesCacheGenerator_Gradient_Cleanup_m9042,
	GUI_t730_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t730_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t730_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m9049,
	GUI_t730_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m9050,
	GUI_t730_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m9051,
	GUI_t730_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m9052,
	GUI_t730_CustomAttributesCacheGenerator_GUI_set_changed_m9054,
	GUI_t730_CustomAttributesCacheGenerator_GUI_get_enabled_m9055,
	GUI_t730_CustomAttributesCacheGenerator_GUI_set_enabled_m3910,
	GUI_t730_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m9057,
	GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m9060,
	GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m9063,
	GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m9070,
	GUI_t730_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9077,
	GUI_t730_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9079,
	GUI_t730_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9086,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Label_m3888_Arg1_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Box_m3904_Arg1_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Button_m3886_Arg1_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_TextField_m3889_Arg1_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_TextField_m4325_Arg2_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_Toggle_m3934_Arg2_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_SelectionGrid_m3932_Arg3_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_SelectionGrid_m9093_Arg4_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginHorizontal_m3887_Arg0_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginHorizontal_m9094_Arg2_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginVertical_m3901_Arg0_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginVertical_m9095_Arg2_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginScrollView_m3909_Arg1_ParameterInfo,
	GUILayout_t2739_CustomAttributesCacheGenerator_GUILayout_t2739_GUILayout_BeginScrollView_m9096_Arg6_ParameterInfo,
	GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9111,
	GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9113,
	GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9114,
	GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_t729_GUILayoutUtility_GetRect_m9117_Arg2_ParameterInfo,
	GUILayoutUtility_t729_CustomAttributesCacheGenerator_GUILayoutUtility_t729_GUILayoutUtility_GetRect_m9119_Arg3_ParameterInfo,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9161,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9165,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9169,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9170,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9171,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9172,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9173,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9174,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9176,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9178,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9182,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9183,
	GUIUtility_t2751_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9184,
	GUIClip_t2752_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9186,
	GUIClip_t2752_CustomAttributesCacheGenerator_GUIClip_Pop_m9187,
	GUISettings_t2753_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2753_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2753_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2753_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2753_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t805_CustomAttributesCacheGenerator,
	GUISkin_t805_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t805_CustomAttributesCacheGenerator_m_box,
	GUISkin_t805_CustomAttributesCacheGenerator_m_button,
	GUISkin_t805_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t805_CustomAttributesCacheGenerator_m_label,
	GUISkin_t805_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t805_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t805_CustomAttributesCacheGenerator_m_window,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t805_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t805_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t805_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t805_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t805_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t807_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t807_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t807_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_Init_m9256,
	GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9257,
	GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9258,
	GUIStyleState_t750_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9259,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_Init_m9262,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9263,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_left_m6401,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_left_m9264,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_right_m9265,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_right_m9266,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_top_m6402,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_top_m9267,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4336,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9268,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6395,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6396,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9270,
	RectOffset_t725_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9272,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9276,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9277,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9278,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9279,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9280,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9281,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9283,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9284,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9285,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3878,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9286,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3879,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9287,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9288,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9289,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3883,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9290,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3882,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9291,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3979,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3980,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9294,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9297,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9298_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9300,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9301,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9305,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9307,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9309,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9312,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9315,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9317,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6299,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6300,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg1_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg2_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg3_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg4_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg5_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_t974_TouchScreenKeyboard_Open_m9318_Arg6_ParameterInfo,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6240,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6241,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6298,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6239,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6297,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6252,
	TouchScreenKeyboard_t974_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6251,
	Event_t808_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t808_CustomAttributesCacheGenerator_Event_Init_m9319,
	Event_t808_CustomAttributesCacheGenerator_Event_Cleanup_m9321,
	Event_t808_CustomAttributesCacheGenerator_Event_get_rawType_m6265,
	Event_t808_CustomAttributesCacheGenerator_Event_get_type_m4333,
	Event_t808_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9322,
	Event_t808_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9324,
	Event_t808_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9326,
	Event_t808_CustomAttributesCacheGenerator_Event_get_modifiers_m6261,
	Event_t808_CustomAttributesCacheGenerator_Event_get_character_m6263,
	Event_t808_CustomAttributesCacheGenerator_Event_get_commandName_m9327,
	Event_t808_CustomAttributesCacheGenerator_Event_get_keyCode_m6262,
	Event_t808_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9328,
	Event_t808_CustomAttributesCacheGenerator_Event_Use_m9330,
	Event_t808_CustomAttributesCacheGenerator_Event_PopEvent_m6266,
	EventModifiers_t2762_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t523_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t780_CustomAttributesCacheGenerator,
	Quaternion_t813_CustomAttributesCacheGenerator,
	Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9355,
	Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9358,
	Quaternion_t813_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9360,
	Matrix4x4_t1111_CustomAttributesCacheGenerator,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9376,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9378,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9380,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9383,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9395,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9398,
	Matrix4x4_t1111_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9399,
	Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9416,
	Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9419,
	Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9422,
	Bounds_t790_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9426,
	Vector4_t1070_CustomAttributesCacheGenerator,
	Mathf_t752_CustomAttributesCacheGenerator_Mathf_t752_Mathf_SmoothDamp_m6321_Arg4_ParameterInfo,
	Mathf_t752_CustomAttributesCacheGenerator_Mathf_t752_Mathf_SmoothDamp_m6321_Arg5_ParameterInfo,
	DrivenTransformProperties_t2764_CustomAttributesCacheGenerator,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9457,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9458,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9459,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9460,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9461,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9462,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9463,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9464,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9465,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9466,
	RectTransform_t573_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9467,
	Resources_t818_CustomAttributesCacheGenerator_Resources_Load_m4359,
	TextAsset_t804_CustomAttributesCacheGenerator_TextAsset_get_text_m4316,
	SerializePrivateVariables_t2768_CustomAttributesCacheGenerator,
	Shader_t2769_CustomAttributesCacheGenerator_Shader_PropertyToID_m9475,
	Material_t513_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9478,
	Material_t513_CustomAttributesCacheGenerator_Material_SetTexture_m9480,
	Material_t513_CustomAttributesCacheGenerator_Material_GetTexture_m9482,
	Material_t513_CustomAttributesCacheGenerator_Material_SetFloat_m9484,
	Material_t513_CustomAttributesCacheGenerator_Material_HasProperty_m9485,
	Material_t513_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9486,
	Material_t513_CustomAttributesCacheGenerator_Material_t513_Material_Internal_CreateWithMaterial_m9486_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9489,
	SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9492,
	SphericalHarmonicsL2_t2770_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9495,
	Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_rect_m6192,
	Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6188,
	Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_texture_m6185,
	Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6210,
	Sprite_t521_CustomAttributesCacheGenerator_Sprite_get_border_m6186,
	SpriteRenderer_t594_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9505,
	SpriteRenderer_t594_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9506,
	DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6198,
	DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6197,
	DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6191,
	DataUtility_t2771_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9507,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9510,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9511,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4396,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9512_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9513,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9516,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4070,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9517,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7965,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7971,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3921,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9520_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3920,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9522_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9522_Arg3_ParameterInfo,
	WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_URLEncode_m9526_Arg1_ParameterInfo,
	WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_QPEncode_m9528_Arg1_ParameterInfo,
	WWWTranscoder_t2773_CustomAttributesCacheGenerator_WWWTranscoder_t2773_WWWTranscoder_SevenBitClean_m9531_Arg1_ParameterInfo,
	CacheIndex_t2774_CustomAttributesCacheGenerator,
	UnityString_t2775_CustomAttributesCacheGenerator_UnityString_t2775_UnityString_Format_m9533_Arg1_ParameterInfo,
	AsyncOperation_t2710_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9535,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3971,
	Application_t1540_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9542,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_isPlaying_m4356,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_isEditor_m6303,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4282,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_platform_m3985,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m8005,
	Application_t1540_CustomAttributesCacheGenerator_Application_t1540_Application_ExternalCall_m4283_Arg1_ParameterInfo,
	Application_t1540_CustomAttributesCacheGenerator_Application_t1540_Application_BuildInvocationForArguments_m9544_Arg1_ParameterInfo,
	Application_t1540_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9545,
	Application_t1540_CustomAttributesCacheGenerator_Application_get_unityVersion_m4360,
	Application_t1540_CustomAttributesCacheGenerator_Application_OpenURL_m4176,
	Application_t1540_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9547,
	Application_t1540_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1540_CustomAttributesCacheGenerator_Application_t1540____persistentDataPath_PropertyInfo,
	Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_get_enabled_m6035,
	Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6273,
	Behaviour_t1121_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m6036,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6089,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6088,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4481,
	Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4463,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m6001,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6101,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9554,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9555,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9556,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9557,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9559,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9560,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9561,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9562,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9563,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9564,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m4223,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9565,
	Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9566,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9571,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9573,
	CameraCallback_t2776_CustomAttributesCacheGenerator,
	Debug_t2777_CustomAttributesCacheGenerator_Debug_Internal_Log_m9574,
	Debug_t2777_CustomAttributesCacheGenerator_Debug_t2777_Debug_Internal_Log_m9574_Arg2_ParameterInfo,
	Debug_t2777_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9575,
	Debug_t2777_CustomAttributesCacheGenerator_Debug_t2777_Debug_Internal_LogException_m9575_Arg1_ParameterInfo,
	Debug_t2777_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4281,
	Display_t2780_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9600,
	Display_t2780_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9601,
	Display_t2780_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9602,
	Display_t2780_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9603,
	Display_t2780_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9604,
	Display_t2780_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9605,
	Display_t2780_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9606,
	Display_t2780_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9607,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4231,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4230,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9608,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9609,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9610,
	Input_t732_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6080,
	Input_t732_CustomAttributesCacheGenerator_Input_GetButtonDown_m6079,
	Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButton_m4418,
	Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4226,
	Input_t732_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4417,
	Input_t732_CustomAttributesCacheGenerator_Input_get_mousePosition_m4224,
	Input_t732_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m6053,
	Input_t732_CustomAttributesCacheGenerator_Input_get_mousePresent_m6078,
	Input_t732_CustomAttributesCacheGenerator_Input_GetTouch_m3906,
	Input_t732_CustomAttributesCacheGenerator_Input_get_touchCount_m3905,
	Input_t732_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6301,
	Input_t732_CustomAttributesCacheGenerator_Input_get_compositionString_m6242,
	Input_t732_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9612,
	HideFlags_t2783_CustomAttributesCacheGenerator,
	Object_t728_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9614,
	Object_t728_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9616,
	Object_t728_CustomAttributesCacheGenerator_Object_Destroy_m9617,
	Object_t728_CustomAttributesCacheGenerator_Object_t728_Object_Destroy_m9617_Arg1_ParameterInfo,
	Object_t728_CustomAttributesCacheGenerator_Object_Destroy_m4116,
	Object_t728_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9618,
	Object_t728_CustomAttributesCacheGenerator_Object_t728_Object_DestroyImmediate_m9618_Arg1_ParameterInfo,
	Object_t728_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6302,
	Object_t728_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9619,
	Object_t728_CustomAttributesCacheGenerator_Object_get_name_m3973,
	Object_t728_CustomAttributesCacheGenerator_Object_set_name_m6362,
	Object_t728_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t728_CustomAttributesCacheGenerator_Object_set_hideFlags_m6276,
	Object_t728_CustomAttributesCacheGenerator_Object_ToString_m527,
	Object_t728_CustomAttributesCacheGenerator_Object_Instantiate_m4367,
	Object_t728_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9625,
	Component_t786_CustomAttributesCacheGenerator_Component_get_transform_m4252,
	Component_t786_CustomAttributesCacheGenerator_Component_get_gameObject_m3972,
	Component_t786_CustomAttributesCacheGenerator_Component_GetComponent_m6408,
	Component_t786_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9627,
	Component_t786_CustomAttributesCacheGenerator_Component_GetComponent_m10434,
	Component_t786_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9628,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9630,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9631,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10438,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9632,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9633,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4255,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6278,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6279,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4172,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m4460,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m6037,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4558,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4412,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9634,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9634_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9634_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9635,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9636,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9637,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9637_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9642,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9643,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9644,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9645,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9646,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9647,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9648,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9649,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9650,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9651,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9652,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9653,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4368,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9654,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4500,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9655_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9656,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9657,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9658,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4453,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6277,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4369,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4452,
	Time_t2785_CustomAttributesCacheGenerator_Time_get_time_m4357,
	Time_t2785_CustomAttributesCacheGenerator_Time_get_deltaTime_m4398,
	Time_t2785_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6082,
	Time_t2785_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6113,
	Time_t2785_CustomAttributesCacheGenerator_Time_set_timeScale_m4177,
	Time_t2785_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m4546,
	Random_t2786_CustomAttributesCacheGenerator_Random_set_seed_m4505,
	Random_t2786_CustomAttributesCacheGenerator_Random_Range_m4397,
	Random_t2786_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9660,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9663,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9664,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9665,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4556,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetInt_m4556_Arg1_ParameterInfo,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4554,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetFloat_m4554_Arg1_ParameterInfo,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7960,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_t2788_PlayerPrefs_GetString_m7960_Arg1_ParameterInfo,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4136,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4135,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4552,
	PlayerPrefs_t2788_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7963,
	LocalNotification_t2789_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9667,
	RemoteNotification_t2790_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9669,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9672,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9673,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9675,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9676,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9677,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9678,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9679,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9680,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9681,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9683,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9684,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9686,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9687,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9688,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9689,
	NotificationServices_t2792_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9690,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9708,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m9709_Arg3_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m9709_Arg4_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_Raycast_m4227,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m6165_Arg2_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_Raycast_m6165_Arg3_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m6103_Arg1_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m6103_Arg2_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m9710_Arg2_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_t2794_Physics_RaycastAll_m9710_Arg3_ParameterInfo,
	Physics_t2794_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9711,
	Collider_t789_CustomAttributesCacheGenerator_Collider_set_enabled_m4239,
	Collider_t789_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9712,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4419,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_IgnoreLayerCollision_m4419_Arg2_ParameterInfo,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9716,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_Raycast_m6166,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg2_ParameterInfo,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg3_ParameterInfo,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg4_ParameterInfo,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_t817_Physics2D_Raycast_m9717_Arg5_ParameterInfo,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6092,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9718,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4410,
	Physics2D_t817_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9719,
	Collider2D_t724_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4493,
	Collider2D_t724_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9721,
	CircleCollider2D_t632_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4492,
	CircleCollider2D_t632_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4491,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_set_volume_m4550,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_set_clip_m4215,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Play_m9737,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_t553_AudioSource_Play_m9737_Arg0_ParameterInfo,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Play_m4450,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4451,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_Stop_m4216,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4551,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9738,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_t553_AudioSource_PlayOneShot_m9738_Arg1_ParameterInfo,
	AudioSource_t553_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4229,
	AnimationEvent_t2805_CustomAttributesCacheGenerator_AnimationEvent_t2805____data_PropertyInfo,
	AnimationCurve_t2809_CustomAttributesCacheGenerator,
	AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_t2809_AnimationCurve__ctor_m9764_Arg0_ParameterInfo,
	AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9766,
	AnimationCurve_t2809_CustomAttributesCacheGenerator_AnimationCurve_Init_m9768,
	AnimatorStateInfo_t2806_CustomAttributesCacheGenerator_AnimatorStateInfo_t2806____nameHash_PropertyInfo,
	Animator_t1072_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6355,
	Animator_t1072_CustomAttributesCacheGenerator_Animator_StringToHash_m9787,
	Animator_t1072_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9788,
	Animator_t1072_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9789,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4221,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4222,
	CharacterInfo_t2815_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2815_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2815_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2815_CustomAttributesCacheGenerator_flipped,
	Font_t940_CustomAttributesCacheGenerator_Font_get_material_m6366,
	Font_t940_CustomAttributesCacheGenerator_Font_HasCharacter_m6264,
	Font_t940_CustomAttributesCacheGenerator_Font_get_dynamic_m6368,
	Font_t940_CustomAttributesCacheGenerator_Font_get_fontSize_m6369,
	FontTextureRebuildCallback_t2816_CustomAttributesCacheGenerator,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_Init_m9817,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9818,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9821,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6275,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9822,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9823,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9824,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9825,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9826,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9827,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6257,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9828,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9829,
	TextGenerator_t977_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6290,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6162,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6383,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4549,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9840,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4573,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6386,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6189,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6387,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6149,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6164,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6163,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6170,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6136,
	Canvas_t691_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6365,
	CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6348,
	CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9842,
	CanvasGroup_t1093_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6148,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9845,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6152,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6418,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6144,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9846,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9847,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6140,
	CanvasRenderer_t945_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6137,
	RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9849,
	RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9851,
	RectTransformUtility_t1095_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6151,
	Request_t2820_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2820_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2820_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2820_CustomAttributesCacheGenerator_Request_get_sourceId_m9856,
	Request_t2820_CustomAttributesCacheGenerator_Request_get_appId_m9857,
	Request_t2820_CustomAttributesCacheGenerator_Request_get_domain_m9858,
	Response_t2822_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2822_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2822_CustomAttributesCacheGenerator_Response_get_success_m9867,
	Response_t2822_CustomAttributesCacheGenerator_Response_set_success_m9868,
	Response_t2822_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9869,
	Response_t2822_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9870,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9875,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9876,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9877,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9878,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9879,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9880,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9881,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9882,
	CreateMatchRequest_t2825_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9883,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9886,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9887,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9888,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9889,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9890,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9891,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9892,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9893,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9894,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9895,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9896,
	CreateMatchResponse_t2826_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9897,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9901,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9902,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9903,
	JoinMatchRequest_t2827_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9904,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9907,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9908,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9909,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9910,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9911,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9912,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9913,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9914,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9915,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9916,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9917,
	JoinMatchResponse_t2828_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9918,
	DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9922,
	DestroyMatchRequest_t2829_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9923,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9926,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9927,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9928,
	DropConnectionRequest_t2830_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9929,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9932,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9933,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9934,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9935,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9936,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9937,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9938,
	ListMatchRequest_t2831_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9939,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9942,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9943,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9944,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9945,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9946,
	MatchDirectConnectInfo_t2832_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9947,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9951,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9952,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_name_m9953,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_name_m9954,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9955,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9956,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9957,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9958,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9959,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9960,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9961,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9962,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9963,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9964,
	MatchDesc_t2834_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9965,
	ListMatchResponse_t2836_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2836_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9969,
	ListMatchResponse_t2836_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9970,
	AppID_t2837_CustomAttributesCacheGenerator,
	SourceID_t2838_CustomAttributesCacheGenerator,
	NetworkID_t2839_CustomAttributesCacheGenerator,
	NodeID_t2840_CustomAttributesCacheGenerator,
	NetworkMatch_t2845_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10450,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10456,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10457,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10459,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2996_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10460,
	JsonArray_t2846_CustomAttributesCacheGenerator,
	JsonObject_t2847_CustomAttributesCacheGenerator,
	SimpleJson_t2850_CustomAttributesCacheGenerator,
	SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m10015,
	SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_NextToken_m10027,
	SimpleJson_t2850_CustomAttributesCacheGenerator_SimpleJson_t2850____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2848_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2848_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10464,
	PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m10044,
	PocoJsonSerializerStrategy_t2849_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m10045,
	ReflectionUtils_t2862_CustomAttributesCacheGenerator,
	ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetConstructorInfo_m10070_Arg1_ParameterInfo,
	ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetContructor_m10075_Arg1_ParameterInfo,
	ReflectionUtils_t2862_CustomAttributesCacheGenerator_ReflectionUtils_t2862_ReflectionUtils_GetConstructorByReflection_m10077_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2999_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2856_CustomAttributesCacheGenerator_ConstructorDelegate_t2856_ConstructorDelegate_Invoke_m10055_Arg0_ParameterInfo,
	ConstructorDelegate_t2856_CustomAttributesCacheGenerator_ConstructorDelegate_t2856_ConstructorDelegate_BeginInvoke_m10056_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2857_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2858_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2859_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2860_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2861_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2864_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1142_CustomAttributesCacheGenerator,
	RequireComponent_t835_CustomAttributesCacheGenerator,
	WritableAttribute_t2870_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2871_CustomAttributesCacheGenerator,
	GUIStateObjects_t2882_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10110,
	Achievement_t2885_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2885_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2885_CustomAttributesCacheGenerator_Achievement_get_id_m10132,
	Achievement_t2885_CustomAttributesCacheGenerator_Achievement_set_id_m10133,
	Achievement_t2885_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10134,
	Achievement_t2885_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10135,
	AchievementDescription_t2886_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2886_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10142,
	AchievementDescription_t2886_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10143,
	Score_t2887_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2887_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2887_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10152,
	Score_t2887_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10153,
	Score_t2887_CustomAttributesCacheGenerator_Score_get_value_m10154,
	Score_t2887_CustomAttributesCacheGenerator_Score_set_value_m10155,
	Leaderboard_t2726_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2726_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2726_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2726_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_id_m10163,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_id_m10164,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10165,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10166,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_range_m10167,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_range_m10168,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10169,
	Leaderboard_t2726_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10170,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1145_CustomAttributesCacheGenerator,
	SpaceAttribute_t1143_CustomAttributesCacheGenerator,
	RangeAttribute_t1141_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1146_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1144_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10214,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10216,
	SharedBetweenAnimatorsAttribute_t2903_CustomAttributesCacheGenerator,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2910_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2914_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2914_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2914_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2914_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2914_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2916_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2919_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2919_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2920_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2921_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2922_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1136_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2924_CustomAttributesCacheGenerator,
};
