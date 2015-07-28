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
extern TypeInfo* InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t741_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3267);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t741 * tmp;
		tmp = (ExtensionAttribute_t741 *)il2cpp_codegen_object_new (ExtensionAttribute_t741_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4020(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2103 * tmp;
		tmp = (InternalsVisibleToAttribute_t2103 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2103_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7526(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2622_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2622_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_t830_LayerMask_GetMask_m8377_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void RuntimePlatform_t2628_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void RuntimePlatform_t2628_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Coroutine_t885_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8383_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MeshFilter_t732_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Mesh_t482_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void Mesh_t482_CustomAttributesCacheGenerator_Mesh_t482_Mesh_Internal_Create_m8457_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Mesh_t482_CustomAttributesCacheGenerator_Mesh_set_vertices_m3878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Mesh_t482_CustomAttributesCacheGenerator_Mesh_set_triangles_m3879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_set_enabled_m3728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_material_m3707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_set_material_m3709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_bounds_m3737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_get_width_m3367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_get_height_m3382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_get_dpi_m3489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Screen_t2643_CustomAttributesCacheGenerator_Screen_get_orientation_m3381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8484_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8485_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8485_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RenderTexture_t2644_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RenderTexture_t2644_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUILayer_t2647_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Gradient_t2650_CustomAttributesCacheGenerator_Gradient_Init_m8496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Gradient_t2650_CustomAttributesCacheGenerator_Gradient_Cleanup_m8497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_set_changed_m8509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_get_enabled_m8510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_set_enabled_m3400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Label_m3378_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Box_m3394_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Button_m3376_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_TextField_m3379_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_TextField_m3815_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Toggle_m3424_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_SelectionGrid_m3422_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_SelectionGrid_m8548_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginHorizontal_m3377_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginHorizontal_m8549_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginVertical_m3391_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginVertical_m8550_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginScrollView_m3399_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginScrollView_m8551_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_t646_GUILayoutUtility_GetRect_m8572_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_t646_GUILayoutUtility_GetRect_m8574_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIClip_t2666_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIClip_t2666_CustomAttributesCacheGenerator_GUIClip_Pop_m8642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISettings_t2667_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISettings_t2667_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISettings_t2667_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISettings_t2667_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISettings_t2667_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1048_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1048 * tmp;
		tmp = (ExecuteInEditMode_t1048 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1048_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5940(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUISkin_t723_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUIContent_t725_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUIContent_t725_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void GUIContent_t725_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_Init_m8711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_Init_m8717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_left_m5848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_left_m8719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_right_m8720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_right_m8721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_top_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_top_m8722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8753_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Init_m8774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Cleanup_m8776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_rawType_m5708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_type_m3823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_modifiers_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_character_m5706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_commandName_m8782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_get_keyCode_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_Use_m8785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Event_t726_CustomAttributesCacheGenerator_Event_PopEvent_m5709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1038_il2cpp_TypeInfo_var;
void EventModifiers_t2676_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1808);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1038 * tmp;
		tmp = (FlagsAttribute_t1038 *)il2cpp_codegen_object_new (FlagsAttribute_t1038_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5885(tmp, NULL);
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
void Vector3_t494_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2778_il2cpp_TypeInfo_var;
void Color32_t698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2778 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2778 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2778_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9539(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t977_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Mathf_t670_CustomAttributesCacheGenerator_Mathf_t670_Mathf_SmoothDamp_m5767_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Mathf_t670_CustomAttributesCacheGenerator_Mathf_t670_Mathf_SmoothDamp_m5767_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1038_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2678_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1808);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1038 * tmp;
		tmp = (FlagsAttribute_t1038 *)il2cpp_codegen_object_new (FlagsAttribute_t1038_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5885(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void Resources_t730_CustomAttributesCacheGenerator_Resources_Load_m8929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextAsset_t722_CustomAttributesCacheGenerator_TextAsset_get_text_m3806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Shader_t2683_CustomAttributesCacheGenerator_Shader_PropertyToID_m8932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_SetTexture_m8934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_GetTexture_m8936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_SetFloat_m8938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_HasProperty_m8939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m8940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void Material_t483_CustomAttributesCacheGenerator_Material_t483_Material_Internal_CreateWithMaterial_m8940_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m8943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m8949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_rect_m5635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_texture_m5628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_border_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SpriteRenderer_t555_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m8959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void SpriteRenderer_t555_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m8960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m8961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m8964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m8965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m8966_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m8967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m8970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m8971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m8974_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m8976_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m8976_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_URLEncode_m8980_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_QPEncode_m8982_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_SevenBitClean_m8985_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void CacheIndex_t2688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void UnityString_t2689_CustomAttributesCacheGenerator_UnityString_t2689_UnityString_Format_m8987_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AsyncOperation_t2623_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m8996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_isPlaying_m5747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_isEditor_m5749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_platform_m3475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_t1453_Application_ExternalCall_m3773_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_t1453_Application_BuildInvocationForArguments_m8998_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m8999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_OpenURL_m3666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2906_il2cpp_TypeInfo_var;
void Application_t1453_CustomAttributesCacheGenerator_Application_t1453____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2906_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2906 * tmp;
		tmp = (SecurityCriticalAttribute_t2906 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2906_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9887(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_depth_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_eventMask_m9008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m9016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_main_m3713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var;
void CameraCallback_t2690_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2136 * tmp;
		tmp = (EditorBrowsableAttribute_t2136 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7823(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Debug_t2691_CustomAttributesCacheGenerator_Debug_Internal_Log_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void Debug_t2691_CustomAttributesCacheGenerator_Debug_t2691_Debug_Internal_Log_m9029_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Debug_t2691_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void Debug_t2691_CustomAttributesCacheGenerator_Debug_t2691_Debug_Internal_LogException_m9030_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Debug_t2691_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Display_t2694_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetAxis_m4006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetButtonDown_m5520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButton_m3919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_get_mousePosition_m3714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_get_mousePresent_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_GetTouch_m3396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_get_touchCount_m3395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_get_compositionString_m5686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Input_t649_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1038_il2cpp_TypeInfo_var;
void HideFlags_t2697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1038_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1808);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1038 * tmp;
		tmp = (FlagsAttribute_t1038 *)il2cpp_codegen_object_new (FlagsAttribute_t1038_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5885(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_Destroy_m9071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_t645_Object_Destroy_m9071_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_Destroy_m3606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_t645_Object_DestroyImmediate_m9072_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_get_name_m3463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_set_name_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_set_hideFlags_m5720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_Instantiate_m3847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void Object_t645_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_get_transform_m3742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_get_gameObject_m3462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_GetComponent_m5855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_GetComponent_m9889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Component_t704_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9088_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9088_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2838 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2838 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2838_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9752(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2784_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9091_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2784 * tmp;
		tmp = (WritableAttribute_t2784 *)il2cpp_codegen_object_new (WritableAttribute_t2784_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9547(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m3984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9109_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m3989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m3988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Time_t2699_CustomAttributesCacheGenerator_Time_get_time_m3869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Time_t2699_CustomAttributesCacheGenerator_Time_get_deltaTime_m3891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Time_t2699_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Time_t2699_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Time_t2699_CustomAttributesCacheGenerator_Time_set_timeScale_m3667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Random_t2700_CustomAttributesCacheGenerator_Random_set_seed_m3941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Random_t2700_CustomAttributesCacheGenerator_Random_Range_m3889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Random_t2700_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_t2702_PlayerPrefs_GetString_m7414_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void LocalNotification_t2703_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RemoteNotification_t2704_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m9160_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m9160_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_Raycast_m3717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m5608_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m5608_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m5545_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m5545_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m9161_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m9161_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics_t2708_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Collider_t707_CustomAttributesCacheGenerator_Collider_set_enabled_m3729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Collider_t707_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_IgnoreLayerCollision_m3901_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_Raycast_m5609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Collider2D_t570_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Collider2D_t570_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_set_clip_m3705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Play_m9188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_t562_AudioSource_Play_m9188_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Play_m3971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Stop_m3706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_t562_AudioSource_PlayOneShot_m9189_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2835 * tmp;
		tmp = (DefaultValueAttribute_t2835 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2835_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9747(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var;
void AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2836 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2836 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2836_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9751(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void AnimationEvent_t2719_CustomAttributesCacheGenerator_AnimationEvent_t2719____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2723_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_t2723_AnimationCurve__ctor_m9215_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_Init_m9219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2720_CustomAttributesCacheGenerator_AnimatorStateInfo_t2720____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Animator_t611_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Animator_t611_CustomAttributesCacheGenerator_Animator_StringToHash_m9238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Animator_t611_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Animator_t611_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Animator_t611_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void CharacterInfo_t2729_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void CharacterInfo_t2729_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void CharacterInfo_t2729_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t745_il2cpp_TypeInfo_var;
void CharacterInfo_t2729_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t745 * tmp;
		tmp = (ObsoleteAttribute_t745 *)il2cpp_codegen_object_new (ObsoleteAttribute_t745_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4127(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Font_t845_CustomAttributesCacheGenerator_Font_get_material_m5813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Font_t845_CustomAttributesCacheGenerator_Font_HasCharacter_m5707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Font_t845_CustomAttributesCacheGenerator_Font_get_dynamic_m5815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Font_t845_CustomAttributesCacheGenerator_Font_get_fontSize_m5816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2136 * tmp;
		tmp = (EditorBrowsableAttribute_t2136 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7823(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_Init_m9269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void Canvas_t459_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2777_il2cpp_TypeInfo_var;
void RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2777 * tmp;
		tmp = (WrapperlessIcall_t2777 *)il2cpp_codegen_object_new (WrapperlessIcall_t2777_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_Request_get_sourceId_m9308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_Request_get_appId_m9309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2734_CustomAttributesCacheGenerator_Request_get_domain_m9310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_Response_get_success_m9319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_Response_set_success_m9320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2736_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_name_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_name_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2750_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2750_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2750_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2908_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2751_il2cpp_TypeInfo_var;
void AppID_t2751_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2908_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4451);
		AppID_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2908 * tmp;
		tmp = (DefaultValueAttribute_t2908 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2908_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9904(tmp, Box(AppID_t2751_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2908_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2752_il2cpp_TypeInfo_var;
void SourceID_t2752_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2908_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4451);
		SourceID_t2752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4351);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2908 * tmp;
		tmp = (DefaultValueAttribute_t2908 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2908_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9904(tmp, Box(SourceID_t2752_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2908_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2753_il2cpp_TypeInfo_var;
void NetworkID_t2753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2908_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4451);
		NetworkID_t2753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4354);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2908 * tmp;
		tmp = (DefaultValueAttribute_t2908 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2908_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9904(tmp, Box(NetworkID_t2753_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2908_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2754_il2cpp_TypeInfo_var;
void NodeID_t2754_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2908_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4451);
		NodeID_t2754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4355);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2908 * tmp;
		tmp = (DefaultValueAttribute_t2908 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2908_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9904(tmp, Box(NodeID_t2754_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2759_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9905(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9911(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9912(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9914(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9915(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var;
void JsonArray_t2760_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2136 * tmp;
		tmp = (EditorBrowsableAttribute_t2136 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7823(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var;
void JsonObject_t2761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3271);
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
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2136 * tmp;
		tmp = (EditorBrowsableAttribute_t2136 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7823(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
void SimpleJson_t2764_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var;
void SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2912 * tmp;
		tmp = (SuppressMessageAttribute_t2912 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9917(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9918(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var;
void SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2912 * tmp;
		tmp = (SuppressMessageAttribute_t2912 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9917(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var;
void SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_t2764____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2136 * tmp;
		tmp = (EditorBrowsableAttribute_t2136 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2136_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7823(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2762_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2912 * tmp;
		tmp = (SuppressMessageAttribute_t2912 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9917(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9918(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2912 * tmp;
		tmp = (SuppressMessageAttribute_t2912 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9917(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9918(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2912 * tmp;
		tmp = (SuppressMessageAttribute_t2912 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2912_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9917(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9918(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var;
void ReflectionUtils_t2776_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2911 * tmp;
		tmp = (GeneratedCodeAttribute_t2911 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2911_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9916(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetConstructorInfo_m9522_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetContructor_m9527_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetConstructorByReflection_m9529_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2913_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2770_CustomAttributesCacheGenerator_ConstructorDelegate_t2770_ConstructorDelegate_Invoke_m9507_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t742_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2770_CustomAttributesCacheGenerator_ConstructorDelegate_t2770_ConstructorDelegate_BeginInvoke_m9508_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t742 * tmp;
		tmp = (ParamArrayAttribute_t742 *)il2cpp_codegen_object_new (ParamArrayAttribute_t742_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4039(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2778_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1049_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void RequireComponent_t1043_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void WritableAttribute_t2784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2785_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void GUIStateObjects_t2796_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_Achievement_get_id_m9584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_Achievement_set_id_m9585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2799_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2800_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2800_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2800_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_Score_get_value_m9606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2801_CustomAttributesCacheGenerator_Score_set_value_m9607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_id_m9615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_id_m9616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_range_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_range_m9620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void TooltipAttribute_t1052_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void SpaceAttribute_t1050_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void RangeAttribute_t1047_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1051_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2905 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2905 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2905_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9883(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2817_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void ArgumentCache_t2824_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
void PersistentCall_t2828_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void PersistentCall_t2828_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
void PersistentCall_t2828_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void PersistentCall_t2828_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void PersistentCall_t2828_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2830_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var;
void UnityEventBase_t2833_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1810);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1041 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1041 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1041_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5904(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t743_il2cpp_TypeInfo_var;
void UnityEventBase_t2833_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t743 * tmp;
		tmp = (SerializeField_t743 *)il2cpp_codegen_object_new (SerializeField_t743_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1040_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1809);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1040 * tmp;
		tmp = (AddComponentMenu_t1040 *)il2cpp_codegen_object_new (AddComponentMenu_t1040_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5903(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2835_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2836_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1041_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7686(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7685(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t746_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2838_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t746 * tmp;
		tmp = (AttributeUsageAttribute_t746 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t746_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4157(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[813] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2622_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8365,
	AssetBundleCreateRequest_t2622_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8366,
	AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8370,
	AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8371,
	AssetBundle_t2624_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8372,
	LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8375,
	LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8376,
	LayerMask_t830_CustomAttributesCacheGenerator_LayerMask_t830_LayerMask_GetMask_m8377_Arg0_ParameterInfo,
	RuntimePlatform_t2628_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2628_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2628_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4014,
	SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8378,
	SystemInfo_t2629_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7461,
	Coroutine_t885_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8381,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8383,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8383_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8384,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8386,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8391,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8392,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8393,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8394,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8395,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8396,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8397,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8398,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8399,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8400,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8401,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8402,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8403,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8404,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8405,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8406,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8407,
	GameCenterPlatform_t740_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8409,
	GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8453,
	GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8454,
	GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8455,
	GcLeaderboard_t2641_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8456,
	MeshFilter_t732_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3877,
	Mesh_t482_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8457,
	Mesh_t482_CustomAttributesCacheGenerator_Mesh_t482_Mesh_Internal_Create_m8457_Arg0_ParameterInfo,
	Mesh_t482_CustomAttributesCacheGenerator_Mesh_set_vertices_m3878,
	Mesh_t482_CustomAttributesCacheGenerator_Mesh_set_triangles_m3879,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_set_enabled_m3728,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_material_m3707,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_set_material_m3709,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_bounds_m3737,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5539,
	Renderer_t639_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5540,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_get_width_m3367,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_get_height_m3382,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_get_dpi_m3489,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3802,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3803,
	Screen_t2643_CustomAttributesCacheGenerator_Screen_get_orientation_m3381,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8479,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8480,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8484,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8484_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5581,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5657,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8485,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8485_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8485_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3407,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3406,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8486,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3408,
	RenderTexture_t2644_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8487,
	RenderTexture_t2644_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8488,
	GUILayer_t2647_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8492,
	Gradient_t2650_CustomAttributesCacheGenerator_Gradient_Init_m8496,
	Gradient_t2650_CustomAttributesCacheGenerator_Gradient_Cleanup_m8497,
	GUI_t647_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t647_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t647_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8504,
	GUI_t647_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8505,
	GUI_t647_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8506,
	GUI_t647_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8507,
	GUI_t647_CustomAttributesCacheGenerator_GUI_set_changed_m8509,
	GUI_t647_CustomAttributesCacheGenerator_GUI_get_enabled_m8510,
	GUI_t647_CustomAttributesCacheGenerator_GUI_set_enabled_m3400,
	GUI_t647_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8512,
	GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8515,
	GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8518,
	GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8525,
	GUI_t647_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8532,
	GUI_t647_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8534,
	GUI_t647_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8541,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Label_m3378_Arg1_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Box_m3394_Arg1_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Button_m3376_Arg1_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_TextField_m3379_Arg1_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_TextField_m3815_Arg2_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_Toggle_m3424_Arg2_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_SelectionGrid_m3422_Arg3_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_SelectionGrid_m8548_Arg4_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginHorizontal_m3377_Arg0_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginHorizontal_m8549_Arg2_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginVertical_m3391_Arg0_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginVertical_m8550_Arg2_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginScrollView_m3399_Arg1_ParameterInfo,
	GUILayout_t2653_CustomAttributesCacheGenerator_GUILayout_t2653_GUILayout_BeginScrollView_m8551_Arg6_ParameterInfo,
	GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8566,
	GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8568,
	GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8569,
	GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_t646_GUILayoutUtility_GetRect_m8572_Arg2_ParameterInfo,
	GUILayoutUtility_t646_CustomAttributesCacheGenerator_GUILayoutUtility_t646_GUILayoutUtility_GetRect_m8574_Arg3_ParameterInfo,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8616,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8620,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8624,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8625,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8626,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8627,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8628,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8629,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8631,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8633,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8637,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8638,
	GUIUtility_t2665_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8639,
	GUIClip_t2666_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8641,
	GUIClip_t2666_CustomAttributesCacheGenerator_GUIClip_Pop_m8642,
	GUISettings_t2667_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2667_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2667_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2667_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2667_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t723_CustomAttributesCacheGenerator,
	GUISkin_t723_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t723_CustomAttributesCacheGenerator_m_box,
	GUISkin_t723_CustomAttributesCacheGenerator_m_button,
	GUISkin_t723_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t723_CustomAttributesCacheGenerator_m_label,
	GUISkin_t723_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t723_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t723_CustomAttributesCacheGenerator_m_window,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t723_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t723_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t723_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t723_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t723_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t725_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t725_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t725_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_Init_m8711,
	GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8712,
	GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8713,
	GUIStyleState_t668_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8714,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_Init_m8717,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8718,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_left_m5848,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_left_m8719,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_right_m8720,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_right_m8721,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_top_m5849,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_top_m8722,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3826,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8723,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5842,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5843,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8725,
	RectOffset_t642_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8727,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8731,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8732,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8733,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8734,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8735,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8736,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8738,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8739,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8740,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3368,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8741,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3369,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8742,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8743,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8744,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3373,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8745,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3372,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8746,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3469,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3470,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8749,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8752,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8753_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8755,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8756,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8760,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8762,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8764,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8767,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8770,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8772,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5744,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5745,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg1_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg2_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg3_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg4_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg5_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_t880_TouchScreenKeyboard_Open_m8773_Arg6_ParameterInfo,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5684,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5685,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5743,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5683,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5742,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5695,
	TouchScreenKeyboard_t880_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5694,
	Event_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t726_CustomAttributesCacheGenerator_Event_Init_m8774,
	Event_t726_CustomAttributesCacheGenerator_Event_Cleanup_m8776,
	Event_t726_CustomAttributesCacheGenerator_Event_get_rawType_m5708,
	Event_t726_CustomAttributesCacheGenerator_Event_get_type_m3823,
	Event_t726_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8777,
	Event_t726_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8779,
	Event_t726_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8781,
	Event_t726_CustomAttributesCacheGenerator_Event_get_modifiers_m5704,
	Event_t726_CustomAttributesCacheGenerator_Event_get_character_m5706,
	Event_t726_CustomAttributesCacheGenerator_Event_get_commandName_m8782,
	Event_t726_CustomAttributesCacheGenerator_Event_get_keyCode_m5705,
	Event_t726_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8783,
	Event_t726_CustomAttributesCacheGenerator_Event_Use_m8785,
	Event_t726_CustomAttributesCacheGenerator_Event_PopEvent_m5709,
	EventModifiers_t2676_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t494_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t698_CustomAttributesCacheGenerator,
	Quaternion_t727_CustomAttributesCacheGenerator,
	Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8811,
	Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8814,
	Quaternion_t727_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8816,
	Matrix4x4_t1016_CustomAttributesCacheGenerator,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8832,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8834,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8836,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8839,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8851,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8854,
	Matrix4x4_t1016_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8855,
	Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8872,
	Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8875,
	Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8878,
	Bounds_t708_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8882,
	Vector4_t977_CustomAttributesCacheGenerator,
	Mathf_t670_CustomAttributesCacheGenerator_Mathf_t670_Mathf_SmoothDamp_m5767_Arg4_ParameterInfo,
	Mathf_t670_CustomAttributesCacheGenerator_Mathf_t670_Mathf_SmoothDamp_m5767_Arg5_ParameterInfo,
	DrivenTransformProperties_t2678_CustomAttributesCacheGenerator,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8913,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8914,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8915,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8916,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8917,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8918,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8919,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8920,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8921,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8922,
	RectTransform_t618_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8923,
	Resources_t730_CustomAttributesCacheGenerator_Resources_Load_m8929,
	TextAsset_t722_CustomAttributesCacheGenerator_TextAsset_get_text_m3806,
	SerializePrivateVariables_t2682_CustomAttributesCacheGenerator,
	Shader_t2683_CustomAttributesCacheGenerator_Shader_PropertyToID_m8932,
	Material_t483_CustomAttributesCacheGenerator_Material_SetTexture_m8934,
	Material_t483_CustomAttributesCacheGenerator_Material_GetTexture_m8936,
	Material_t483_CustomAttributesCacheGenerator_Material_SetFloat_m8938,
	Material_t483_CustomAttributesCacheGenerator_Material_HasProperty_m8939,
	Material_t483_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m8940,
	Material_t483_CustomAttributesCacheGenerator_Material_t483_Material_Internal_CreateWithMaterial_m8940_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m8943,
	SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m8946,
	SphericalHarmonicsL2_t2684_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m8949,
	Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_rect_m5635,
	Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5631,
	Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_texture_m5628,
	Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5654,
	Sprite_t473_CustomAttributesCacheGenerator_Sprite_get_border_m5629,
	SpriteRenderer_t555_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m8959,
	SpriteRenderer_t555_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m8960,
	DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5642,
	DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5641,
	DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5634,
	DataUtility_t2685_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m8961,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m8964,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m8965,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3890,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m8966_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m8967,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m8970,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3560,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m8971,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7419,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7425,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3411,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m8974_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3410,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m8976_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m8976_Arg3_ParameterInfo,
	WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_URLEncode_m8980_Arg1_ParameterInfo,
	WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_QPEncode_m8982_Arg1_ParameterInfo,
	WWWTranscoder_t2687_CustomAttributesCacheGenerator_WWWTranscoder_t2687_WWWTranscoder_SevenBitClean_m8985_Arg1_ParameterInfo,
	CacheIndex_t2688_CustomAttributesCacheGenerator,
	UnityString_t2689_CustomAttributesCacheGenerator_UnityString_t2689_UnityString_Format_m8987_Arg1_ParameterInfo,
	AsyncOperation_t2623_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m8989,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3461,
	Application_t1453_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m8996,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_isPlaying_m5747,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_isEditor_m5749,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3772,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_platform_m3475,
	Application_t1453_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3976,
	Application_t1453_CustomAttributesCacheGenerator_Application_t1453_Application_ExternalCall_m3773_Arg1_ParameterInfo,
	Application_t1453_CustomAttributesCacheGenerator_Application_t1453_Application_BuildInvocationForArguments_m8998_Arg1_ParameterInfo,
	Application_t1453_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m8999,
	Application_t1453_CustomAttributesCacheGenerator_Application_OpenURL_m3666,
	Application_t1453_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9001,
	Application_t1453_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1453_CustomAttributesCacheGenerator_Application_t1453____persistentDataPath_PropertyInfo,
	Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3955,
	Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5717,
	Behaviour_t1026_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5477,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5530,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5529,
	Camera_t524_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3994,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_depth_m5442,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5543,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_eventMask_m9008,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9009,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9010,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9011,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9013,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9014,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9015,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m9016,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9017,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9018,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9019,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_main_m3713,
	Camera_t524_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9020,
	Camera_t524_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9021,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9026,
	Camera_t524_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9028,
	CameraCallback_t2690_CustomAttributesCacheGenerator,
	Debug_t2691_CustomAttributesCacheGenerator_Debug_Internal_Log_m9029,
	Debug_t2691_CustomAttributesCacheGenerator_Debug_t2691_Debug_Internal_Log_m9029_Arg2_ParameterInfo,
	Debug_t2691_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9030,
	Debug_t2691_CustomAttributesCacheGenerator_Debug_t2691_Debug_Internal_LogException_m9030_Arg1_ParameterInfo,
	Debug_t2691_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3771,
	Display_t2694_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9055,
	Display_t2694_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9056,
	Display_t2694_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9057,
	Display_t2694_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9058,
	Display_t2694_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9059,
	Display_t2694_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9060,
	Display_t2694_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9061,
	Display_t2694_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9062,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3721,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3720,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9063,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9064,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9065,
	Input_t649_CustomAttributesCacheGenerator_Input_GetAxis_m4006,
	Input_t649_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5521,
	Input_t649_CustomAttributesCacheGenerator_Input_GetButtonDown_m5520,
	Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButton_m3919,
	Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3716,
	Input_t649_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3918,
	Input_t649_CustomAttributesCacheGenerator_Input_get_mousePosition_m3714,
	Input_t649_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5494,
	Input_t649_CustomAttributesCacheGenerator_Input_get_mousePresent_m5519,
	Input_t649_CustomAttributesCacheGenerator_Input_GetTouch_m3396,
	Input_t649_CustomAttributesCacheGenerator_Input_get_touchCount_m3395,
	Input_t649_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5746,
	Input_t649_CustomAttributesCacheGenerator_Input_get_compositionString_m5686,
	Input_t649_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9067,
	HideFlags_t2697_CustomAttributesCacheGenerator,
	Object_t645_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9070,
	Object_t645_CustomAttributesCacheGenerator_Object_Destroy_m9071,
	Object_t645_CustomAttributesCacheGenerator_Object_t645_Object_Destroy_m9071_Arg1_ParameterInfo,
	Object_t645_CustomAttributesCacheGenerator_Object_Destroy_m3606,
	Object_t645_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9072,
	Object_t645_CustomAttributesCacheGenerator_Object_t645_Object_DestroyImmediate_m9072_Arg1_ParameterInfo,
	Object_t645_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5748,
	Object_t645_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9073,
	Object_t645_CustomAttributesCacheGenerator_Object_get_name_m3463,
	Object_t645_CustomAttributesCacheGenerator_Object_set_name_m5809,
	Object_t645_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t645_CustomAttributesCacheGenerator_Object_set_hideFlags_m5720,
	Object_t645_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t645_CustomAttributesCacheGenerator_Object_Instantiate_m3847,
	Object_t645_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9079,
	Component_t704_CustomAttributesCacheGenerator_Component_get_transform_m3742,
	Component_t704_CustomAttributesCacheGenerator_Component_get_gameObject_m3462,
	Component_t704_CustomAttributesCacheGenerator_Component_GetComponent_m5855,
	Component_t704_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9081,
	Component_t704_CustomAttributesCacheGenerator_Component_GetComponent_m9889,
	Component_t704_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9082,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9084,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9085,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9893,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9086,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9087,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3745,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5722,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5723,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3662,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5478,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4009,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3914,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9088,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9088_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9088_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9089,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9090,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9091,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9091_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9096,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9097,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9098,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9099,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9100,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9101,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9102,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9103,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9104,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9105,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9106,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9107,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3848,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9108,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m3984,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9109_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9110,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9111,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m3989,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5721,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3849,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m3988,
	Time_t2699_CustomAttributesCacheGenerator_Time_get_time_m3869,
	Time_t2699_CustomAttributesCacheGenerator_Time_get_deltaTime_m3891,
	Time_t2699_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5523,
	Time_t2699_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5555,
	Time_t2699_CustomAttributesCacheGenerator_Time_set_timeScale_m3667,
	Random_t2700_CustomAttributesCacheGenerator_Random_set_seed_m3941,
	Random_t2700_CustomAttributesCacheGenerator_Random_Range_m3889,
	Random_t2700_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9113,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9116,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7414,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_t2702_PlayerPrefs_GetString_m7414_Arg1_ParameterInfo,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3626,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3625,
	PlayerPrefs_t2702_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7417,
	LocalNotification_t2703_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9118,
	RemoteNotification_t2704_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9120,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9123,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9124,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9126,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9127,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9128,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9129,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9130,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9131,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9132,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9134,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9135,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9137,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9138,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9139,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9140,
	NotificationServices_t2706_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9141,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9159,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m9160_Arg3_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m9160_Arg4_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_Raycast_m3717,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m5608_Arg2_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_Raycast_m5608_Arg3_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m5545_Arg1_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m5545_Arg2_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m9161_Arg2_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_t2708_Physics_RaycastAll_m9161_Arg3_ParameterInfo,
	Physics_t2708_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9162,
	Collider_t707_CustomAttributesCacheGenerator_Collider_set_enabled_m3729,
	Collider_t707_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9163,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3901,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_IgnoreLayerCollision_m3901_Arg2_ParameterInfo,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9167,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_Raycast_m5609,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg2_ParameterInfo,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg3_ParameterInfo,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg4_ParameterInfo,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_t735_Physics2D_Raycast_m9168_Arg5_ParameterInfo,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5533,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9169,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3913,
	Physics2D_t735_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9170,
	Collider2D_t570_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3973,
	Collider2D_t570_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9172,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_set_clip_m3705,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Play_m9188,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_t562_AudioSource_Play_m9188_Arg0_ParameterInfo,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Play_m3971,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3987,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_Stop_m3706,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3972,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9189,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_t562_AudioSource_PlayOneShot_m9189_Arg1_ParameterInfo,
	AudioSource_t562_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3719,
	AnimationEvent_t2719_CustomAttributesCacheGenerator_AnimationEvent_t2719____data_PropertyInfo,
	AnimationCurve_t2723_CustomAttributesCacheGenerator,
	AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_t2723_AnimationCurve__ctor_m9215_Arg0_ParameterInfo,
	AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9217,
	AnimationCurve_t2723_CustomAttributesCacheGenerator_AnimationCurve_Init_m9219,
	AnimatorStateInfo_t2720_CustomAttributesCacheGenerator_AnimatorStateInfo_t2720____nameHash_PropertyInfo,
	Animator_t611_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5801,
	Animator_t611_CustomAttributesCacheGenerator_Animator_StringToHash_m9238,
	Animator_t611_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9239,
	Animator_t611_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9240,
	Animator_t611_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9241,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3711,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3712,
	CharacterInfo_t2729_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2729_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2729_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2729_CustomAttributesCacheGenerator_flipped,
	Font_t845_CustomAttributesCacheGenerator_Font_get_material_m5813,
	Font_t845_CustomAttributesCacheGenerator_Font_HasCharacter_m5707,
	Font_t845_CustomAttributesCacheGenerator_Font_get_dynamic_m5815,
	Font_t845_CustomAttributesCacheGenerator_Font_get_fontSize_m5816,
	FontTextureRebuildCallback_t2730_CustomAttributesCacheGenerator,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_Init_m9269,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9270,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9273,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5719,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9274,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9275,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9276,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9277,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9278,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9279,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5700,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9280,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9281,
	TextGenerator_t883_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5735,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5604,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5830,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4018,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9292,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3865,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5833,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5632,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5834,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5591,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5606,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5605,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5613,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5578,
	Canvas_t459_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5812,
	CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3990,
	CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5793,
	CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9294,
	CanvasGroup_t591_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5590,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9297,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5594,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5865,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5586,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9298,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9299,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5582,
	CanvasRenderer_t850_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5579,
	RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9301,
	RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9303,
	RectTransformUtility_t1000_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5593,
	Request_t2734_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2734_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2734_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2734_CustomAttributesCacheGenerator_Request_get_sourceId_m9308,
	Request_t2734_CustomAttributesCacheGenerator_Request_get_appId_m9309,
	Request_t2734_CustomAttributesCacheGenerator_Request_get_domain_m9310,
	Response_t2736_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2736_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2736_CustomAttributesCacheGenerator_Response_get_success_m9319,
	Response_t2736_CustomAttributesCacheGenerator_Response_set_success_m9320,
	Response_t2736_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9321,
	Response_t2736_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9322,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9327,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9328,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9329,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9330,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9331,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9332,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9333,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9334,
	CreateMatchRequest_t2739_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9335,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9338,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9339,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9340,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9341,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9342,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9343,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9344,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9345,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9346,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9347,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9348,
	CreateMatchResponse_t2740_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9349,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9353,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9354,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9355,
	JoinMatchRequest_t2741_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9356,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9359,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9360,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9361,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9362,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9363,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9364,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9365,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9366,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9367,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9368,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9369,
	JoinMatchResponse_t2742_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9370,
	DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9374,
	DestroyMatchRequest_t2743_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9375,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9378,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9379,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9380,
	DropConnectionRequest_t2744_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9381,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9384,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9385,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9386,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9387,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9388,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9389,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9390,
	ListMatchRequest_t2745_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9391,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9394,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9395,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9396,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9397,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9398,
	MatchDirectConnectInfo_t2746_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9399,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9403,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9404,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_name_m9405,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_name_m9406,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9407,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9408,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9409,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9410,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9411,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9412,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9413,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9414,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9415,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9416,
	MatchDesc_t2748_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9417,
	ListMatchResponse_t2750_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2750_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9421,
	ListMatchResponse_t2750_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9422,
	AppID_t2751_CustomAttributesCacheGenerator,
	SourceID_t2752_CustomAttributesCacheGenerator,
	NetworkID_t2753_CustomAttributesCacheGenerator,
	NodeID_t2754_CustomAttributesCacheGenerator,
	NetworkMatch_t2759_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9905,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9911,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9912,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9914,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2910_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9915,
	JsonArray_t2760_CustomAttributesCacheGenerator,
	JsonObject_t2761_CustomAttributesCacheGenerator,
	SimpleJson_t2764_CustomAttributesCacheGenerator,
	SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9467,
	SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9479,
	SimpleJson_t2764_CustomAttributesCacheGenerator_SimpleJson_t2764____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2762_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2762_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9919,
	PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9496,
	PocoJsonSerializerStrategy_t2763_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9497,
	ReflectionUtils_t2776_CustomAttributesCacheGenerator,
	ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetConstructorInfo_m9522_Arg1_ParameterInfo,
	ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetContructor_m9527_Arg1_ParameterInfo,
	ReflectionUtils_t2776_CustomAttributesCacheGenerator_ReflectionUtils_t2776_ReflectionUtils_GetConstructorByReflection_m9529_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2913_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2770_CustomAttributesCacheGenerator_ConstructorDelegate_t2770_ConstructorDelegate_Invoke_m9507_Arg0_ParameterInfo,
	ConstructorDelegate_t2770_CustomAttributesCacheGenerator_ConstructorDelegate_t2770_ConstructorDelegate_BeginInvoke_m9508_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2778_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1049_CustomAttributesCacheGenerator,
	RequireComponent_t1043_CustomAttributesCacheGenerator,
	WritableAttribute_t2784_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2785_CustomAttributesCacheGenerator,
	GUIStateObjects_t2796_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9562,
	Achievement_t2799_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2799_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2799_CustomAttributesCacheGenerator_Achievement_get_id_m9584,
	Achievement_t2799_CustomAttributesCacheGenerator_Achievement_set_id_m9585,
	Achievement_t2799_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9586,
	Achievement_t2799_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9587,
	AchievementDescription_t2800_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2800_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9594,
	AchievementDescription_t2800_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9595,
	Score_t2801_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2801_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2801_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9604,
	Score_t2801_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9605,
	Score_t2801_CustomAttributesCacheGenerator_Score_get_value_m9606,
	Score_t2801_CustomAttributesCacheGenerator_Score_set_value_m9607,
	Leaderboard_t2640_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2640_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2640_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2640_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_id_m9615,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_id_m9616,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9617,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9618,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_range_m9619,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_range_m9620,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9621,
	Leaderboard_t2640_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9622,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1052_CustomAttributesCacheGenerator,
	SpaceAttribute_t1050_CustomAttributesCacheGenerator,
	RangeAttribute_t1047_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1053_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1051_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9666,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9668,
	SharedBetweenAnimatorsAttribute_t2817_CustomAttributesCacheGenerator,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2824_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2828_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2828_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2828_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2828_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2828_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2830_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2833_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2833_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2834_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2835_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2836_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1041_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2838_CustomAttributesCacheGenerator,
};
