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
extern TypeInfo* InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t801_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3399);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t801 * tmp;
		tmp = (ExtensionAttribute_t801 *)il2cpp_codegen_object_new (ExtensionAttribute_t801_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4334(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2160 * tmp;
		tmp = (InternalsVisibleToAttribute_t2160 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2160_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7833(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2679_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2679_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_t897_LayerMask_GetMask_m8684_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void RuntimePlatform_t784_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void RuntimePlatform_t784_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Coroutine_t950_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8690_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MeshFilter_t790_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8764_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_enabled_m4008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_material_m3987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_material_m3989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_materials_m4260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_bounds_m4017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_get_width_m3647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_get_height_m3662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_get_dpi_m3769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Screen_t2699_CustomAttributesCacheGenerator_Screen_get_orientation_m3661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8791_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8792_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8792_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RenderTexture_t2700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RenderTexture_t2700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUILayer_t2703_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Gradient_t2706_CustomAttributesCacheGenerator_Gradient_Init_m8803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Gradient_t2706_CustomAttributesCacheGenerator_Gradient_Cleanup_m8804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_set_changed_m8816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_get_enabled_m8817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_set_enabled_m3680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Label_m3658_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Box_m3674_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Button_m3656_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_TextField_m3659_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_TextField_m4095_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Toggle_m3704_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_SelectionGrid_m3702_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_SelectionGrid_m8855_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginHorizontal_m3657_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginHorizontal_m8856_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginVertical_m3671_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginVertical_m8857_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginScrollView_m3679_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginScrollView_m8858_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_t702_GUILayoutUtility_GetRect_m8879_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_t702_GUILayoutUtility_GetRect_m8881_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIClip_t2722_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIClip_t2722_CustomAttributesCacheGenerator_GUIClip_Pop_m8949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISettings_t2723_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISettings_t2723_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISettings_t2723_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISettings_t2723_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISettings_t2723_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t807_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t807 * tmp;
		tmp = (ExecuteInEditMode_t807 *)il2cpp_codegen_object_new (ExecuteInEditMode_t807_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4474(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUISkin_t778_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUIContent_t780_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUIContent_t780_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void GUIContent_t780_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_Init_m9018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_Init_m9024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_left_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_left_m9026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_right_m9027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_right_m9028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_top_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_top_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9060_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Init_m9081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Cleanup_m9083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_rawType_m6025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_type_m4103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_modifiers_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_character_m6023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_commandName_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_get_keyCode_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_Use_m9092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Event_t781_CustomAttributesCacheGenerator_Event_PopEvent_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1103_il2cpp_TypeInfo_var;
void EventModifiers_t2732_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1103 * tmp;
		tmp = (FlagsAttribute_t1103 *)il2cpp_codegen_object_new (FlagsAttribute_t1103_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6199(tmp, NULL);
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
void Vector3_t534_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2834_il2cpp_TypeInfo_var;
void Color32_t753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4581);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2834 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2834 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2834_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9851(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1041_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Mathf_t725_CustomAttributesCacheGenerator_Mathf_t725_Mathf_SmoothDamp_m6081_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Mathf_t725_CustomAttributesCacheGenerator_Mathf_t725_Mathf_SmoothDamp_m6081_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1103_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2734_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1103 * tmp;
		tmp = (FlagsAttribute_t1103 *)il2cpp_codegen_object_new (FlagsAttribute_t1103_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6199(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void Resources_t788_CustomAttributesCacheGenerator_Resources_Load_m4129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextAsset_t777_CustomAttributesCacheGenerator_TextAsset_get_text_m4086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2738_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Shader_t2739_CustomAttributesCacheGenerator_Shader_PropertyToID_m9238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9249_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SpriteRenderer_t655_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void SpriteRenderer_t655_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9275_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9283_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9285_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9285_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_URLEncode_m9289_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_QPEncode_m9291_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_SevenBitClean_m9294_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void CacheIndex_t2744_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void UnityString_t2745_CustomAttributesCacheGenerator_UnityString_t2745_UnityString_Format_m9296_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AsyncOperation_t2680_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_isPlaying_m4126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_isEditor_m6063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_platform_m3755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_t1510_Application_ExternalCall_m4053_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_t1510_Application_BuildInvocationForArguments_m9307_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_get_unityVersion_m4130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_OpenURL_m3946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2962_il2cpp_TypeInfo_var;
void Application_t1510_CustomAttributesCacheGenerator_Application_t1510____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2962_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2962 * tmp;
		tmp = (SecurityCriticalAttribute_t2962 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2962_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10197(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_depth_m5762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_eventMask_m9317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_main_m3993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var;
void CameraCallback_t2746_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2193 * tmp;
		tmp = (EditorBrowsableAttribute_t2193 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8130(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Debug_t2747_CustomAttributesCacheGenerator_Debug_Internal_Log_m9337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void Debug_t2747_CustomAttributesCacheGenerator_Debug_t2747_Debug_Internal_Log_m9337_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Debug_t2747_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void Debug_t2747_CustomAttributesCacheGenerator_Debug_t2747_Debug_Internal_LogException_m9338_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Debug_t2747_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Display_t2750_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetAxis_m4316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetButtonDown_m5840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButton_m4209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_get_mousePosition_m3994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_get_mousePresent_m5839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_GetTouch_m3676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_get_touchCount_m3675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_get_compositionString_m6003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Input_t705_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1103_il2cpp_TypeInfo_var;
void HideFlags_t2753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1103 * tmp;
		tmp = (FlagsAttribute_t1103 *)il2cpp_codegen_object_new (FlagsAttribute_t1103_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6199(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_Destroy_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_t701_Object_Destroy_m9380_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_Destroy_m3886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_t701_Object_DestroyImmediate_m9381_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_get_name_m3743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_set_name_m6123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_set_hideFlags_m6036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_Instantiate_m4147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t701_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_get_transform_m4022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_get_gameObject_m3742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_GetComponent_m6169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_GetComponent_m10200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Component_t759_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9397_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9397_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4577);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2894 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2894 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2894_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10064(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2840_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9400_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4578);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2840 * tmp;
		tmp = (WritableAttribute_t2840 *)il2cpp_codegen_object_new (WritableAttribute_t2840_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9859(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9418_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Time_t2755_CustomAttributesCacheGenerator_Time_get_time_m4127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Time_t2755_CustomAttributesCacheGenerator_Time_get_deltaTime_m4133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Time_t2755_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Time_t2755_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Time_t2755_CustomAttributesCacheGenerator_Time_set_timeScale_m3947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Random_t2756_CustomAttributesCacheGenerator_Random_set_seed_m4233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Random_t2756_CustomAttributesCacheGenerator_Random_Range_m4180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Random_t2756_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetInt_m4289_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetFloat_m4287_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetString_m7721_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void LocalNotification_t2759_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RemoteNotification_t2760_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m9472_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m9472_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_Raycast_m3997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m5926_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m5926_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m5864_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m5864_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m9473_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m9473_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics_t2764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Collider_t762_CustomAttributesCacheGenerator_Collider_set_enabled_m4009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Collider_t762_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_IgnoreLayerCollision_m4210_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_Raycast_m5927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Collider2D_t697_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Collider2D_t697_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CircleCollider2D_t616_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CircleCollider2D_t616_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_set_clip_m3985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Play_m9500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_t607_AudioSource_Play_m9500_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Play_m4273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Stop_m3986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2891_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_t607_AudioSource_PlayOneShot_m9501_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4574);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2891 * tmp;
		tmp = (DefaultValueAttribute_t2891 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2891_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10059(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var;
void AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4579);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2892 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2892 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2892_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10063(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void AnimationEvent_t2775_CustomAttributesCacheGenerator_AnimationEvent_t2775____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2779_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_t2779_AnimationCurve__ctor_m9527_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_Init_m9531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2776_CustomAttributesCacheGenerator_AnimatorStateInfo_t2776____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Animator_t665_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Animator_t665_CustomAttributesCacheGenerator_Animator_StringToHash_m9550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Animator_t665_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Animator_t665_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Animator_t665_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void CharacterInfo_t2785_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void CharacterInfo_t2785_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void CharacterInfo_t2785_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t805_il2cpp_TypeInfo_var;
void CharacterInfo_t2785_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t805 * tmp;
		tmp = (ObsoleteAttribute_t805 *)il2cpp_codegen_object_new (ObsoleteAttribute_t805_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Font_t912_CustomAttributesCacheGenerator_Font_get_material_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Font_t912_CustomAttributesCacheGenerator_Font_HasCharacter_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Font_t912_CustomAttributesCacheGenerator_Font_get_dynamic_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Font_t912_CustomAttributesCacheGenerator_Font_get_fontSize_m6130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2193 * tmp;
		tmp = (EditorBrowsableAttribute_t2193 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8130(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_Init_m9581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void Canvas_t543_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2833_il2cpp_TypeInfo_var;
void RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4576);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2833 * tmp;
		tmp = (WrapperlessIcall_t2833 *)il2cpp_codegen_object_new (WrapperlessIcall_t2833_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_Request_get_sourceId_m9620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_Request_get_appId_m9621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2790_CustomAttributesCacheGenerator_Request_get_domain_m9622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_Response_get_success_m9631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_Response_set_success_m9632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2792_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_name_m9717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_name_m9718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2806_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2806_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2806_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2964_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2807_il2cpp_TypeInfo_var;
void AppID_t2807_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		AppID_t2807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4484);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2964 * tmp;
		tmp = (DefaultValueAttribute_t2964 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2964_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10215(tmp, Box(AppID_t2807_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2964_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2808_il2cpp_TypeInfo_var;
void SourceID_t2808_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		SourceID_t2808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4483);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2964 * tmp;
		tmp = (DefaultValueAttribute_t2964 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2964_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10215(tmp, Box(SourceID_t2808_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2964_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2809_il2cpp_TypeInfo_var;
void NetworkID_t2809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		NetworkID_t2809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4486);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2964 * tmp;
		tmp = (DefaultValueAttribute_t2964 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2964_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10215(tmp, Box(NetworkID_t2809_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2964_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2810_il2cpp_TypeInfo_var;
void NodeID_t2810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4583);
		NodeID_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4487);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2964 * tmp;
		tmp = (DefaultValueAttribute_t2964 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2964_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10215(tmp, Box(NodeID_t2810_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2815_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10216(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10222(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10223(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10225(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10226(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var;
void JsonArray_t2816_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2193 * tmp;
		tmp = (EditorBrowsableAttribute_t2193 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8130(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void JsonObject_t2817_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2193 * tmp;
		tmp = (EditorBrowsableAttribute_t2193 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8130(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
void SimpleJson_t2820_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var;
void SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2968 * tmp;
		tmp = (SuppressMessageAttribute_t2968 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10228(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10229(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var;
void SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2968 * tmp;
		tmp = (SuppressMessageAttribute_t2968 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10228(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var;
void SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_t2820____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2193 * tmp;
		tmp = (EditorBrowsableAttribute_t2193 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2193_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8130(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2818_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2818_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2968 * tmp;
		tmp = (SuppressMessageAttribute_t2968 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10228(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10229(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2968 * tmp;
		tmp = (SuppressMessageAttribute_t2968 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10228(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10229(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2968 * tmp;
		tmp = (SuppressMessageAttribute_t2968 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2968_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10228(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10229(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var;
void ReflectionUtils_t2832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2967 * tmp;
		tmp = (GeneratedCodeAttribute_t2967 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2967_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10227(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetConstructorInfo_m9834_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetContructor_m9839_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetConstructorByReflection_m9841_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2969_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2826_CustomAttributesCacheGenerator_ConstructorDelegate_t2826_ConstructorDelegate_Invoke_m9819_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t802_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2826_CustomAttributesCacheGenerator_ConstructorDelegate_t2826_ConstructorDelegate_BeginInvoke_m9820_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t802 * tmp;
		tmp = (ParamArrayAttribute_t802 *)il2cpp_codegen_object_new (ParamArrayAttribute_t802_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2827_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2828_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2829_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2830_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2831_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void RequireComponent_t808_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void WritableAttribute_t2840_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2841_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void GUIStateObjects_t2852_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_Achievement_get_id_m9896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_Achievement_set_id_m9897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2855_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2856_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2856_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2856_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_Score_get_value_m9918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2857_CustomAttributesCacheGenerator_Score_set_value_m9919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_id_m9927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_id_m9928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_range_m9931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_range_m9932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void TooltipAttribute_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void SpaceAttribute_t1113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void RangeAttribute_t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4580);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2961 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2961 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2961_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10193(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2873_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void ArgumentCache_t2880_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void PersistentCall_t2884_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void PersistentCall_t2884_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void PersistentCall_t2884_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void PersistentCall_t2884_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void PersistentCall_t2884_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2886_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var;
void UnityEventBase_t2889_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1106 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1106 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1106_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6218(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t803_il2cpp_TypeInfo_var;
void UnityEventBase_t2889_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t803 * tmp;
		tmp = (SerializeField_t803 *)il2cpp_codegen_object_new (SerializeField_t803_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1105_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2890_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1948);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1105 * tmp;
		tmp = (AddComponentMenu_t1105 *)il2cpp_codegen_object_new (AddComponentMenu_t1105_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6217(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2891_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2892_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7993(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7992(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t806_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t806 * tmp;
		tmp = (AttributeUsageAttribute_t806 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t806_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4471(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[827] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2679_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8672,
	AssetBundleCreateRequest_t2679_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8673,
	AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8677,
	AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8678,
	AssetBundle_t2681_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8679,
	LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8682,
	LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8683,
	LayerMask_t897_CustomAttributesCacheGenerator_LayerMask_t897_LayerMask_GetMask_m8684_Arg0_ParameterInfo,
	RuntimePlatform_t784_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t784_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t784_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4324,
	SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8685,
	SystemInfo_t2685_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7768,
	Coroutine_t950_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8688,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8690,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8690_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8691,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8693,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8698,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8699,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8700,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8701,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8702,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8703,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8704,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8705,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8706,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8707,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8708,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8709,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8710,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8711,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8712,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8713,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8714,
	GameCenterPlatform_t799_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8716,
	GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8760,
	GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8761,
	GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8762,
	GcLeaderboard_t2697_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8763,
	MeshFilter_t790_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4174,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8764,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8764_Arg0_ParameterInfo,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4326,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4328,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4329,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4327,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_enabled_m4008,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_material_m3987,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_material_m3989,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_set_materials_m4260,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_bounds_m4017,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5858,
	Renderer_t596_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5859,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_get_width_m3647,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_get_height_m3662,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_get_dpi_m3769,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4082,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4083,
	Screen_t2699_CustomAttributesCacheGenerator_Screen_get_orientation_m3661,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8786,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8787,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8791,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8791_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5900,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5974,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8792,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8792_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8792_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3687,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3686,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8793,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3688,
	RenderTexture_t2700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8794,
	RenderTexture_t2700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8795,
	GUILayer_t2703_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8799,
	Gradient_t2706_CustomAttributesCacheGenerator_Gradient_Init_m8803,
	Gradient_t2706_CustomAttributesCacheGenerator_Gradient_Cleanup_m8804,
	GUI_t703_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t703_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t703_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8811,
	GUI_t703_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8812,
	GUI_t703_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8813,
	GUI_t703_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8814,
	GUI_t703_CustomAttributesCacheGenerator_GUI_set_changed_m8816,
	GUI_t703_CustomAttributesCacheGenerator_GUI_get_enabled_m8817,
	GUI_t703_CustomAttributesCacheGenerator_GUI_set_enabled_m3680,
	GUI_t703_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8819,
	GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8822,
	GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8825,
	GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8832,
	GUI_t703_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8839,
	GUI_t703_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8841,
	GUI_t703_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8848,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Label_m3658_Arg1_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Box_m3674_Arg1_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Button_m3656_Arg1_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_TextField_m3659_Arg1_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_TextField_m4095_Arg2_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_Toggle_m3704_Arg2_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_SelectionGrid_m3702_Arg3_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_SelectionGrid_m8855_Arg4_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginHorizontal_m3657_Arg0_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginHorizontal_m8856_Arg2_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginVertical_m3671_Arg0_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginVertical_m8857_Arg2_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginScrollView_m3679_Arg1_ParameterInfo,
	GUILayout_t2709_CustomAttributesCacheGenerator_GUILayout_t2709_GUILayout_BeginScrollView_m8858_Arg6_ParameterInfo,
	GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8873,
	GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8875,
	GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8876,
	GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_t702_GUILayoutUtility_GetRect_m8879_Arg2_ParameterInfo,
	GUILayoutUtility_t702_CustomAttributesCacheGenerator_GUILayoutUtility_t702_GUILayoutUtility_GetRect_m8881_Arg3_ParameterInfo,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8923,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8927,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8931,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8932,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8933,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8934,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8935,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8936,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8938,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8940,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8944,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8945,
	GUIUtility_t2721_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8946,
	GUIClip_t2722_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8948,
	GUIClip_t2722_CustomAttributesCacheGenerator_GUIClip_Pop_m8949,
	GUISettings_t2723_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2723_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2723_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2723_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2723_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t778_CustomAttributesCacheGenerator,
	GUISkin_t778_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t778_CustomAttributesCacheGenerator_m_box,
	GUISkin_t778_CustomAttributesCacheGenerator_m_button,
	GUISkin_t778_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t778_CustomAttributesCacheGenerator_m_label,
	GUISkin_t778_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t778_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t778_CustomAttributesCacheGenerator_m_window,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t778_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t778_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t778_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t778_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t778_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t780_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t780_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t780_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_Init_m9018,
	GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9019,
	GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9020,
	GUIStyleState_t723_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9021,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_Init_m9024,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9025,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_left_m6162,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_left_m9026,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_right_m9027,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_right_m9028,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_top_m6163,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_top_m9029,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4106,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9030,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6156,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6157,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9032,
	RectOffset_t698_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9034,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9038,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9039,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9040,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9041,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9042,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9043,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9045,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9046,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9047,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3648,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9048,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3649,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9049,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9050,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9051,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3653,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9052,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3652,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9053,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3749,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3750,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9056,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9059,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9060_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9062,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9063,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9067,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9069,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9071,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9074,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9077,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9079,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6059,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6060,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg1_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg2_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg3_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg4_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg5_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_t945_TouchScreenKeyboard_Open_m9080_Arg6_ParameterInfo,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6001,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6002,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6058,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6000,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6057,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6012,
	TouchScreenKeyboard_t945_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6011,
	Event_t781_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t781_CustomAttributesCacheGenerator_Event_Init_m9081,
	Event_t781_CustomAttributesCacheGenerator_Event_Cleanup_m9083,
	Event_t781_CustomAttributesCacheGenerator_Event_get_rawType_m6025,
	Event_t781_CustomAttributesCacheGenerator_Event_get_type_m4103,
	Event_t781_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9084,
	Event_t781_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9086,
	Event_t781_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9088,
	Event_t781_CustomAttributesCacheGenerator_Event_get_modifiers_m6021,
	Event_t781_CustomAttributesCacheGenerator_Event_get_character_m6023,
	Event_t781_CustomAttributesCacheGenerator_Event_get_commandName_m9089,
	Event_t781_CustomAttributesCacheGenerator_Event_get_keyCode_m6022,
	Event_t781_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9090,
	Event_t781_CustomAttributesCacheGenerator_Event_Use_m9092,
	Event_t781_CustomAttributesCacheGenerator_Event_PopEvent_m6026,
	EventModifiers_t2732_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t534_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t753_CustomAttributesCacheGenerator,
	Quaternion_t786_CustomAttributesCacheGenerator,
	Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9118,
	Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9121,
	Quaternion_t786_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9123,
	Matrix4x4_t1081_CustomAttributesCacheGenerator,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9139,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9141,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9143,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9146,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9158,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9161,
	Matrix4x4_t1081_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9162,
	Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9179,
	Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9182,
	Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9185,
	Bounds_t763_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9189,
	Vector4_t1041_CustomAttributesCacheGenerator,
	Mathf_t725_CustomAttributesCacheGenerator_Mathf_t725_Mathf_SmoothDamp_m6081_Arg4_ParameterInfo,
	Mathf_t725_CustomAttributesCacheGenerator_Mathf_t725_Mathf_SmoothDamp_m6081_Arg5_ParameterInfo,
	DrivenTransformProperties_t2734_CustomAttributesCacheGenerator,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9220,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9221,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9222,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9223,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9224,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9225,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9226,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9227,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9228,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9229,
	RectTransform_t541_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9230,
	Resources_t788_CustomAttributesCacheGenerator_Resources_Load_m4129,
	TextAsset_t777_CustomAttributesCacheGenerator_TextAsset_get_text_m4086,
	SerializePrivateVariables_t2738_CustomAttributesCacheGenerator,
	Shader_t2739_CustomAttributesCacheGenerator_Shader_PropertyToID_m9238,
	Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9241,
	Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9243,
	Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9245,
	Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9247,
	Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9248,
	Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9249,
	Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9249_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9252,
	SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9255,
	SphericalHarmonicsL2_t2740_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9258,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5953,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5949,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5946,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5971,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5947,
	SpriteRenderer_t655_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9268,
	SpriteRenderer_t655_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9269,
	DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5959,
	DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5958,
	DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5952,
	DataUtility_t2741_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9270,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9273,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9274,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4181,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9275_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9276,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9279,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3840,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9280,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7726,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7732,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3691,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9283_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3690,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9285_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9285_Arg3_ParameterInfo,
	WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_URLEncode_m9289_Arg1_ParameterInfo,
	WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_QPEncode_m9291_Arg1_ParameterInfo,
	WWWTranscoder_t2743_CustomAttributesCacheGenerator_WWWTranscoder_t2743_WWWTranscoder_SevenBitClean_m9294_Arg1_ParameterInfo,
	CacheIndex_t2744_CustomAttributesCacheGenerator,
	UnityString_t2745_CustomAttributesCacheGenerator_UnityString_t2745_UnityString_Format_m9296_Arg1_ParameterInfo,
	AsyncOperation_t2680_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9298,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3741,
	Application_t1510_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9305,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_isPlaying_m4126,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_isEditor_m6063,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4052,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_platform_m3755,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7766,
	Application_t1510_CustomAttributesCacheGenerator_Application_t1510_Application_ExternalCall_m4053_Arg1_ParameterInfo,
	Application_t1510_CustomAttributesCacheGenerator_Application_t1510_Application_BuildInvocationForArguments_m9307_Arg1_ParameterInfo,
	Application_t1510_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9308,
	Application_t1510_CustomAttributesCacheGenerator_Application_get_unityVersion_m4130,
	Application_t1510_CustomAttributesCacheGenerator_Application_OpenURL_m3946,
	Application_t1510_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9310,
	Application_t1510_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1510_CustomAttributesCacheGenerator_Application_t1510____persistentDataPath_PropertyInfo,
	Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5796,
	Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6033,
	Behaviour_t1091_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5797,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5850,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5849,
	Camera_t544_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4302,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_depth_m5762,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5862,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_eventMask_m9317,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9318,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9319,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9320,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9322,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9323,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9324,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9325,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9326,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9327,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_main_m3993,
	Camera_t544_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9328,
	Camera_t544_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9329,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9334,
	Camera_t544_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9336,
	CameraCallback_t2746_CustomAttributesCacheGenerator,
	Debug_t2747_CustomAttributesCacheGenerator_Debug_Internal_Log_m9337,
	Debug_t2747_CustomAttributesCacheGenerator_Debug_t2747_Debug_Internal_Log_m9337_Arg2_ParameterInfo,
	Debug_t2747_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9338,
	Debug_t2747_CustomAttributesCacheGenerator_Debug_t2747_Debug_Internal_LogException_m9338_Arg1_ParameterInfo,
	Debug_t2747_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4051,
	Display_t2750_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9363,
	Display_t2750_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9364,
	Display_t2750_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9365,
	Display_t2750_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9366,
	Display_t2750_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9367,
	Display_t2750_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9368,
	Display_t2750_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9369,
	Display_t2750_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9370,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4001,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4000,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9371,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9372,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9373,
	Input_t705_CustomAttributesCacheGenerator_Input_GetAxis_m4316,
	Input_t705_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5841,
	Input_t705_CustomAttributesCacheGenerator_Input_GetButtonDown_m5840,
	Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButton_m4209,
	Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3996,
	Input_t705_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4208,
	Input_t705_CustomAttributesCacheGenerator_Input_get_mousePosition_m3994,
	Input_t705_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5814,
	Input_t705_CustomAttributesCacheGenerator_Input_get_mousePresent_m5839,
	Input_t705_CustomAttributesCacheGenerator_Input_GetTouch_m3676,
	Input_t705_CustomAttributesCacheGenerator_Input_get_touchCount_m3675,
	Input_t705_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6061,
	Input_t705_CustomAttributesCacheGenerator_Input_get_compositionString_m6003,
	Input_t705_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9375,
	HideFlags_t2753_CustomAttributesCacheGenerator,
	Object_t701_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9377,
	Object_t701_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9379,
	Object_t701_CustomAttributesCacheGenerator_Object_Destroy_m9380,
	Object_t701_CustomAttributesCacheGenerator_Object_t701_Object_Destroy_m9380_Arg1_ParameterInfo,
	Object_t701_CustomAttributesCacheGenerator_Object_Destroy_m3886,
	Object_t701_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9381,
	Object_t701_CustomAttributesCacheGenerator_Object_t701_Object_DestroyImmediate_m9381_Arg1_ParameterInfo,
	Object_t701_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6062,
	Object_t701_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9382,
	Object_t701_CustomAttributesCacheGenerator_Object_get_name_m3743,
	Object_t701_CustomAttributesCacheGenerator_Object_set_name_m6123,
	Object_t701_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t701_CustomAttributesCacheGenerator_Object_set_hideFlags_m6036,
	Object_t701_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t701_CustomAttributesCacheGenerator_Object_Instantiate_m4147,
	Object_t701_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9388,
	Component_t759_CustomAttributesCacheGenerator_Component_get_transform_m4022,
	Component_t759_CustomAttributesCacheGenerator_Component_get_gameObject_m3742,
	Component_t759_CustomAttributesCacheGenerator_Component_GetComponent_m6169,
	Component_t759_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9390,
	Component_t759_CustomAttributesCacheGenerator_Component_GetComponent_m10200,
	Component_t759_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9391,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9393,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9394,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10204,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9395,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9396,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4025,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6038,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6039,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3942,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5798,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4319,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4205,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9397,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9397_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9397_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9398,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9399,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9400,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9400_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9405,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9406,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9407,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9408,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9409,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9410,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9411,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9412,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9413,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9414,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9415,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9416,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4148,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9417,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4293,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9418_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9419,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9420,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9421,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4297,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6037,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4149,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4296,
	Time_t2755_CustomAttributesCacheGenerator_Time_get_time_m4127,
	Time_t2755_CustomAttributesCacheGenerator_Time_get_deltaTime_m4133,
	Time_t2755_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5843,
	Time_t2755_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5874,
	Time_t2755_CustomAttributesCacheGenerator_Time_set_timeScale_m3947,
	Random_t2756_CustomAttributesCacheGenerator_Random_set_seed_m4233,
	Random_t2756_CustomAttributesCacheGenerator_Random_Range_m4180,
	Random_t2756_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9423,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9426,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9427,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9428,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4289,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetInt_m4289_Arg1_ParameterInfo,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4287,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetFloat_m4287_Arg1_ParameterInfo,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7721,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_t2758_PlayerPrefs_GetString_m7721_Arg1_ParameterInfo,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3906,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3905,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4285,
	PlayerPrefs_t2758_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7724,
	LocalNotification_t2759_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9430,
	RemoteNotification_t2760_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9432,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9435,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9436,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9438,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9439,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9440,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9441,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9442,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9443,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9444,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9446,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9447,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9449,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9450,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9451,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9452,
	NotificationServices_t2762_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9453,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9471,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m9472_Arg3_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m9472_Arg4_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_Raycast_m3997,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m5926_Arg2_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_Raycast_m5926_Arg3_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m5864_Arg1_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m5864_Arg2_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m9473_Arg2_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_t2764_Physics_RaycastAll_m9473_Arg3_ParameterInfo,
	Physics_t2764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9474,
	Collider_t762_CustomAttributesCacheGenerator_Collider_set_enabled_m4009,
	Collider_t762_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9475,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4210,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_IgnoreLayerCollision_m4210_Arg2_ParameterInfo,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9479,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_Raycast_m5927,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg2_ParameterInfo,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg3_ParameterInfo,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg4_ParameterInfo,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_t794_Physics2D_Raycast_m9480_Arg5_ParameterInfo,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5853,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9481,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4203,
	Physics2D_t794_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9482,
	Collider2D_t697_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4280,
	Collider2D_t697_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9484,
	CircleCollider2D_t616_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4279,
	CircleCollider2D_t616_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4278,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_set_clip_m3985,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Play_m9500,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_t607_AudioSource_Play_m9500_Arg0_ParameterInfo,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Play_m4273,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4295,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_Stop_m3986,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4274,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9501,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_t607_AudioSource_PlayOneShot_m9501_Arg1_ParameterInfo,
	AudioSource_t607_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3999,
	AnimationEvent_t2775_CustomAttributesCacheGenerator_AnimationEvent_t2775____data_PropertyInfo,
	AnimationCurve_t2779_CustomAttributesCacheGenerator,
	AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_t2779_AnimationCurve__ctor_m9527_Arg0_ParameterInfo,
	AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9529,
	AnimationCurve_t2779_CustomAttributesCacheGenerator_AnimationCurve_Init_m9531,
	AnimatorStateInfo_t2776_CustomAttributesCacheGenerator_AnimatorStateInfo_t2776____nameHash_PropertyInfo,
	Animator_t665_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6115,
	Animator_t665_CustomAttributesCacheGenerator_Animator_StringToHash_m9550,
	Animator_t665_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9551,
	Animator_t665_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9552,
	Animator_t665_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9553,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3991,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3992,
	CharacterInfo_t2785_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2785_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2785_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2785_CustomAttributesCacheGenerator_flipped,
	Font_t912_CustomAttributesCacheGenerator_Font_get_material_m6127,
	Font_t912_CustomAttributesCacheGenerator_Font_HasCharacter_m6024,
	Font_t912_CustomAttributesCacheGenerator_Font_get_dynamic_m6129,
	Font_t912_CustomAttributesCacheGenerator_Font_get_fontSize_m6130,
	FontTextureRebuildCallback_t2786_CustomAttributesCacheGenerator,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_Init_m9581,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9582,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9585,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6035,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9586,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9587,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9588,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9589,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9590,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9591,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6017,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9592,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9593,
	TextGenerator_t948_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6050,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5923,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6144,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4189,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9604,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4331,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6147,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5950,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6148,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5910,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5925,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5924,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5931,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5897,
	Canvas_t543_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6126,
	CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6107,
	CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9606,
	CanvasGroup_t1063_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5909,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9609,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5913,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6179,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5905,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9610,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9611,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5901,
	CanvasRenderer_t917_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5898,
	RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9613,
	RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9615,
	RectTransformUtility_t1065_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5912,
	Request_t2790_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2790_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2790_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2790_CustomAttributesCacheGenerator_Request_get_sourceId_m9620,
	Request_t2790_CustomAttributesCacheGenerator_Request_get_appId_m9621,
	Request_t2790_CustomAttributesCacheGenerator_Request_get_domain_m9622,
	Response_t2792_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2792_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2792_CustomAttributesCacheGenerator_Response_get_success_m9631,
	Response_t2792_CustomAttributesCacheGenerator_Response_set_success_m9632,
	Response_t2792_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9633,
	Response_t2792_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9634,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9639,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9640,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9641,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9642,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9643,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9644,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9645,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9646,
	CreateMatchRequest_t2795_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9647,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9650,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9651,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9652,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9653,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9654,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9655,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9656,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9657,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9658,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9659,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9660,
	CreateMatchResponse_t2796_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9661,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9665,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9666,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9667,
	JoinMatchRequest_t2797_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9668,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9671,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9672,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9673,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9674,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9675,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9676,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9677,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9678,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9679,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9680,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9681,
	JoinMatchResponse_t2798_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9682,
	DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9686,
	DestroyMatchRequest_t2799_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9687,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9690,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9691,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9692,
	DropConnectionRequest_t2800_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9693,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9696,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9697,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9698,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9699,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9700,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9701,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9702,
	ListMatchRequest_t2801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9703,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9706,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9707,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9708,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9709,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9710,
	MatchDirectConnectInfo_t2802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9711,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9715,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9716,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_name_m9717,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_name_m9718,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9719,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9720,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9721,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9722,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9723,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9724,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9725,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9726,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9727,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9728,
	MatchDesc_t2804_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9729,
	ListMatchResponse_t2806_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2806_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9733,
	ListMatchResponse_t2806_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9734,
	AppID_t2807_CustomAttributesCacheGenerator,
	SourceID_t2808_CustomAttributesCacheGenerator,
	NetworkID_t2809_CustomAttributesCacheGenerator,
	NodeID_t2810_CustomAttributesCacheGenerator,
	NetworkMatch_t2815_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10216,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10222,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10223,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10225,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2966_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10226,
	JsonArray_t2816_CustomAttributesCacheGenerator,
	JsonObject_t2817_CustomAttributesCacheGenerator,
	SimpleJson_t2820_CustomAttributesCacheGenerator,
	SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9779,
	SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9791,
	SimpleJson_t2820_CustomAttributesCacheGenerator_SimpleJson_t2820____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2818_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2818_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10230,
	PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9808,
	PocoJsonSerializerStrategy_t2819_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9809,
	ReflectionUtils_t2832_CustomAttributesCacheGenerator,
	ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetConstructorInfo_m9834_Arg1_ParameterInfo,
	ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetContructor_m9839_Arg1_ParameterInfo,
	ReflectionUtils_t2832_CustomAttributesCacheGenerator_ReflectionUtils_t2832_ReflectionUtils_GetConstructorByReflection_m9841_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2969_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2826_CustomAttributesCacheGenerator_ConstructorDelegate_t2826_ConstructorDelegate_Invoke_m9819_Arg0_ParameterInfo,
	ConstructorDelegate_t2826_CustomAttributesCacheGenerator_ConstructorDelegate_t2826_ConstructorDelegate_BeginInvoke_m9820_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2827_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2828_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2829_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2830_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2831_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2834_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1112_CustomAttributesCacheGenerator,
	RequireComponent_t808_CustomAttributesCacheGenerator,
	WritableAttribute_t2840_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2841_CustomAttributesCacheGenerator,
	GUIStateObjects_t2852_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9874,
	Achievement_t2855_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2855_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2855_CustomAttributesCacheGenerator_Achievement_get_id_m9896,
	Achievement_t2855_CustomAttributesCacheGenerator_Achievement_set_id_m9897,
	Achievement_t2855_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9898,
	Achievement_t2855_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9899,
	AchievementDescription_t2856_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2856_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9906,
	AchievementDescription_t2856_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9907,
	Score_t2857_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2857_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2857_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9916,
	Score_t2857_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9917,
	Score_t2857_CustomAttributesCacheGenerator_Score_get_value_m9918,
	Score_t2857_CustomAttributesCacheGenerator_Score_set_value_m9919,
	Leaderboard_t2696_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2696_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2696_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2696_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_id_m9927,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_id_m9928,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9929,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9930,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_range_m9931,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_range_m9932,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9933,
	Leaderboard_t2696_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9934,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1115_CustomAttributesCacheGenerator,
	SpaceAttribute_t1113_CustomAttributesCacheGenerator,
	RangeAttribute_t1111_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1116_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1114_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9978,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9980,
	SharedBetweenAnimatorsAttribute_t2873_CustomAttributesCacheGenerator,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2880_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2884_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2884_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2884_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2884_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2884_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2886_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2889_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2889_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2890_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2891_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2892_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1106_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2894_CustomAttributesCacheGenerator,
};
