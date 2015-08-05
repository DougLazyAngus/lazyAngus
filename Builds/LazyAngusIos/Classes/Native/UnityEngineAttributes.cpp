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
extern TypeInfo* InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t749_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t749 * tmp;
		tmp = (ExtensionAttribute_t749 *)il2cpp_codegen_object_new (ExtensionAttribute_t749_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4087(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2112 * tmp;
		tmp = (InternalsVisibleToAttribute_t2112 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2112_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7592(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2631_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2631_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_t838_LayerMask_GetMask_m8443_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void RuntimePlatform_t2637_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void RuntimePlatform_t2637_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Coroutine_t893_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8449_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MeshFilter_t740_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8523_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_enabled_m3790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_material_m3769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_material_m3771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_materials_m4036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_bounds_m3799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_get_width_m3429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_get_height_m3444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_get_dpi_m3551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Screen_t2652_CustomAttributesCacheGenerator_Screen_get_orientation_m3443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8550_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8551_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8551_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RenderTexture_t2653_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RenderTexture_t2653_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUILayer_t2656_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Gradient_t2659_CustomAttributesCacheGenerator_Gradient_Init_m8562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Gradient_t2659_CustomAttributesCacheGenerator_Gradient_Cleanup_m8563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_set_changed_m8575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_get_enabled_m8576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_set_enabled_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Label_m3440_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Box_m3456_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Button_m3438_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_TextField_m3441_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_TextField_m3877_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Toggle_m3486_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_SelectionGrid_m3484_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_SelectionGrid_m8614_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginHorizontal_m3439_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginHorizontal_m8615_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginVertical_m3453_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginVertical_m8616_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginScrollView_m3461_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginScrollView_m8617_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_t654_GUILayoutUtility_GetRect_m8638_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_t654_GUILayoutUtility_GetRect_m8640_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIClip_t2675_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIClip_t2675_CustomAttributesCacheGenerator_GUIClip_Pop_m8708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISettings_t2676_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISettings_t2676_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISettings_t2676_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISettings_t2676_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISettings_t2676_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1057_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1832);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1057 * tmp;
		tmp = (ExecuteInEditMode_t1057 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1057_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m6008(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUISkin_t731_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUIContent_t733_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUIContent_t733_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void GUIContent_t733_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_Init_m8777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_Init_m8783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_left_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_left_m8785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_right_m8786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_right_m8787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_top_m5917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_top_m8788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8819_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Init_m8840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Cleanup_m8842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_rawType_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_type_m3885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_modifiers_m5772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_character_m5774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_commandName_m8848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_get_keyCode_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_Use_m8851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Event_t734_CustomAttributesCacheGenerator_Event_PopEvent_m5777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1047_il2cpp_TypeInfo_var;
void EventModifiers_t2685_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1047 * tmp;
		tmp = (FlagsAttribute_t1047 *)il2cpp_codegen_object_new (FlagsAttribute_t1047_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5953(tmp, NULL);
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2787_il2cpp_TypeInfo_var;
void Color32_t706_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2787 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2787 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2787_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9608(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t735_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t985_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Mathf_t678_CustomAttributesCacheGenerator_Mathf_t678_Mathf_SmoothDamp_m5835_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Mathf_t678_CustomAttributesCacheGenerator_Mathf_t678_Mathf_SmoothDamp_m5835_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1047_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2687_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1047 * tmp;
		tmp = (FlagsAttribute_t1047 *)il2cpp_codegen_object_new (FlagsAttribute_t1047_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5953(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void Resources_t738_CustomAttributesCacheGenerator_Resources_Load_m8995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextAsset_t730_CustomAttributesCacheGenerator_TextAsset_get_text_m3868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2691_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Shader_t2692_CustomAttributesCacheGenerator_Shader_PropertyToID_m8998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9009_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9035_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9043_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9045_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9045_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_URLEncode_m9049_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_QPEncode_m9051_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_SevenBitClean_m9054_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void CacheIndex_t2697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void UnityString_t2698_CustomAttributesCacheGenerator_UnityString_t2698_UnityString_Format_m9056_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AsyncOperation_t2632_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_isPlaying_m5815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_isEditor_m5817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_platform_m3537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_t1462_Application_ExternalCall_m3835_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_t1462_Application_BuildInvocationForArguments_m9067_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_OpenURL_m3728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2915_il2cpp_TypeInfo_var;
void Application_t1462_CustomAttributesCacheGenerator_Application_t1462____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2915 * tmp;
		tmp = (SecurityCriticalAttribute_t2915 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2915_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9956(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var;
void CameraCallback_t2699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2145 * tmp;
		tmp = (EditorBrowsableAttribute_t2145 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7889(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Debug_t2700_CustomAttributesCacheGenerator_Debug_Internal_Log_m9097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void Debug_t2700_CustomAttributesCacheGenerator_Debug_t2700_Debug_Internal_Log_m9097_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Debug_t2700_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void Debug_t2700_CustomAttributesCacheGenerator_Debug_t2700_Debug_Internal_LogException_m9098_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Debug_t2700_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Display_t2703_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetAxis_m4074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetButtonDown_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButton_m3981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_get_mousePosition_m3776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_get_mousePresent_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_GetTouch_m3458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_get_touchCount_m3457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_get_compositionString_m5754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Input_t657_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1047_il2cpp_TypeInfo_var;
void HideFlags_t2706_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1047 * tmp;
		tmp = (FlagsAttribute_t1047 *)il2cpp_codegen_object_new (FlagsAttribute_t1047_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5953(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_Destroy_m9140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_t653_Object_Destroy_m9140_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_Destroy_m3668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_t653_Object_DestroyImmediate_m9141_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_get_name_m3525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_set_name_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_set_hideFlags_m5788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_Instantiate_m3909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void Object_t653_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_get_transform_m3804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_get_gameObject_m3524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_GetComponent_m5923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_GetComponent_m9959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Component_t712_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9157_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9157_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2847 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2847 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2847_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9821(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2793_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9160_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2793 * tmp;
		tmp = (WritableAttribute_t2793 *)il2cpp_codegen_object_new (WritableAttribute_t2793_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9616(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9178_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Time_t2708_CustomAttributesCacheGenerator_Time_get_time_m3930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Time_t2708_CustomAttributesCacheGenerator_Time_get_deltaTime_m3952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Time_t2708_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Time_t2708_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Time_t2708_CustomAttributesCacheGenerator_Time_set_timeScale_m3729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Random_t2709_CustomAttributesCacheGenerator_Random_set_seed_m4004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Random_t2709_CustomAttributesCacheGenerator_Random_Range_m3950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Random_t2709_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_t2711_PlayerPrefs_GetString_m7480_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void LocalNotification_t2712_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RemoteNotification_t2713_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m9229_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m9229_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_Raycast_m3779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m5676_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m5676_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m5614_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m5614_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m9230_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m9230_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics_t2717_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Collider_t715_CustomAttributesCacheGenerator_Collider_set_enabled_m3791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Collider_t715_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_IgnoreLayerCollision_m3982_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_Raycast_m5677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_set_clip_m3767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_Play_m9257_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m4038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Stop_m3768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2844_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_PlayOneShot_m9258_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2844 * tmp;
		tmp = (DefaultValueAttribute_t2844 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2844_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9816(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var;
void AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2845 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2845 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2845_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9820(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void AnimationEvent_t2728_CustomAttributesCacheGenerator_AnimationEvent_t2728____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2732_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_t2732_AnimationCurve__ctor_m9284_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_Init_m9288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2729_CustomAttributesCacheGenerator_AnimatorStateInfo_t2729____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_StringToHash_m9307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Animator_t620_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void CharacterInfo_t2738_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void CharacterInfo_t2738_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void CharacterInfo_t2738_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t753_il2cpp_TypeInfo_var;
void CharacterInfo_t2738_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t753 * tmp;
		tmp = (ObsoleteAttribute_t753 *)il2cpp_codegen_object_new (ObsoleteAttribute_t753_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4194(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Font_t853_CustomAttributesCacheGenerator_Font_get_material_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Font_t853_CustomAttributesCacheGenerator_Font_HasCharacter_m5775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Font_t853_CustomAttributesCacheGenerator_Font_get_dynamic_m5883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Font_t853_CustomAttributesCacheGenerator_Font_get_fontSize_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2739_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2145 * tmp;
		tmp = (EditorBrowsableAttribute_t2145 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7889(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_Init_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void Canvas_t628_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2786_il2cpp_TypeInfo_var;
void RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2786 * tmp;
		tmp = (WrapperlessIcall_t2786 *)il2cpp_codegen_object_new (WrapperlessIcall_t2786_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9607(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_Request_get_sourceId_m9377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_Request_get_appId_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2743_CustomAttributesCacheGenerator_Request_get_domain_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_Response_get_success_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_Response_set_success_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2745_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_name_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_name_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2759_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2759_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2759_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2760_il2cpp_TypeInfo_var;
void AppID_t2760_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		AppID_t2760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4371);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2917 * tmp;
		tmp = (DefaultValueAttribute_t2917 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2917_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9974(tmp, Box(AppID_t2760_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2761_il2cpp_TypeInfo_var;
void SourceID_t2761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		SourceID_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2917 * tmp;
		tmp = (DefaultValueAttribute_t2917 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2917_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9974(tmp, Box(SourceID_t2761_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2762_il2cpp_TypeInfo_var;
void NetworkID_t2762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		NetworkID_t2762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4373);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2917 * tmp;
		tmp = (DefaultValueAttribute_t2917 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2917_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9974(tmp, Box(NetworkID_t2762_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2763_il2cpp_TypeInfo_var;
void NodeID_t2763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4470);
		NodeID_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4374);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2917 * tmp;
		tmp = (DefaultValueAttribute_t2917 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2917_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9974(tmp, Box(NodeID_t2763_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2768_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9975(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9981(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9982(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9984(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9985(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var;
void JsonArray_t2769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2145 * tmp;
		tmp = (EditorBrowsableAttribute_t2145 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7889(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
void JsonObject_t2770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
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
		EditorBrowsableAttribute_t2145 * tmp;
		tmp = (EditorBrowsableAttribute_t2145 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7889(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
void SimpleJson_t2773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var;
void SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2921 * tmp;
		tmp = (SuppressMessageAttribute_t2921 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9987(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9988(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var;
void SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2921 * tmp;
		tmp = (SuppressMessageAttribute_t2921 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9987(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var;
void SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_t2773____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2145 * tmp;
		tmp = (EditorBrowsableAttribute_t2145 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2145_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7889(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2921 * tmp;
		tmp = (SuppressMessageAttribute_t2921 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9987(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9988(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2921 * tmp;
		tmp = (SuppressMessageAttribute_t2921 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9987(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9988(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2921 * tmp;
		tmp = (SuppressMessageAttribute_t2921 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2921_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9987(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9988(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var;
void ReflectionUtils_t2785_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2920 * tmp;
		tmp = (GeneratedCodeAttribute_t2920 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2920_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9986(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetConstructorInfo_m9591_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetContructor_m9596_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetConstructorByReflection_m9598_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2922_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2779_CustomAttributesCacheGenerator_ConstructorDelegate_t2779_ConstructorDelegate_Invoke_m9576_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t750_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2779_CustomAttributesCacheGenerator_ConstructorDelegate_t2779_ConstructorDelegate_BeginInvoke_m9577_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t750 * tmp;
		tmp = (ParamArrayAttribute_t750 *)il2cpp_codegen_object_new (ParamArrayAttribute_t750_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4106(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2787_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1058_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void RequireComponent_t1052_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void WritableAttribute_t2793_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2794_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void GUIStateObjects_t2805_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_Achievement_get_id_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_Achievement_set_id_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2808_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2809_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2809_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2809_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_Score_get_value_m9675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2810_CustomAttributesCacheGenerator_Score_set_value_m9676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_id_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_id_m9685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_range_m9688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_range_m9689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void TooltipAttribute_t1061_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void SpaceAttribute_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void RangeAttribute_t1056_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2914 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2914 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2914_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9952(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2826_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void ArgumentCache_t2833_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void PersistentCall_t2837_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void PersistentCall_t2837_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void PersistentCall_t2837_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void PersistentCall_t2837_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
void PersistentCall_t2837_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2839_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void UnityEventBase_t2842_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1050 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1050 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1050_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5972(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t751_il2cpp_TypeInfo_var;
void UnityEventBase_t2842_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t751 * tmp;
		tmp = (SerializeField_t751 *)il2cpp_codegen_object_new (SerializeField_t751_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4107(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1049_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1828);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1049 * tmp;
		tmp = (AddComponentMenu_t1049 *)il2cpp_codegen_object_new (AddComponentMenu_t1049_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5971(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2845_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1050_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7752(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7751(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t754_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2847_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t754 * tmp;
		tmp = (AttributeUsageAttribute_t754 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t754_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4224(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[814] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2631_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8431,
	AssetBundleCreateRequest_t2631_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8432,
	AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8436,
	AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8437,
	AssetBundle_t2633_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8438,
	LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8441,
	LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8442,
	LayerMask_t838_CustomAttributesCacheGenerator_LayerMask_t838_LayerMask_GetMask_m8443_Arg0_ParameterInfo,
	RuntimePlatform_t2637_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2637_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2637_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4082,
	SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8444,
	SystemInfo_t2638_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7527,
	Coroutine_t893_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8447,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8449,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8449_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8450,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8452,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8457,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8458,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8459,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8460,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8461,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8462,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8463,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8464,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8465,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8466,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8467,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8468,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8469,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8470,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8471,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8472,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8473,
	GameCenterPlatform_t748_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8475,
	GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8519,
	GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8520,
	GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8521,
	GcLeaderboard_t2650_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8522,
	MeshFilter_t740_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3938,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8523,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8523_Arg0_ParameterInfo,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3939,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3940,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_enabled_m3790,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_material_m3769,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_material_m3771,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_set_materials_m4036,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_bounds_m3799,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5608,
	Renderer_t564_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5609,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_get_width_m3429,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_get_height_m3444,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_get_dpi_m3551,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3864,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3865,
	Screen_t2652_CustomAttributesCacheGenerator_Screen_get_orientation_m3443,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8545,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8546,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8550,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8550_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5650,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5725,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8551,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8551_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8551_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3469,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3468,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8552,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3470,
	RenderTexture_t2653_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8553,
	RenderTexture_t2653_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8554,
	GUILayer_t2656_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8558,
	Gradient_t2659_CustomAttributesCacheGenerator_Gradient_Init_m8562,
	Gradient_t2659_CustomAttributesCacheGenerator_Gradient_Cleanup_m8563,
	GUI_t655_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t655_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t655_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8570,
	GUI_t655_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8571,
	GUI_t655_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8572,
	GUI_t655_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8573,
	GUI_t655_CustomAttributesCacheGenerator_GUI_set_changed_m8575,
	GUI_t655_CustomAttributesCacheGenerator_GUI_get_enabled_m8576,
	GUI_t655_CustomAttributesCacheGenerator_GUI_set_enabled_m3462,
	GUI_t655_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8578,
	GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8581,
	GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8584,
	GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8591,
	GUI_t655_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8598,
	GUI_t655_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8600,
	GUI_t655_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8607,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Label_m3440_Arg1_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Box_m3456_Arg1_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Button_m3438_Arg1_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_TextField_m3441_Arg1_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_TextField_m3877_Arg2_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_Toggle_m3486_Arg2_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_SelectionGrid_m3484_Arg3_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_SelectionGrid_m8614_Arg4_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginHorizontal_m3439_Arg0_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginHorizontal_m8615_Arg2_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginVertical_m3453_Arg0_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginVertical_m8616_Arg2_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginScrollView_m3461_Arg1_ParameterInfo,
	GUILayout_t2662_CustomAttributesCacheGenerator_GUILayout_t2662_GUILayout_BeginScrollView_m8617_Arg6_ParameterInfo,
	GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8632,
	GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8634,
	GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8635,
	GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_t654_GUILayoutUtility_GetRect_m8638_Arg2_ParameterInfo,
	GUILayoutUtility_t654_CustomAttributesCacheGenerator_GUILayoutUtility_t654_GUILayoutUtility_GetRect_m8640_Arg3_ParameterInfo,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8682,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8686,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8690,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8691,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8692,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8693,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8694,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8695,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8697,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8699,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8703,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8704,
	GUIUtility_t2674_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8705,
	GUIClip_t2675_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8707,
	GUIClip_t2675_CustomAttributesCacheGenerator_GUIClip_Pop_m8708,
	GUISettings_t2676_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2676_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2676_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2676_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2676_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t731_CustomAttributesCacheGenerator,
	GUISkin_t731_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t731_CustomAttributesCacheGenerator_m_box,
	GUISkin_t731_CustomAttributesCacheGenerator_m_button,
	GUISkin_t731_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t731_CustomAttributesCacheGenerator_m_label,
	GUISkin_t731_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t731_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t731_CustomAttributesCacheGenerator_m_window,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t731_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t731_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t731_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t731_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t731_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t733_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t733_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t733_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_Init_m8777,
	GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8778,
	GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8779,
	GUIStyleState_t676_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8780,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_Init_m8783,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8784,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_left_m5916,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_left_m8785,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_right_m8786,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_right_m8787,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_top_m5917,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_top_m8788,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3888,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8789,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5910,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5911,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8791,
	RectOffset_t650_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8793,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8797,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8798,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8799,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8800,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8801,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8802,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8804,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8805,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8806,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3430,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8807,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3431,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8808,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8809,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8810,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3435,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8811,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3434,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8812,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3531,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3532,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8815,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8818,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8819_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8821,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8822,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8826,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8828,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8830,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8833,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8836,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8838,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5812,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5813,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg1_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg2_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg3_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg4_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg5_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_t888_TouchScreenKeyboard_Open_m8839_Arg6_ParameterInfo,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5752,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5753,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5811,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5751,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5810,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5763,
	TouchScreenKeyboard_t888_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5762,
	Event_t734_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t734_CustomAttributesCacheGenerator_Event_Init_m8840,
	Event_t734_CustomAttributesCacheGenerator_Event_Cleanup_m8842,
	Event_t734_CustomAttributesCacheGenerator_Event_get_rawType_m5776,
	Event_t734_CustomAttributesCacheGenerator_Event_get_type_m3885,
	Event_t734_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8843,
	Event_t734_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8845,
	Event_t734_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8847,
	Event_t734_CustomAttributesCacheGenerator_Event_get_modifiers_m5772,
	Event_t734_CustomAttributesCacheGenerator_Event_get_character_m5774,
	Event_t734_CustomAttributesCacheGenerator_Event_get_commandName_m8848,
	Event_t734_CustomAttributesCacheGenerator_Event_get_keyCode_m5773,
	Event_t734_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8849,
	Event_t734_CustomAttributesCacheGenerator_Event_Use_m8851,
	Event_t734_CustomAttributesCacheGenerator_Event_PopEvent_m5777,
	EventModifiers_t2685_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t496_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t706_CustomAttributesCacheGenerator,
	Quaternion_t735_CustomAttributesCacheGenerator,
	Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8877,
	Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8880,
	Quaternion_t735_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8882,
	Matrix4x4_t1025_CustomAttributesCacheGenerator,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8898,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8900,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8902,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8905,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8917,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8920,
	Matrix4x4_t1025_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8921,
	Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8938,
	Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8941,
	Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8944,
	Bounds_t716_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8948,
	Vector4_t985_CustomAttributesCacheGenerator,
	Mathf_t678_CustomAttributesCacheGenerator_Mathf_t678_Mathf_SmoothDamp_m5835_Arg4_ParameterInfo,
	Mathf_t678_CustomAttributesCacheGenerator_Mathf_t678_Mathf_SmoothDamp_m5835_Arg5_ParameterInfo,
	DrivenTransformProperties_t2687_CustomAttributesCacheGenerator,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8979,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8980,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8981,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8982,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8983,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8984,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8985,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8986,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8987,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8988,
	RectTransform_t503_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8989,
	Resources_t738_CustomAttributesCacheGenerator_Resources_Load_m8995,
	TextAsset_t730_CustomAttributesCacheGenerator_TextAsset_get_text_m3868,
	SerializePrivateVariables_t2691_CustomAttributesCacheGenerator,
	Shader_t2692_CustomAttributesCacheGenerator_Shader_PropertyToID_m8998,
	Material_t482_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9001,
	Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m9003,
	Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m9005,
	Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m9007,
	Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m9008,
	Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9009,
	Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m9009_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9012,
	SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9015,
	SphericalHarmonicsL2_t2693_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9018,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5703,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5699,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5696,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5722,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5697,
	SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9028,
	SpriteRenderer_t612_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9029,
	DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5710,
	DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5709,
	DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5702,
	DataUtility_t2694_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9030,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9033,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9034,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3951,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9035_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9036,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9039,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3622,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9040,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7485,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7491,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3473,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9043_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3472,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9045_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9045_Arg3_ParameterInfo,
	WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_URLEncode_m9049_Arg1_ParameterInfo,
	WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_QPEncode_m9051_Arg1_ParameterInfo,
	WWWTranscoder_t2696_CustomAttributesCacheGenerator_WWWTranscoder_t2696_WWWTranscoder_SevenBitClean_m9054_Arg1_ParameterInfo,
	CacheIndex_t2697_CustomAttributesCacheGenerator,
	UnityString_t2698_CustomAttributesCacheGenerator_UnityString_t2698_UnityString_Format_m9056_Arg1_ParameterInfo,
	AsyncOperation_t2632_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9058,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3523,
	Application_t1462_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9065,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_isPlaying_m5815,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_isEditor_m5817,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3834,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_platform_m3537,
	Application_t1462_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4045,
	Application_t1462_CustomAttributesCacheGenerator_Application_t1462_Application_ExternalCall_m3835_Arg1_ParameterInfo,
	Application_t1462_CustomAttributesCacheGenerator_Application_t1462_Application_BuildInvocationForArguments_m9067_Arg1_ParameterInfo,
	Application_t1462_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9068,
	Application_t1462_CustomAttributesCacheGenerator_Application_OpenURL_m3728,
	Application_t1462_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9070,
	Application_t1462_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1462_CustomAttributesCacheGenerator_Application_t1462____persistentDataPath_PropertyInfo,
	Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5546,
	Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5785,
	Behaviour_t1035_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5547,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5599,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5598,
	Camera_t532_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4061,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_depth_m5511,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5612,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_eventMask_m9077,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9078,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9079,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9080,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9082,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9083,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9084,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9085,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9086,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9087,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_main_m3775,
	Camera_t532_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9088,
	Camera_t532_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9089,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9094,
	Camera_t532_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9096,
	CameraCallback_t2699_CustomAttributesCacheGenerator,
	Debug_t2700_CustomAttributesCacheGenerator_Debug_Internal_Log_m9097,
	Debug_t2700_CustomAttributesCacheGenerator_Debug_t2700_Debug_Internal_Log_m9097_Arg2_ParameterInfo,
	Debug_t2700_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9098,
	Debug_t2700_CustomAttributesCacheGenerator_Debug_t2700_Debug_Internal_LogException_m9098_Arg1_ParameterInfo,
	Debug_t2700_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3833,
	Display_t2703_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9123,
	Display_t2703_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9124,
	Display_t2703_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9125,
	Display_t2703_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9126,
	Display_t2703_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9127,
	Display_t2703_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9128,
	Display_t2703_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9129,
	Display_t2703_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9130,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3783,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3782,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9131,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9132,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9133,
	Input_t657_CustomAttributesCacheGenerator_Input_GetAxis_m4074,
	Input_t657_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5590,
	Input_t657_CustomAttributesCacheGenerator_Input_GetButtonDown_m5589,
	Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButton_m3981,
	Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3778,
	Input_t657_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3980,
	Input_t657_CustomAttributesCacheGenerator_Input_get_mousePosition_m3776,
	Input_t657_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5563,
	Input_t657_CustomAttributesCacheGenerator_Input_get_mousePresent_m5588,
	Input_t657_CustomAttributesCacheGenerator_Input_GetTouch_m3458,
	Input_t657_CustomAttributesCacheGenerator_Input_get_touchCount_m3457,
	Input_t657_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5814,
	Input_t657_CustomAttributesCacheGenerator_Input_get_compositionString_m5754,
	Input_t657_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9135,
	HideFlags_t2706_CustomAttributesCacheGenerator,
	Object_t653_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9137,
	Object_t653_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9139,
	Object_t653_CustomAttributesCacheGenerator_Object_Destroy_m9140,
	Object_t653_CustomAttributesCacheGenerator_Object_t653_Object_Destroy_m9140_Arg1_ParameterInfo,
	Object_t653_CustomAttributesCacheGenerator_Object_Destroy_m3668,
	Object_t653_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9141,
	Object_t653_CustomAttributesCacheGenerator_Object_t653_Object_DestroyImmediate_m9141_Arg1_ParameterInfo,
	Object_t653_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5816,
	Object_t653_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9142,
	Object_t653_CustomAttributesCacheGenerator_Object_get_name_m3525,
	Object_t653_CustomAttributesCacheGenerator_Object_set_name_m5877,
	Object_t653_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t653_CustomAttributesCacheGenerator_Object_set_hideFlags_m5788,
	Object_t653_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t653_CustomAttributesCacheGenerator_Object_Instantiate_m3909,
	Object_t653_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9148,
	Component_t712_CustomAttributesCacheGenerator_Component_get_transform_m3804,
	Component_t712_CustomAttributesCacheGenerator_Component_get_gameObject_m3524,
	Component_t712_CustomAttributesCacheGenerator_Component_GetComponent_m5923,
	Component_t712_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9150,
	Component_t712_CustomAttributesCacheGenerator_Component_GetComponent_m9959,
	Component_t712_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9151,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9153,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9154,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9963,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9155,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9156,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3807,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5790,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5791,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3724,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4059,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4077,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3976,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9157,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9157_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9157_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9158,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9159,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9160,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9160_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9165,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9166,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9167,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9168,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9169,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9170,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9171,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9172,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9173,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9174,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9175,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9176,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3910,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9177,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4053,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9178_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9179,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9180,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4058,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5789,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3911,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4057,
	Time_t2708_CustomAttributesCacheGenerator_Time_get_time_m3930,
	Time_t2708_CustomAttributesCacheGenerator_Time_get_deltaTime_m3952,
	Time_t2708_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5592,
	Time_t2708_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5624,
	Time_t2708_CustomAttributesCacheGenerator_Time_set_timeScale_m3729,
	Random_t2709_CustomAttributesCacheGenerator_Random_set_seed_m4004,
	Random_t2709_CustomAttributesCacheGenerator_Random_Range_m3950,
	Random_t2709_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9182,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9185,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7480,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_t2711_PlayerPrefs_GetString_m7480_Arg1_ParameterInfo,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3688,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3687,
	PlayerPrefs_t2711_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7483,
	LocalNotification_t2712_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9187,
	RemoteNotification_t2713_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9189,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9192,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9193,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9195,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9196,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9197,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9198,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9199,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9200,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9201,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9203,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9204,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9206,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9207,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9208,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9209,
	NotificationServices_t2715_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9210,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9228,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m9229_Arg3_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m9229_Arg4_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_Raycast_m3779,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m5676_Arg2_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_Raycast_m5676_Arg3_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m5614_Arg1_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m5614_Arg2_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m9230_Arg2_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_t2717_Physics_RaycastAll_m9230_Arg3_ParameterInfo,
	Physics_t2717_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9231,
	Collider_t715_CustomAttributesCacheGenerator_Collider_set_enabled_m3791,
	Collider_t715_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9232,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3982,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_IgnoreLayerCollision_m3982_Arg2_ParameterInfo,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9236,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_Raycast_m5677,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg2_ParameterInfo,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg3_ParameterInfo,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg4_ParameterInfo,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_t744_Physics2D_Raycast_m9237_Arg5_ParameterInfo,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5602,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9238,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3975,
	Physics2D_t744_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9239,
	Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4042,
	Collider2D_t578_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9241,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_set_clip_m3767,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m9257,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_Play_m9257_Arg0_ParameterInfo,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Play_m4038,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4056,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_Stop_m3768,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4039,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9258,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_t570_AudioSource_PlayOneShot_m9258_Arg1_ParameterInfo,
	AudioSource_t570_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3781,
	AnimationEvent_t2728_CustomAttributesCacheGenerator_AnimationEvent_t2728____data_PropertyInfo,
	AnimationCurve_t2732_CustomAttributesCacheGenerator,
	AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_t2732_AnimationCurve__ctor_m9284_Arg0_ParameterInfo,
	AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9286,
	AnimationCurve_t2732_CustomAttributesCacheGenerator_AnimationCurve_Init_m9288,
	AnimatorStateInfo_t2729_CustomAttributesCacheGenerator_AnimatorStateInfo_t2729____nameHash_PropertyInfo,
	Animator_t620_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5869,
	Animator_t620_CustomAttributesCacheGenerator_Animator_StringToHash_m9307,
	Animator_t620_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9308,
	Animator_t620_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9309,
	Animator_t620_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9310,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3773,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3774,
	CharacterInfo_t2738_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2738_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2738_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2738_CustomAttributesCacheGenerator_flipped,
	Font_t853_CustomAttributesCacheGenerator_Font_get_material_m5881,
	Font_t853_CustomAttributesCacheGenerator_Font_HasCharacter_m5775,
	Font_t853_CustomAttributesCacheGenerator_Font_get_dynamic_m5883,
	Font_t853_CustomAttributesCacheGenerator_Font_get_fontSize_m5884,
	FontTextureRebuildCallback_t2739_CustomAttributesCacheGenerator,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_Init_m9338,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9339,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9342,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5787,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9343,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9344,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9345,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9346,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9347,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9348,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5768,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9349,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9350,
	TextGenerator_t891_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5803,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5673,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5898,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3961,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9361,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4085,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5901,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5700,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5902,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5660,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5675,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5674,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5681,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5647,
	Canvas_t628_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5880,
	CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5861,
	CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9363,
	CanvasGroup_t1007_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5659,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9366,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5663,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5933,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5655,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9367,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9368,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5651,
	CanvasRenderer_t858_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5648,
	RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9370,
	RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9372,
	RectTransformUtility_t1009_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5662,
	Request_t2743_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2743_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2743_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2743_CustomAttributesCacheGenerator_Request_get_sourceId_m9377,
	Request_t2743_CustomAttributesCacheGenerator_Request_get_appId_m9378,
	Request_t2743_CustomAttributesCacheGenerator_Request_get_domain_m9379,
	Response_t2745_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2745_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2745_CustomAttributesCacheGenerator_Response_get_success_m9388,
	Response_t2745_CustomAttributesCacheGenerator_Response_set_success_m9389,
	Response_t2745_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9390,
	Response_t2745_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9391,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9396,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9397,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9398,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9399,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9400,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9401,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9402,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9403,
	CreateMatchRequest_t2748_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9404,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9407,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9408,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9409,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9410,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9411,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9412,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9413,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9414,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9415,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9416,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9417,
	CreateMatchResponse_t2749_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9418,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9422,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9423,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9424,
	JoinMatchRequest_t2750_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9425,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9428,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9429,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9430,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9431,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9432,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9433,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9434,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9435,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9436,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9437,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9438,
	JoinMatchResponse_t2751_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9439,
	DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9443,
	DestroyMatchRequest_t2752_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9444,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9447,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9448,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9449,
	DropConnectionRequest_t2753_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9450,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9453,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9454,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9455,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9456,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9457,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9458,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9459,
	ListMatchRequest_t2754_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9460,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9463,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9464,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9465,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9466,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9467,
	MatchDirectConnectInfo_t2755_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9468,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9472,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9473,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_name_m9474,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_name_m9475,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9476,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9477,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9478,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9479,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9480,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9481,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9482,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9483,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9484,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9485,
	MatchDesc_t2757_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9486,
	ListMatchResponse_t2759_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2759_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9490,
	ListMatchResponse_t2759_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9491,
	AppID_t2760_CustomAttributesCacheGenerator,
	SourceID_t2761_CustomAttributesCacheGenerator,
	NetworkID_t2762_CustomAttributesCacheGenerator,
	NodeID_t2763_CustomAttributesCacheGenerator,
	NetworkMatch_t2768_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9975,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9981,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9982,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9984,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2919_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9985,
	JsonArray_t2769_CustomAttributesCacheGenerator,
	JsonObject_t2770_CustomAttributesCacheGenerator,
	SimpleJson_t2773_CustomAttributesCacheGenerator,
	SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9536,
	SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9548,
	SimpleJson_t2773_CustomAttributesCacheGenerator_SimpleJson_t2773____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2771_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9989,
	PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9565,
	PocoJsonSerializerStrategy_t2772_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9566,
	ReflectionUtils_t2785_CustomAttributesCacheGenerator,
	ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetConstructorInfo_m9591_Arg1_ParameterInfo,
	ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetContructor_m9596_Arg1_ParameterInfo,
	ReflectionUtils_t2785_CustomAttributesCacheGenerator_ReflectionUtils_t2785_ReflectionUtils_GetConstructorByReflection_m9598_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2922_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2779_CustomAttributesCacheGenerator_ConstructorDelegate_t2779_ConstructorDelegate_Invoke_m9576_Arg0_ParameterInfo,
	ConstructorDelegate_t2779_CustomAttributesCacheGenerator_ConstructorDelegate_t2779_ConstructorDelegate_BeginInvoke_m9577_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2780_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2781_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2782_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2783_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2784_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2787_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1058_CustomAttributesCacheGenerator,
	RequireComponent_t1052_CustomAttributesCacheGenerator,
	WritableAttribute_t2793_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2794_CustomAttributesCacheGenerator,
	GUIStateObjects_t2805_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9631,
	Achievement_t2808_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2808_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2808_CustomAttributesCacheGenerator_Achievement_get_id_m9653,
	Achievement_t2808_CustomAttributesCacheGenerator_Achievement_set_id_m9654,
	Achievement_t2808_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9655,
	Achievement_t2808_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9656,
	AchievementDescription_t2809_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2809_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9663,
	AchievementDescription_t2809_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9664,
	Score_t2810_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2810_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2810_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9673,
	Score_t2810_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9674,
	Score_t2810_CustomAttributesCacheGenerator_Score_get_value_m9675,
	Score_t2810_CustomAttributesCacheGenerator_Score_set_value_m9676,
	Leaderboard_t2649_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2649_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2649_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2649_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_id_m9684,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_id_m9685,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9686,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9687,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_range_m9688,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_range_m9689,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9690,
	Leaderboard_t2649_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9691,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1061_CustomAttributesCacheGenerator,
	SpaceAttribute_t1059_CustomAttributesCacheGenerator,
	RangeAttribute_t1056_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1062_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1060_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9735,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9737,
	SharedBetweenAnimatorsAttribute_t2826_CustomAttributesCacheGenerator,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2833_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2837_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2837_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2837_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2837_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2837_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2839_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2842_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2842_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2843_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2844_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2845_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1050_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2847_CustomAttributesCacheGenerator,
};
