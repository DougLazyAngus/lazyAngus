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
extern TypeInfo* InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t803_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3407);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t803 * tmp;
		tmp = (ExtensionAttribute_t803 *)il2cpp_codegen_object_new (ExtensionAttribute_t803_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4345(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2162 * tmp;
		tmp = (InternalsVisibleToAttribute_t2162 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2162_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7843(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2681_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2681_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_t899_LayerMask_GetMask_m8694_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void RuntimePlatform_t786_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void RuntimePlatform_t786_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Coroutine_t952_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8700_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MeshFilter_t792_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8774_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_enabled_m4022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_material_m4001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_material_m4003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_materials_m4281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_bounds_m4031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_get_width_m3661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_get_height_m3676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_get_dpi_m3783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Screen_t2701_CustomAttributesCacheGenerator_Screen_get_orientation_m3675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8801_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8802_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8802_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RenderTexture_t2702_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RenderTexture_t2702_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUILayer_t2705_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Gradient_t2708_CustomAttributesCacheGenerator_Gradient_Init_m8813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Gradient_t2708_CustomAttributesCacheGenerator_Gradient_Cleanup_m8814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_set_changed_m8826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_get_enabled_m8827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_set_enabled_m3694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Label_m3672_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Box_m3688_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Button_m3670_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_TextField_m3673_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_TextField_m4109_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Toggle_m3718_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_SelectionGrid_m3716_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_SelectionGrid_m8865_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginHorizontal_m3671_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginHorizontal_m8866_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginVertical_m3685_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginVertical_m8867_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginScrollView_m3693_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginScrollView_m8868_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_t704_GUILayoutUtility_GetRect_m8889_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_t704_GUILayoutUtility_GetRect_m8891_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIClip_t2724_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIClip_t2724_CustomAttributesCacheGenerator_GUIClip_Pop_m8959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISettings_t2725_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISettings_t2725_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISettings_t2725_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISettings_t2725_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISettings_t2725_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t810_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t810 * tmp;
		tmp = (ExecuteInEditMode_t810 *)il2cpp_codegen_object_new (ExecuteInEditMode_t810_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4486(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUISkin_t780_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUIContent_t782_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUIContent_t782_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void GUIContent_t782_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_Init_m9028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_Init_m9034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_left_m6173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_left_m9036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_right_m9037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_right_m9038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_top_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_top_m9039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9070_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Init_m9091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Cleanup_m9093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_rawType_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_type_m4117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_modifiers_m6031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_character_m6033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_commandName_m9099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_get_keyCode_m6032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_Use_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Event_t783_CustomAttributesCacheGenerator_Event_PopEvent_m6036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1105_il2cpp_TypeInfo_var;
void EventModifiers_t2734_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1955);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1105 * tmp;
		tmp = (FlagsAttribute_t1105 *)il2cpp_codegen_object_new (FlagsAttribute_t1105_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6210(tmp, NULL);
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
void Vector3_t536_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2836_il2cpp_TypeInfo_var;
void Color32_t755_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4589);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2836 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2836 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2836_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9859(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1043_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Mathf_t727_CustomAttributesCacheGenerator_Mathf_t727_Mathf_SmoothDamp_m6092_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Mathf_t727_CustomAttributesCacheGenerator_Mathf_t727_Mathf_SmoothDamp_m6092_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1105_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1955);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1105 * tmp;
		tmp = (FlagsAttribute_t1105 *)il2cpp_codegen_object_new (FlagsAttribute_t1105_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6210(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Resources_t790_CustomAttributesCacheGenerator_Resources_Load_m4143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextAsset_t779_CustomAttributesCacheGenerator_TextAsset_get_text_m4100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2740_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Shader_t2741_CustomAttributesCacheGenerator_Shader_PropertyToID_m9248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9259_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SpriteRenderer_t656_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void SpriteRenderer_t656_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9285_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9293_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9295_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9295_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_URLEncode_m9299_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_QPEncode_m9301_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_SevenBitClean_m9304_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void CacheIndex_t2746_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void UnityString_t2747_CustomAttributesCacheGenerator_UnityString_t2747_UnityString_Format_m9306_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AsyncOperation_t2682_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_isPlaying_m4140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_isEditor_m6074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_platform_m3769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_t1512_Application_ExternalCall_m4067_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_t1512_Application_BuildInvocationForArguments_m9317_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_get_unityVersion_m4144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_OpenURL_m3960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2964_il2cpp_TypeInfo_var;
void Application_t1512_CustomAttributesCacheGenerator_Application_t1512____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4590);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2964 * tmp;
		tmp = (SecurityCriticalAttribute_t2964 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2964_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10205(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_depth_m5772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_eventMask_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_main_m4007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var;
void CameraCallback_t2748_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2195 * tmp;
		tmp = (EditorBrowsableAttribute_t2195 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8140(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Debug_t2749_CustomAttributesCacheGenerator_Debug_Internal_Log_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void Debug_t2749_CustomAttributesCacheGenerator_Debug_t2749_Debug_Internal_Log_m9347_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Debug_t2749_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void Debug_t2749_CustomAttributesCacheGenerator_Debug_t2749_Debug_Internal_LogException_m9348_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Debug_t2749_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Display_t2752_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetAxis_m4327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetButtonDown_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButton_m4228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_get_mousePosition_m4008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_get_mousePresent_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_GetTouch_m3690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_get_touchCount_m3689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_get_compositionString_m6013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Input_t707_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1105_il2cpp_TypeInfo_var;
void HideFlags_t2755_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1955);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1105 * tmp;
		tmp = (FlagsAttribute_t1105 *)il2cpp_codegen_object_new (FlagsAttribute_t1105_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6210(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_Destroy_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_t703_Object_Destroy_m9390_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_Destroy_m3900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_t703_Object_DestroyImmediate_m9391_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_get_name_m3757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_set_name_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_set_hideFlags_m6046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_Instantiate_m4161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void Object_t703_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_get_transform_m4036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_get_gameObject_m3756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_GetComponent_m6180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_GetComponent_m10208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Component_t761_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9407_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9407_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4585);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2896 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2896 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2896_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10072(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2842_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9410_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4586);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2842 * tmp;
		tmp = (WritableAttribute_t2842 *)il2cpp_codegen_object_new (WritableAttribute_t2842_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9867(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9428_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Time_t2757_CustomAttributesCacheGenerator_Time_get_time_m4141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Time_t2757_CustomAttributesCacheGenerator_Time_get_deltaTime_m4147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Time_t2757_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Time_t2757_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Time_t2757_CustomAttributesCacheGenerator_Time_set_timeScale_m3961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Random_t2758_CustomAttributesCacheGenerator_Random_set_seed_m4251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Random_t2758_CustomAttributesCacheGenerator_Random_Range_m4197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Random_t2758_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_t2760_PlayerPrefs_GetString_m7732_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void LocalNotification_t2761_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RemoteNotification_t2762_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m9480_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m9480_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_Raycast_m4011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m5936_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m5936_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m5874_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m5874_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m9481_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m9481_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics_t2766_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Collider_t764_CustomAttributesCacheGenerator_Collider_set_enabled_m4023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Collider_t764_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_IgnoreLayerCollision_m4229_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_Raycast_m5937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Collider2D_t699_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Collider2D_t699_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CircleCollider2D_t619_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CircleCollider2D_t619_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_set_clip_m3999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Play_m9508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_t611_AudioSource_Play_m9508_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Play_m4284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Stop_m4000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2893_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_t611_AudioSource_PlayOneShot_m9509_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4582);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2893 * tmp;
		tmp = (DefaultValueAttribute_t2893 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2893_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10067(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var;
void AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4587);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2894 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2894 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2894_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10071(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void AnimationEvent_t2777_CustomAttributesCacheGenerator_AnimationEvent_t2777____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_t2781_AnimationCurve__ctor_m9535_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_Init_m9539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2778_CustomAttributesCacheGenerator_AnimatorStateInfo_t2778____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Animator_t666_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Animator_t666_CustomAttributesCacheGenerator_Animator_StringToHash_m9558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Animator_t666_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Animator_t666_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Animator_t666_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void CharacterInfo_t2787_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void CharacterInfo_t2787_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void CharacterInfo_t2787_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t807_il2cpp_TypeInfo_var;
void CharacterInfo_t2787_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t807 * tmp;
		tmp = (ObsoleteAttribute_t807 *)il2cpp_codegen_object_new (ObsoleteAttribute_t807_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4452(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Font_t914_CustomAttributesCacheGenerator_Font_get_material_m6138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Font_t914_CustomAttributesCacheGenerator_Font_HasCharacter_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Font_t914_CustomAttributesCacheGenerator_Font_get_dynamic_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Font_t914_CustomAttributesCacheGenerator_Font_get_fontSize_m6141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2195 * tmp;
		tmp = (EditorBrowsableAttribute_t2195 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8140(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_Init_m9589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void Canvas_t674_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2835_il2cpp_TypeInfo_var;
void RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4584);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2835 * tmp;
		tmp = (WrapperlessIcall_t2835 *)il2cpp_codegen_object_new (WrapperlessIcall_t2835_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9858(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_Request_get_sourceId_m9628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_Request_get_appId_m9629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2792_CustomAttributesCacheGenerator_Request_get_domain_m9630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_Response_get_success_m9639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_Response_set_success_m9640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2794_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_name_m9725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_name_m9726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2808_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2808_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2808_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2966_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2809_il2cpp_TypeInfo_var;
void AppID_t2809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2966_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4591);
		AppID_t2809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4492);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2966 * tmp;
		tmp = (DefaultValueAttribute_t2966 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2966_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, Box(AppID_t2809_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2966_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2810_il2cpp_TypeInfo_var;
void SourceID_t2810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2966_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4591);
		SourceID_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4491);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2966 * tmp;
		tmp = (DefaultValueAttribute_t2966 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2966_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, Box(SourceID_t2810_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2966_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2811_il2cpp_TypeInfo_var;
void NetworkID_t2811_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2966_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4591);
		NetworkID_t2811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4494);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2966 * tmp;
		tmp = (DefaultValueAttribute_t2966 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2966_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, Box(NetworkID_t2811_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2966_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2812_il2cpp_TypeInfo_var;
void NodeID_t2812_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2966_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4591);
		NodeID_t2812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4495);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2966 * tmp;
		tmp = (DefaultValueAttribute_t2966 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2966_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10223(tmp, Box(NodeID_t2812_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2817_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10224(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10230(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10231(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10233(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10234(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var;
void JsonArray_t2818_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2195 * tmp;
		tmp = (EditorBrowsableAttribute_t2195 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8140(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var;
void JsonObject_t2819_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2195 * tmp;
		tmp = (EditorBrowsableAttribute_t2195 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8140(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
void SimpleJson_t2822_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var;
void SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2970 * tmp;
		tmp = (SuppressMessageAttribute_t2970 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10237(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var;
void SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2970 * tmp;
		tmp = (SuppressMessageAttribute_t2970 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var;
void SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_t2822____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2195 * tmp;
		tmp = (EditorBrowsableAttribute_t2195 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2195_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8140(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2820_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2820_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2970 * tmp;
		tmp = (SuppressMessageAttribute_t2970 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10237(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2970 * tmp;
		tmp = (SuppressMessageAttribute_t2970 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10237(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4593);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2970 * tmp;
		tmp = (SuppressMessageAttribute_t2970 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2970_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10237(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var;
void ReflectionUtils_t2834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2969 * tmp;
		tmp = (GeneratedCodeAttribute_t2969 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2969_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10235(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetConstructorInfo_m9842_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetContructor_m9847_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetConstructorByReflection_m9849_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2971_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2828_CustomAttributesCacheGenerator_ConstructorDelegate_t2828_ConstructorDelegate_Invoke_m9827_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t804_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2828_CustomAttributesCacheGenerator_ConstructorDelegate_t2828_ConstructorDelegate_BeginInvoke_m9828_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t804 * tmp;
		tmp = (ParamArrayAttribute_t804 *)il2cpp_codegen_object_new (ParamArrayAttribute_t804_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2829_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2830_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2831_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2833_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2836_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void RequireComponent_t809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void WritableAttribute_t2842_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void GUIStateObjects_t2854_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_Achievement_get_id_m9904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_Achievement_set_id_m9905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2857_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2858_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2858_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2858_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_Score_get_value_m9926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2859_CustomAttributesCacheGenerator_Score_set_value_m9927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_id_m9935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_id_m9936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_range_m9939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_range_m9940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void TooltipAttribute_t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void SpaceAttribute_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void RangeAttribute_t1113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1118_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4588);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2963 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2963 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2963_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2875_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void ArgumentCache_t2882_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void PersistentCall_t2886_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void PersistentCall_t2886_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void PersistentCall_t2886_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void PersistentCall_t2886_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void PersistentCall_t2886_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2888_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var;
void UnityEventBase_t2891_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1108 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1108 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1108_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6229(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t805_il2cpp_TypeInfo_var;
void UnityEventBase_t2891_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t805 * tmp;
		tmp = (SerializeField_t805 *)il2cpp_codegen_object_new (SerializeField_t805_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1107_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2892_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1956);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1107 * tmp;
		tmp = (AddComponentMenu_t1107 *)il2cpp_codegen_object_new (AddComponentMenu_t1107_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6228(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2893_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1108_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8003(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m8002(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t808_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2896_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t808 * tmp;
		tmp = (AttributeUsageAttribute_t808 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t808_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4482(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[820] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2681_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8682,
	AssetBundleCreateRequest_t2681_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8683,
	AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8687,
	AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8688,
	AssetBundle_t2683_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8689,
	LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8692,
	LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8693,
	LayerMask_t899_CustomAttributesCacheGenerator_LayerMask_t899_LayerMask_GetMask_m8694_Arg0_ParameterInfo,
	RuntimePlatform_t786_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t786_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t786_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4335,
	SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8695,
	SystemInfo_t2687_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7778,
	Coroutine_t952_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8698,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8700,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8700_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8701,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8703,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8708,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8709,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8710,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8711,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8712,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8713,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8714,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8715,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8716,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8717,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8718,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8719,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8720,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8721,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8722,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8723,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8724,
	GameCenterPlatform_t801_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8726,
	GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8770,
	GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8771,
	GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8772,
	GcLeaderboard_t2699_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8773,
	MeshFilter_t792_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4188,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8774,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_t522_Mesh_Internal_Create_m8774_Arg0_ParameterInfo,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_vertices_m4337,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_uv_m4339,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4340,
	Mesh_t522_CustomAttributesCacheGenerator_Mesh_set_triangles_m4338,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_enabled_m4022,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_material_m4001,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_material_m4003,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_materials_m4281,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_bounds_m4031,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5868,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5869,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_get_width_m3661,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_get_height_m3676,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_get_dpi_m3783,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4096,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4097,
	Screen_t2701_CustomAttributesCacheGenerator_Screen_get_orientation_m3675,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8796,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8797,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8801,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8801_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5910,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5984,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8802,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8802_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8802_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3701,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3700,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8803,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3702,
	RenderTexture_t2702_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8804,
	RenderTexture_t2702_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8805,
	GUILayer_t2705_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8809,
	Gradient_t2708_CustomAttributesCacheGenerator_Gradient_Init_m8813,
	Gradient_t2708_CustomAttributesCacheGenerator_Gradient_Cleanup_m8814,
	GUI_t705_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t705_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t705_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8821,
	GUI_t705_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8822,
	GUI_t705_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8823,
	GUI_t705_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8824,
	GUI_t705_CustomAttributesCacheGenerator_GUI_set_changed_m8826,
	GUI_t705_CustomAttributesCacheGenerator_GUI_get_enabled_m8827,
	GUI_t705_CustomAttributesCacheGenerator_GUI_set_enabled_m3694,
	GUI_t705_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8829,
	GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8832,
	GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8835,
	GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8842,
	GUI_t705_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8849,
	GUI_t705_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8851,
	GUI_t705_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8858,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Label_m3672_Arg1_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Box_m3688_Arg1_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Button_m3670_Arg1_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_TextField_m3673_Arg1_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_TextField_m4109_Arg2_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_Toggle_m3718_Arg2_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_SelectionGrid_m3716_Arg3_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_SelectionGrid_m8865_Arg4_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginHorizontal_m3671_Arg0_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginHorizontal_m8866_Arg2_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginVertical_m3685_Arg0_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginVertical_m8867_Arg2_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginScrollView_m3693_Arg1_ParameterInfo,
	GUILayout_t2711_CustomAttributesCacheGenerator_GUILayout_t2711_GUILayout_BeginScrollView_m8868_Arg6_ParameterInfo,
	GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8883,
	GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8885,
	GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8886,
	GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_t704_GUILayoutUtility_GetRect_m8889_Arg2_ParameterInfo,
	GUILayoutUtility_t704_CustomAttributesCacheGenerator_GUILayoutUtility_t704_GUILayoutUtility_GetRect_m8891_Arg3_ParameterInfo,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8933,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8937,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8941,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8942,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8943,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8944,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8945,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8946,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8948,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8950,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8954,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8955,
	GUIUtility_t2723_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8956,
	GUIClip_t2724_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8958,
	GUIClip_t2724_CustomAttributesCacheGenerator_GUIClip_Pop_m8959,
	GUISettings_t2725_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2725_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2725_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2725_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2725_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t780_CustomAttributesCacheGenerator,
	GUISkin_t780_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t780_CustomAttributesCacheGenerator_m_box,
	GUISkin_t780_CustomAttributesCacheGenerator_m_button,
	GUISkin_t780_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t780_CustomAttributesCacheGenerator_m_label,
	GUISkin_t780_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t780_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t780_CustomAttributesCacheGenerator_m_window,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t780_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t780_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t780_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t780_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t780_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t782_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t782_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t782_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_Init_m9028,
	GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9029,
	GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9030,
	GUIStyleState_t725_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9031,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_Init_m9034,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9035,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_left_m6173,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_left_m9036,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_right_m9037,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_right_m9038,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_top_m6174,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_top_m9039,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4120,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9040,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6167,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6168,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9042,
	RectOffset_t700_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9044,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9048,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9049,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9050,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9051,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9052,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9053,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9055,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9056,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9057,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3662,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9058,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3663,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9059,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9060,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9061,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3667,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9062,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3666,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9063,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3763,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3764,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9066,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9069,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9070_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9072,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9073,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9077,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9079,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9081,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9084,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9087,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9089,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6070,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6071,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg1_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg2_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg3_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg4_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg5_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_t947_TouchScreenKeyboard_Open_m9090_Arg6_ParameterInfo,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6011,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6012,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6069,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6010,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6068,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6022,
	TouchScreenKeyboard_t947_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6021,
	Event_t783_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t783_CustomAttributesCacheGenerator_Event_Init_m9091,
	Event_t783_CustomAttributesCacheGenerator_Event_Cleanup_m9093,
	Event_t783_CustomAttributesCacheGenerator_Event_get_rawType_m6035,
	Event_t783_CustomAttributesCacheGenerator_Event_get_type_m4117,
	Event_t783_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9094,
	Event_t783_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9096,
	Event_t783_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9098,
	Event_t783_CustomAttributesCacheGenerator_Event_get_modifiers_m6031,
	Event_t783_CustomAttributesCacheGenerator_Event_get_character_m6033,
	Event_t783_CustomAttributesCacheGenerator_Event_get_commandName_m9099,
	Event_t783_CustomAttributesCacheGenerator_Event_get_keyCode_m6032,
	Event_t783_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9100,
	Event_t783_CustomAttributesCacheGenerator_Event_Use_m9102,
	Event_t783_CustomAttributesCacheGenerator_Event_PopEvent_m6036,
	EventModifiers_t2734_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t536_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t755_CustomAttributesCacheGenerator,
	Quaternion_t788_CustomAttributesCacheGenerator,
	Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9128,
	Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9131,
	Quaternion_t788_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9133,
	Matrix4x4_t1083_CustomAttributesCacheGenerator,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9149,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9151,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9153,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9156,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9168,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9171,
	Matrix4x4_t1083_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9172,
	Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9189,
	Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9192,
	Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9195,
	Bounds_t765_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9199,
	Vector4_t1043_CustomAttributesCacheGenerator,
	Mathf_t727_CustomAttributesCacheGenerator_Mathf_t727_Mathf_SmoothDamp_m6092_Arg4_ParameterInfo,
	Mathf_t727_CustomAttributesCacheGenerator_Mathf_t727_Mathf_SmoothDamp_m6092_Arg5_ParameterInfo,
	DrivenTransformProperties_t2736_CustomAttributesCacheGenerator,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9230,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9231,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9232,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9233,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9234,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9235,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9236,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9237,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9238,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9239,
	RectTransform_t543_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9240,
	Resources_t790_CustomAttributesCacheGenerator_Resources_Load_m4143,
	TextAsset_t779_CustomAttributesCacheGenerator_TextAsset_get_text_m4100,
	SerializePrivateVariables_t2740_CustomAttributesCacheGenerator,
	Shader_t2741_CustomAttributesCacheGenerator_Shader_PropertyToID_m9248,
	Material_t523_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9251,
	Material_t523_CustomAttributesCacheGenerator_Material_SetTexture_m9253,
	Material_t523_CustomAttributesCacheGenerator_Material_GetTexture_m9255,
	Material_t523_CustomAttributesCacheGenerator_Material_SetFloat_m9257,
	Material_t523_CustomAttributesCacheGenerator_Material_HasProperty_m9258,
	Material_t523_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9259,
	Material_t523_CustomAttributesCacheGenerator_Material_t523_Material_Internal_CreateWithMaterial_m9259_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9262,
	SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9265,
	SphericalHarmonicsL2_t2742_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9268,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_rect_m5963,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5959,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_texture_m5956,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5981,
	Sprite_t510_CustomAttributesCacheGenerator_Sprite_get_border_m5957,
	SpriteRenderer_t656_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9278,
	SpriteRenderer_t656_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9279,
	DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5969,
	DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5968,
	DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5962,
	DataUtility_t2743_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9280,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9283,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9284,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4198,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9285_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9286,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9289,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3854,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9290,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7737,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7743,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3705,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9293_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3704,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9295_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9295_Arg3_ParameterInfo,
	WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_URLEncode_m9299_Arg1_ParameterInfo,
	WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_QPEncode_m9301_Arg1_ParameterInfo,
	WWWTranscoder_t2745_CustomAttributesCacheGenerator_WWWTranscoder_t2745_WWWTranscoder_SevenBitClean_m9304_Arg1_ParameterInfo,
	CacheIndex_t2746_CustomAttributesCacheGenerator,
	UnityString_t2747_CustomAttributesCacheGenerator_UnityString_t2747_UnityString_Format_m9306_Arg1_ParameterInfo,
	AsyncOperation_t2682_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9308,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3755,
	Application_t1512_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9315,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_isPlaying_m4140,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_isEditor_m6074,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4066,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_platform_m3769,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4296,
	Application_t1512_CustomAttributesCacheGenerator_Application_t1512_Application_ExternalCall_m4067_Arg1_ParameterInfo,
	Application_t1512_CustomAttributesCacheGenerator_Application_t1512_Application_BuildInvocationForArguments_m9317_Arg1_ParameterInfo,
	Application_t1512_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9318,
	Application_t1512_CustomAttributesCacheGenerator_Application_get_unityVersion_m4144,
	Application_t1512_CustomAttributesCacheGenerator_Application_OpenURL_m3960,
	Application_t1512_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9320,
	Application_t1512_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1512_CustomAttributesCacheGenerator_Application_t1512____persistentDataPath_PropertyInfo,
	Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5806,
	Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6043,
	Behaviour_t1093_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5807,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5860,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5859,
	Camera_t574_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4315,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_depth_m5772,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5872,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_eventMask_m9327,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9328,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9329,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9330,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9332,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9333,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9334,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9335,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9336,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9337,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_main_m4007,
	Camera_t574_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9338,
	Camera_t574_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9339,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9344,
	Camera_t574_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9346,
	CameraCallback_t2748_CustomAttributesCacheGenerator,
	Debug_t2749_CustomAttributesCacheGenerator_Debug_Internal_Log_m9347,
	Debug_t2749_CustomAttributesCacheGenerator_Debug_t2749_Debug_Internal_Log_m9347_Arg2_ParameterInfo,
	Debug_t2749_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9348,
	Debug_t2749_CustomAttributesCacheGenerator_Debug_t2749_Debug_Internal_LogException_m9348_Arg1_ParameterInfo,
	Debug_t2749_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4065,
	Display_t2752_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9373,
	Display_t2752_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9374,
	Display_t2752_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9375,
	Display_t2752_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9376,
	Display_t2752_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9377,
	Display_t2752_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9378,
	Display_t2752_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9379,
	Display_t2752_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9380,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4015,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4014,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9381,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9382,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9383,
	Input_t707_CustomAttributesCacheGenerator_Input_GetAxis_m4327,
	Input_t707_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5851,
	Input_t707_CustomAttributesCacheGenerator_Input_GetButtonDown_m5850,
	Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButton_m4228,
	Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4010,
	Input_t707_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4227,
	Input_t707_CustomAttributesCacheGenerator_Input_get_mousePosition_m4008,
	Input_t707_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5824,
	Input_t707_CustomAttributesCacheGenerator_Input_get_mousePresent_m5849,
	Input_t707_CustomAttributesCacheGenerator_Input_GetTouch_m3690,
	Input_t707_CustomAttributesCacheGenerator_Input_get_touchCount_m3689,
	Input_t707_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6072,
	Input_t707_CustomAttributesCacheGenerator_Input_get_compositionString_m6013,
	Input_t707_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9385,
	HideFlags_t2755_CustomAttributesCacheGenerator,
	Object_t703_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9387,
	Object_t703_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9389,
	Object_t703_CustomAttributesCacheGenerator_Object_Destroy_m9390,
	Object_t703_CustomAttributesCacheGenerator_Object_t703_Object_Destroy_m9390_Arg1_ParameterInfo,
	Object_t703_CustomAttributesCacheGenerator_Object_Destroy_m3900,
	Object_t703_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9391,
	Object_t703_CustomAttributesCacheGenerator_Object_t703_Object_DestroyImmediate_m9391_Arg1_ParameterInfo,
	Object_t703_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6073,
	Object_t703_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9392,
	Object_t703_CustomAttributesCacheGenerator_Object_get_name_m3757,
	Object_t703_CustomAttributesCacheGenerator_Object_set_name_m6134,
	Object_t703_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t703_CustomAttributesCacheGenerator_Object_set_hideFlags_m6046,
	Object_t703_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t703_CustomAttributesCacheGenerator_Object_Instantiate_m4161,
	Object_t703_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9398,
	Component_t761_CustomAttributesCacheGenerator_Component_get_transform_m4036,
	Component_t761_CustomAttributesCacheGenerator_Component_get_gameObject_m3756,
	Component_t761_CustomAttributesCacheGenerator_Component_GetComponent_m6180,
	Component_t761_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9400,
	Component_t761_CustomAttributesCacheGenerator_Component_GetComponent_m10208,
	Component_t761_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9401,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9403,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9404,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10212,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9405,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9406,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4039,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6048,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6049,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3956,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5808,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4330,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4224,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9407,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9407_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9407_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9408,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9409,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9410,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9410_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9415,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9416,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9417,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9418,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9419,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9420,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9421,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9422,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9423,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9424,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9425,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9426,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4162,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9427,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4303,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9428_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9429,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9430,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9431,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4308,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6047,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4163,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4307,
	Time_t2757_CustomAttributesCacheGenerator_Time_get_time_m4141,
	Time_t2757_CustomAttributesCacheGenerator_Time_get_deltaTime_m4147,
	Time_t2757_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5853,
	Time_t2757_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5884,
	Time_t2757_CustomAttributesCacheGenerator_Time_set_timeScale_m3961,
	Random_t2758_CustomAttributesCacheGenerator_Random_set_seed_m4251,
	Random_t2758_CustomAttributesCacheGenerator_Random_Range_m4197,
	Random_t2758_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9433,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9436,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7732,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_t2760_PlayerPrefs_GetString_m7732_Arg1_ParameterInfo,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3920,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3919,
	PlayerPrefs_t2760_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7735,
	LocalNotification_t2761_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9438,
	RemoteNotification_t2762_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9440,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9443,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9444,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9446,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9447,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9448,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9449,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9450,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9451,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9452,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9454,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9455,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9457,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9458,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9459,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9460,
	NotificationServices_t2764_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9461,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9479,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m9480_Arg3_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m9480_Arg4_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_Raycast_m4011,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m5936_Arg2_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_Raycast_m5936_Arg3_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m5874_Arg1_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m5874_Arg2_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m9481_Arg2_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_t2766_Physics_RaycastAll_m9481_Arg3_ParameterInfo,
	Physics_t2766_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9482,
	Collider_t764_CustomAttributesCacheGenerator_Collider_set_enabled_m4023,
	Collider_t764_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9483,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4229,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_IgnoreLayerCollision_m4229_Arg2_ParameterInfo,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9487,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_Raycast_m5937,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg2_ParameterInfo,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg3_ParameterInfo,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg4_ParameterInfo,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_t796_Physics2D_Raycast_m9488_Arg5_ParameterInfo,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5863,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9489,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4223,
	Physics2D_t796_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9490,
	Collider2D_t699_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4291,
	Collider2D_t699_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9492,
	CircleCollider2D_t619_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4290,
	CircleCollider2D_t619_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4289,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_set_clip_m3999,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Play_m9508,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_t611_AudioSource_Play_m9508_Arg0_ParameterInfo,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Play_m4284,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4306,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_Stop_m4000,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4285,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9509,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_t611_AudioSource_PlayOneShot_m9509_Arg1_ParameterInfo,
	AudioSource_t611_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4013,
	AnimationEvent_t2777_CustomAttributesCacheGenerator_AnimationEvent_t2777____data_PropertyInfo,
	AnimationCurve_t2781_CustomAttributesCacheGenerator,
	AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_t2781_AnimationCurve__ctor_m9535_Arg0_ParameterInfo,
	AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9537,
	AnimationCurve_t2781_CustomAttributesCacheGenerator_AnimationCurve_Init_m9539,
	AnimatorStateInfo_t2778_CustomAttributesCacheGenerator_AnimatorStateInfo_t2778____nameHash_PropertyInfo,
	Animator_t666_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6126,
	Animator_t666_CustomAttributesCacheGenerator_Animator_StringToHash_m9558,
	Animator_t666_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9559,
	Animator_t666_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9560,
	Animator_t666_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9561,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4005,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4006,
	CharacterInfo_t2787_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2787_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2787_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2787_CustomAttributesCacheGenerator_flipped,
	Font_t914_CustomAttributesCacheGenerator_Font_get_material_m6138,
	Font_t914_CustomAttributesCacheGenerator_Font_HasCharacter_m6034,
	Font_t914_CustomAttributesCacheGenerator_Font_get_dynamic_m6140,
	Font_t914_CustomAttributesCacheGenerator_Font_get_fontSize_m6141,
	FontTextureRebuildCallback_t2788_CustomAttributesCacheGenerator,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_Init_m9589,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9590,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9593,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6045,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9594,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9595,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9596,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9597,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9598,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9599,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6027,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9600,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9601,
	TextGenerator_t950_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6061,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5933,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6155,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4206,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9612,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4342,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6158,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5960,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6159,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5920,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5935,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5934,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5941,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5907,
	Canvas_t674_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6137,
	CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6118,
	CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9614,
	CanvasGroup_t1065_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5919,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9617,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5923,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6190,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5915,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9618,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9619,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5911,
	CanvasRenderer_t919_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5908,
	RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9621,
	RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9623,
	RectTransformUtility_t1067_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5922,
	Request_t2792_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2792_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2792_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2792_CustomAttributesCacheGenerator_Request_get_sourceId_m9628,
	Request_t2792_CustomAttributesCacheGenerator_Request_get_appId_m9629,
	Request_t2792_CustomAttributesCacheGenerator_Request_get_domain_m9630,
	Response_t2794_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2794_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2794_CustomAttributesCacheGenerator_Response_get_success_m9639,
	Response_t2794_CustomAttributesCacheGenerator_Response_set_success_m9640,
	Response_t2794_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9641,
	Response_t2794_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9642,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9647,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9648,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9649,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9650,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9651,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9652,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9653,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9654,
	CreateMatchRequest_t2797_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9655,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9658,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9659,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9660,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9661,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9662,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9663,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9664,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9665,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9666,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9667,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9668,
	CreateMatchResponse_t2798_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9669,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9673,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9674,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9675,
	JoinMatchRequest_t2799_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9676,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9679,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9680,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9681,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9682,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9683,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9684,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9685,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9686,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9687,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9688,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9689,
	JoinMatchResponse_t2800_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9690,
	DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9694,
	DestroyMatchRequest_t2801_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9695,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9698,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9699,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9700,
	DropConnectionRequest_t2802_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9701,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9704,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9705,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9706,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9707,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9708,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9709,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9710,
	ListMatchRequest_t2803_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9711,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9714,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9715,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9716,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9717,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9718,
	MatchDirectConnectInfo_t2804_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9719,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9723,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9724,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_name_m9725,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_name_m9726,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9727,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9728,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9729,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9730,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9731,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9732,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9733,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9734,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9735,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9736,
	MatchDesc_t2806_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9737,
	ListMatchResponse_t2808_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2808_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9741,
	ListMatchResponse_t2808_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9742,
	AppID_t2809_CustomAttributesCacheGenerator,
	SourceID_t2810_CustomAttributesCacheGenerator,
	NetworkID_t2811_CustomAttributesCacheGenerator,
	NodeID_t2812_CustomAttributesCacheGenerator,
	NetworkMatch_t2817_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10224,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10230,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10231,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10233,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2968_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10234,
	JsonArray_t2818_CustomAttributesCacheGenerator,
	JsonObject_t2819_CustomAttributesCacheGenerator,
	SimpleJson_t2822_CustomAttributesCacheGenerator,
	SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9787,
	SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9799,
	SimpleJson_t2822_CustomAttributesCacheGenerator_SimpleJson_t2822____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2820_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2820_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10238,
	PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9816,
	PocoJsonSerializerStrategy_t2821_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9817,
	ReflectionUtils_t2834_CustomAttributesCacheGenerator,
	ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetConstructorInfo_m9842_Arg1_ParameterInfo,
	ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetContructor_m9847_Arg1_ParameterInfo,
	ReflectionUtils_t2834_CustomAttributesCacheGenerator_ReflectionUtils_t2834_ReflectionUtils_GetConstructorByReflection_m9849_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2971_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2828_CustomAttributesCacheGenerator_ConstructorDelegate_t2828_ConstructorDelegate_Invoke_m9827_Arg0_ParameterInfo,
	ConstructorDelegate_t2828_CustomAttributesCacheGenerator_ConstructorDelegate_t2828_ConstructorDelegate_BeginInvoke_m9828_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2829_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2830_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2831_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2832_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2833_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2836_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1114_CustomAttributesCacheGenerator,
	RequireComponent_t809_CustomAttributesCacheGenerator,
	WritableAttribute_t2842_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2843_CustomAttributesCacheGenerator,
	GUIStateObjects_t2854_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9882,
	Achievement_t2857_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2857_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2857_CustomAttributesCacheGenerator_Achievement_get_id_m9904,
	Achievement_t2857_CustomAttributesCacheGenerator_Achievement_set_id_m9905,
	Achievement_t2857_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9906,
	Achievement_t2857_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9907,
	AchievementDescription_t2858_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2858_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9914,
	AchievementDescription_t2858_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9915,
	Score_t2859_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2859_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2859_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9924,
	Score_t2859_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9925,
	Score_t2859_CustomAttributesCacheGenerator_Score_get_value_m9926,
	Score_t2859_CustomAttributesCacheGenerator_Score_set_value_m9927,
	Leaderboard_t2698_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2698_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2698_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2698_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_id_m9935,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_id_m9936,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9937,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9938,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_range_m9939,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_range_m9940,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9941,
	Leaderboard_t2698_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9942,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1117_CustomAttributesCacheGenerator,
	SpaceAttribute_t1115_CustomAttributesCacheGenerator,
	RangeAttribute_t1113_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1118_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1116_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9986,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9988,
	SharedBetweenAnimatorsAttribute_t2875_CustomAttributesCacheGenerator,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2882_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2886_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2886_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2886_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2886_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2886_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2888_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2891_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2891_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2892_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2893_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2894_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1108_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2896_CustomAttributesCacheGenerator,
};
