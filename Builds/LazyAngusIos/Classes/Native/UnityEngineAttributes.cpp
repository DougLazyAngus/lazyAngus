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
extern TypeInfo* InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t616_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2209);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t616 * tmp;
		tmp = (ExtensionAttribute_t616 *)il2cpp_codegen_object_new (ExtensionAttribute_t616_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m2985(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1272 * tmp;
		tmp = (InternalsVisibleToAttribute_t1272 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1272_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6498(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t975_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t975_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_t708_LayerMask_GetMask_m5013_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void RuntimePlatform_t981_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void RuntimePlatform_t981_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SystemInfo_t982_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Coroutine_t763_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5019_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MeshFilter_t606_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m5095_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m2878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_set_enabled_m2725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_material_m2703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_set_material_m2705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_bounds_m2734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_get_width_m2427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_get_height_m2443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_get_dpi_m4782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Screen_t997_CustomAttributesCacheGenerator_Screen_get_orientation_m2442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5122_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5123_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5123_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RenderTexture_t998_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RenderTexture_t998_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUILayer_t1001_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Gradient_t1004_CustomAttributesCacheGenerator_Gradient_Init_m5134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Gradient_t1004_CustomAttributesCacheGenerator_Gradient_Cleanup_m5135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_set_changed_m5147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_get_enabled_m5148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_set_enabled_m2461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Label_m2439_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Box_m2455_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Button_m2437_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_TextField_m2440_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_TextField_m2813_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Toggle_m2486_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_SelectionGrid_m2484_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_SelectionGrid_m5186_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginHorizontal_m2438_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginHorizontal_m5187_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginVertical_m2452_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginVertical_m5188_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginScrollView_m2460_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginScrollView_m5189_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_t529_GUILayoutUtility_GetRect_m5210_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_t529_GUILayoutUtility_GetRect_m5212_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIClip_t1020_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIClip_t1020_CustomAttributesCacheGenerator_GUIClip_Pop_m5280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISettings_t1021_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISettings_t1021_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISettings_t1021_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISettings_t1021_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISettings_t1021_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t926_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1556);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t926 * tmp;
		tmp = (ExecuteInEditMode_t926 *)il2cpp_codegen_object_new (ExecuteInEditMode_t926_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4891(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUISkin_t597_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUIContent_t599_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUIContent_t599_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void GUIContent_t599_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_Init_m5349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_Init_m5356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_left_m4799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_left_m5358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_right_m5359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_right_m5360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_top_m4800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_top_m5361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5392_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Init_m5413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Cleanup_m5415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_rawType_m4654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_type_m2821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_modifiers_m4650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_character_m4652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_commandName_m5421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_get_keyCode_m4651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_Use_m5424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Event_t600_CustomAttributesCacheGenerator_Event_PopEvent_m4655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t916_il2cpp_TypeInfo_var;
void EventModifiers_t1031_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1551);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t916 * tmp;
		tmp = (FlagsAttribute_t916 *)il2cpp_codegen_object_new (FlagsAttribute_t916_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4836(tmp, NULL);
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
void Vector3_t414_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1132_il2cpp_TypeInfo_var;
void Color32_t572_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2215);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1132 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1132 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1132_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6151(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t601_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t855_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Mathf_t608_CustomAttributesCacheGenerator_Mathf_t608_Mathf_SmoothDamp_m4716_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Mathf_t608_CustomAttributesCacheGenerator_Mathf_t608_Mathf_SmoothDamp_m4716_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t916_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1033_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1551);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t916 * tmp;
		tmp = (FlagsAttribute_t916 *)il2cpp_codegen_object_new (FlagsAttribute_t916_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4836(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Resources_t604_CustomAttributesCacheGenerator_Resources_Load_m5568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextAsset_t596_CustomAttributesCacheGenerator_TextAsset_get_text_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1037_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Shader_t1038_CustomAttributesCacheGenerator_Shader_PropertyToID_m5571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5579_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_rect_m4580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_texture_m4573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_border_m4574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5605_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5614_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5616_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5616_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_URLEncode_m5620_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_QPEncode_m5622_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_SevenBitClean_m5625_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void CacheIndex_t1043_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void UnityString_t1044_CustomAttributesCacheGenerator_UnityString_t1044_UnityString_Format_m5627_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AsyncOperation_t976_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_isPlaying_m4696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_isEditor_m4698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_platform_m2681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m2950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_t1045_Application_ExternalCall_m2770_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_t1045_Application_BuildInvocationForArguments_m5636_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_OpenURL_m2675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1274_il2cpp_TypeInfo_var;
void Application_t1045_CustomAttributesCacheGenerator_Application_t1045____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2216);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1274 * tmp;
		tmp = (SecurityCriticalAttribute_t1274 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1274_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m6504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m2967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_depth_m4385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_eventMask_m5645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_main_m2709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var;
void CameraCallback_t1046_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1275 * tmp;
		tmp = (EditorBrowsableAttribute_t1275 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6505(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Debug_t1047_CustomAttributesCacheGenerator_Debug_Internal_Log_m5666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void Debug_t1047_CustomAttributesCacheGenerator_Debug_t1047_Debug_Internal_Log_m5666_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Debug_t1047_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void Debug_t1047_CustomAttributesCacheGenerator_Debug_t1047_Debug_Internal_LogException_m5667_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Debug_t1047_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Display_t1050_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetAxis_m2972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetButtonDown_m4464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButton_m2917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m2916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_get_mousePosition_m2710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_get_mousePresent_m4463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_GetTouch_m2457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_get_touchCount_m2456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_get_compositionString_m4632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Input_t532_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t916_il2cpp_TypeInfo_var;
void HideFlags_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1551);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t916 * tmp;
		tmp = (FlagsAttribute_t916 *)il2cpp_codegen_object_new (FlagsAttribute_t916_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4836(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_Destroy_m5709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_t528_Object_Destroy_m5709_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_Destroy_m2615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_t528_Object_DestroyImmediate_m5710_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_get_name_m4668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_set_name_m4758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_set_hideFlags_m4669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_ToString_m3123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_Instantiate_m2845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void Object_t528_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_get_transform_m2739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_get_gameObject_m2533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_GetComponent_m4806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_GetComponent_m6507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Component_t578_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m2976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m2912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5726_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5726_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1192 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1192 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1192_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6361(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1138_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5729_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2212);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1138 * tmp;
		tmp = (WritableAttribute_t1138 *)il2cpp_codegen_object_new (WritableAttribute_t1138_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6159(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m2957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5746_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m2962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m2961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Time_t1055_CustomAttributesCacheGenerator_Time_get_time_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Time_t1055_CustomAttributesCacheGenerator_Time_get_deltaTime_m2899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Time_t1055_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Time_t1055_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Time_t1055_CustomAttributesCacheGenerator_Time_set_timeScale_m2676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Random_t1056_CustomAttributesCacheGenerator_Random_set_seed_m2921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Random_t1056_CustomAttributesCacheGenerator_Random_Range_m2932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Random_t1056_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_t1058_PlayerPrefs_GetString_m5754_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m5773_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m5773_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_Raycast_m2713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m4553_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m4553_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m4489_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m4489_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m5774_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m5774_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics_t1060_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Collider_t581_CustomAttributesCacheGenerator_Collider_set_enabled_m2726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Collider_t581_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m2898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_IgnoreLayerCollision_m2898_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_Raycast_m4554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m2911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Collider2D_t468_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m2946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Collider2D_t468_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_set_clip_m2701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Play_m5801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_t393_AudioSource_Play_m5801_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Play_m2868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m2880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Stop_m2702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m2943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1189_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_t393_AudioSource_PlayOneShot_m5802_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1189 * tmp;
		tmp = (DefaultValueAttribute_t1189 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1189_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6356(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var;
void AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1190 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1190 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1190_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void AnimationEvent_t1071_CustomAttributesCacheGenerator_AnimationEvent_t1071____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1075_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_t1075_AnimationCurve__ctor_m5828_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_Init_m5832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1072_CustomAttributesCacheGenerator_AnimatorStateInfo_t1072____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Animator_t495_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Animator_t495_CustomAttributesCacheGenerator_Animator_StringToHash_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Animator_t495_CustomAttributesCacheGenerator_Animator_SetIntegerString_m5852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Animator_t495_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Animator_t495_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void CharacterInfo_t1081_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void CharacterInfo_t1081_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void CharacterInfo_t1081_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t621_il2cpp_TypeInfo_var;
void CharacterInfo_t1081_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t621 * tmp;
		tmp = (ObsoleteAttribute_t621 *)il2cpp_codegen_object_new (ObsoleteAttribute_t621_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3109(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Font_t723_CustomAttributesCacheGenerator_Font_get_material_m4762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Font_t723_CustomAttributesCacheGenerator_Font_HasCharacter_m4653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Font_t723_CustomAttributesCacheGenerator_Font_get_dynamic_m4764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Font_t723_CustomAttributesCacheGenerator_Font_get_fontSize_m4765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1082_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1275 * tmp;
		tmp = (EditorBrowsableAttribute_t1275 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6505(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_Init_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m5905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void Canvas_t374_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m2963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1131_il2cpp_TypeInfo_var;
void RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1131 * tmp;
		tmp = (WrapperlessIcall_t1131 *)il2cpp_codegen_object_new (WrapperlessIcall_t1131_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6150(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_Request_get_sourceId_m5921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_Request_get_appId_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1086_CustomAttributesCacheGenerator_Request_get_domain_m5923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_Response_get_success_m5932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_Response_set_success_m5933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1088_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_name_m6018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_name_m6019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1102_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1102_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1102_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1103_il2cpp_TypeInfo_var;
void AppID_t1103_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2218);
		AppID_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2108);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1277 * tmp;
		tmp = (DefaultValueAttribute_t1277 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1277_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6522(tmp, Box(AppID_t1103_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1104_il2cpp_TypeInfo_var;
void SourceID_t1104_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2218);
		SourceID_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2107);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1277 * tmp;
		tmp = (DefaultValueAttribute_t1277 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1277_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6522(tmp, Box(SourceID_t1104_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1105_il2cpp_TypeInfo_var;
void NetworkID_t1105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2218);
		NetworkID_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2110);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1277 * tmp;
		tmp = (DefaultValueAttribute_t1277 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1277_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6522(tmp, Box(NetworkID_t1105_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1106_il2cpp_TypeInfo_var;
void NodeID_t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2218);
		NodeID_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2111);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1277 * tmp;
		tmp = (DefaultValueAttribute_t1277 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1277_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6522(tmp, Box(NodeID_t1106_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1111_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6523(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6529(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6530(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6532(CustomAttributesCache* cache)
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
extern TypeInfo* EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
void JsonArray_t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1275 * tmp;
		tmp = (EditorBrowsableAttribute_t1275 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6505(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void JsonObject_t1113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1275 * tmp;
		tmp = (EditorBrowsableAttribute_t1275 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6505(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
void SimpleJson_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var;
void SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1281 * tmp;
		tmp = (SuppressMessageAttribute_t1281 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6534(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6535(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var;
void SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1281 * tmp;
		tmp = (SuppressMessageAttribute_t1281 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6534(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var;
void SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_t1116____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1275 * tmp;
		tmp = (EditorBrowsableAttribute_t1275 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1275_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6505(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1114_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1281 * tmp;
		tmp = (SuppressMessageAttribute_t1281 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6534(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6535(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1281 * tmp;
		tmp = (SuppressMessageAttribute_t1281 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6534(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6535(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1281 * tmp;
		tmp = (SuppressMessageAttribute_t1281 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1281_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6534(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6535(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var;
void ReflectionUtils_t1130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1280 * tmp;
		tmp = (GeneratedCodeAttribute_t1280 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1280_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6533(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetConstructorInfo_m6134_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetContructor_m6139_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetConstructorByReflection_m6141_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1282_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1123_CustomAttributesCacheGenerator_ConstructorDelegate_t1123_ConstructorDelegate_Invoke_m6119_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t617_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1123_CustomAttributesCacheGenerator_ConstructorDelegate_t1123_ConstructorDelegate_BeginInvoke_m6120_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t617 * tmp;
		tmp = (ParamArrayAttribute_t617 *)il2cpp_codegen_object_new (ParamArrayAttribute_t617_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3004(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1125_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1127_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1128_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1129_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1132_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t927_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void RequireComponent_t921_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void WritableAttribute_t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void GUIStateObjects_t1151_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_Achievement_get_id_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_Achievement_set_id_m6195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1154_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1155_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1155_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1155_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_Score_get_value_m6216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1156_CustomAttributesCacheGenerator_Score_set_value_m6217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_id_m6225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_id_m6226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_range_m6229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_range_m6230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void PropertyAttribute_t1167_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void TooltipAttribute_t930_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void SpaceAttribute_t928_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void RangeAttribute_t925_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void TextAreaAttribute_t931_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var;
void StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1273 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1273 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1273_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1171_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void ArgumentCache_t1178_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void PersistentCall_t1182_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void PersistentCall_t1182_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void PersistentCall_t1182_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void PersistentCall_t1182_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void PersistentCall_t1182_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1184_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var;
void UnityEventBase_t1187_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t919 * tmp;
		tmp = (FormerlySerializedAsAttribute_t919 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t919_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4855(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t623_il2cpp_TypeInfo_var;
void UnityEventBase_t1187_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t623 * tmp;
		tmp = (SerializeField_t623 *)il2cpp_codegen_object_new (SerializeField_t623_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3114(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t918_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1188_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1552);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t918 * tmp;
		tmp = (AddComponentMenu_t918 *)il2cpp_codegen_object_new (AddComponentMenu_t918_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m4854(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1189_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1190_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t919_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6561(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6560(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t622_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t622 * tmp;
		tmp = (AttributeUsageAttribute_t622 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t622_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3111(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[786] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t975_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5001,
	AssetBundleCreateRequest_t975_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5002,
	AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5006,
	AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5007,
	AssetBundle_t977_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5008,
	LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5011,
	LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5012,
	LayerMask_t708_CustomAttributesCacheGenerator_LayerMask_t708_LayerMask_GetMask_m5013_Arg0_ParameterInfo,
	RuntimePlatform_t981_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t981_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t981_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t982_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5014,
	Coroutine_t763_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5017,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5019,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5019_Arg0_ParameterInfo,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5020,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5022,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5027,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5028,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5029,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5030,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5031,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5032,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5033,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5034,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5035,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5036,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5037,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5038,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5039,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5040,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5041,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5042,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5043,
	GameCenterPlatform_t993_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5047,
	GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5091,
	GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5092,
	GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5093,
	GcLeaderboard_t995_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5094,
	MeshFilter_t606_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2876,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5095,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m5095_Arg0_ParameterInfo,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m2877,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m2878,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_set_enabled_m2725,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_material_m2703,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_set_material_m2705,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_bounds_m2734,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4483,
	Renderer_t519_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4484,
	Screen_t997_CustomAttributesCacheGenerator_Screen_get_width_m2427,
	Screen_t997_CustomAttributesCacheGenerator_Screen_get_height_m2443,
	Screen_t997_CustomAttributesCacheGenerator_Screen_get_dpi_m4782,
	Screen_t997_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2800,
	Screen_t997_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2801,
	Screen_t997_CustomAttributesCacheGenerator_Screen_get_orientation_m2442,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5117,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5118,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5122,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5122_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4526,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4603,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5123,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5123_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5123_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2469,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2468,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5124,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2470,
	RenderTexture_t998_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5125,
	RenderTexture_t998_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5126,
	GUILayer_t1001_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5130,
	Gradient_t1004_CustomAttributesCacheGenerator_Gradient_Init_m5134,
	Gradient_t1004_CustomAttributesCacheGenerator_Gradient_Cleanup_m5135,
	GUI_t530_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t530_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t530_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5142,
	GUI_t530_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5143,
	GUI_t530_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5144,
	GUI_t530_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5145,
	GUI_t530_CustomAttributesCacheGenerator_GUI_set_changed_m5147,
	GUI_t530_CustomAttributesCacheGenerator_GUI_get_enabled_m5148,
	GUI_t530_CustomAttributesCacheGenerator_GUI_set_enabled_m2461,
	GUI_t530_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5150,
	GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5153,
	GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5156,
	GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5163,
	GUI_t530_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5170,
	GUI_t530_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5172,
	GUI_t530_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5179,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Label_m2439_Arg1_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Box_m2455_Arg1_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Button_m2437_Arg1_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_TextField_m2440_Arg1_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_TextField_m2813_Arg2_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_Toggle_m2486_Arg2_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_SelectionGrid_m2484_Arg3_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_SelectionGrid_m5186_Arg4_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginHorizontal_m2438_Arg0_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginHorizontal_m5187_Arg2_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginVertical_m2452_Arg0_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginVertical_m5188_Arg2_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginScrollView_m2460_Arg1_ParameterInfo,
	GUILayout_t1007_CustomAttributesCacheGenerator_GUILayout_t1007_GUILayout_BeginScrollView_m5189_Arg6_ParameterInfo,
	GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5204,
	GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5206,
	GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5207,
	GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_t529_GUILayoutUtility_GetRect_m5210_Arg2_ParameterInfo,
	GUILayoutUtility_t529_CustomAttributesCacheGenerator_GUILayoutUtility_t529_GUILayoutUtility_GetRect_m5212_Arg3_ParameterInfo,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5254,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5258,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5262,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5263,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5264,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5265,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5266,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5267,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5269,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5271,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5275,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5276,
	GUIUtility_t1019_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5277,
	GUIClip_t1020_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5279,
	GUIClip_t1020_CustomAttributesCacheGenerator_GUIClip_Pop_m5280,
	GUISettings_t1021_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1021_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1021_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1021_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1021_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t597_CustomAttributesCacheGenerator,
	GUISkin_t597_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t597_CustomAttributesCacheGenerator_m_box,
	GUISkin_t597_CustomAttributesCacheGenerator_m_button,
	GUISkin_t597_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t597_CustomAttributesCacheGenerator_m_label,
	GUISkin_t597_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t597_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t597_CustomAttributesCacheGenerator_m_window,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t597_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t597_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t597_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t597_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t597_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t599_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t599_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t599_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_Init_m5349,
	GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5350,
	GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5351,
	GUIStyleState_t1025_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5352,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_Init_m5356,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5357,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_left_m4799,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_left_m5358,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_right_m5359,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_right_m5360,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_top_m4800,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_top_m5361,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2824,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5362,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4792,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4794,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5364,
	RectOffset_t525_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5366,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5370,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5371,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5372,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5373,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5375,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5377,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5378,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5379,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2429,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5380,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2430,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5381,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5382,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5383,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2434,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5384,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2433,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5385,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5388,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5391,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5392_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5394,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5395,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5399,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5401,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5403,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5406,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5409,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5411,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4693,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4694,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg1_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg2_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg3_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg4_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg5_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_t758_TouchScreenKeyboard_Open_m5412_Arg6_ParameterInfo,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4630,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4631,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4692,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4629,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4691,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4641,
	TouchScreenKeyboard_t758_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4640,
	Event_t600_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t600_CustomAttributesCacheGenerator_Event_Init_m5413,
	Event_t600_CustomAttributesCacheGenerator_Event_Cleanup_m5415,
	Event_t600_CustomAttributesCacheGenerator_Event_get_rawType_m4654,
	Event_t600_CustomAttributesCacheGenerator_Event_get_type_m2821,
	Event_t600_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5416,
	Event_t600_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5418,
	Event_t600_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5420,
	Event_t600_CustomAttributesCacheGenerator_Event_get_modifiers_m4650,
	Event_t600_CustomAttributesCacheGenerator_Event_get_character_m4652,
	Event_t600_CustomAttributesCacheGenerator_Event_get_commandName_m5421,
	Event_t600_CustomAttributesCacheGenerator_Event_get_keyCode_m4651,
	Event_t600_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5422,
	Event_t600_CustomAttributesCacheGenerator_Event_Use_m5424,
	Event_t600_CustomAttributesCacheGenerator_Event_PopEvent_m4655,
	EventModifiers_t1031_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t414_CustomAttributesCacheGenerator,
	Color_t257_CustomAttributesCacheGenerator,
	Color32_t572_CustomAttributesCacheGenerator,
	Quaternion_t601_CustomAttributesCacheGenerator,
	Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5450,
	Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5453,
	Quaternion_t601_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5455,
	Matrix4x4_t894_CustomAttributesCacheGenerator,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5471,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5473,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5475,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5478,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5490,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5493,
	Matrix4x4_t894_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5494,
	Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5511,
	Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5514,
	Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5517,
	Bounds_t582_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5521,
	Vector4_t855_CustomAttributesCacheGenerator,
	Mathf_t608_CustomAttributesCacheGenerator_Mathf_t608_Mathf_SmoothDamp_m4716_Arg4_ParameterInfo,
	Mathf_t608_CustomAttributesCacheGenerator_Mathf_t608_Mathf_SmoothDamp_m4716_Arg5_ParameterInfo,
	DrivenTransformProperties_t1033_CustomAttributesCacheGenerator,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5552,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5553,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5554,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5555,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5556,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5557,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5558,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5559,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5560,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5561,
	RectTransform_t501_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5562,
	Resources_t604_CustomAttributesCacheGenerator_Resources_Load_m5568,
	TextAsset_t596_CustomAttributesCacheGenerator_TextAsset_get_text_m2804,
	SerializePrivateVariables_t1037_CustomAttributesCacheGenerator,
	Shader_t1038_CustomAttributesCacheGenerator_Shader_PropertyToID_m5571,
	Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5573,
	Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5575,
	Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5577,
	Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5578,
	Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5579,
	Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5579_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5582,
	SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5585,
	SphericalHarmonicsL2_t1039_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5588,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_rect_m4580,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4576,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_texture_m4573,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4600,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_border_m4574,
	SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5598,
	SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5599,
	DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4587,
	DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4586,
	DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4579,
	DataUtility_t1040_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5600,
	WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5603,
	WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5604,
	WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2892,
	WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5605_Arg1_ParameterInfo,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5606,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5609,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2564,
	WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5610,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5611,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2473,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5614_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2472,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5616_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5616_Arg3_ParameterInfo,
	WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_URLEncode_m5620_Arg1_ParameterInfo,
	WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_QPEncode_m5622_Arg1_ParameterInfo,
	WWWTranscoder_t1042_CustomAttributesCacheGenerator_WWWTranscoder_t1042_WWWTranscoder_SevenBitClean_m5625_Arg1_ParameterInfo,
	CacheIndex_t1043_CustomAttributesCacheGenerator,
	UnityString_t1044_CustomAttributesCacheGenerator_UnityString_t1044_UnityString_Format_m5627_Arg1_ParameterInfo,
	AsyncOperation_t976_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5629,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2720,
	Application_t1045_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5634,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_isPlaying_m4696,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_isEditor_m4698,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2769,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_platform_m2681,
	Application_t1045_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m2950,
	Application_t1045_CustomAttributesCacheGenerator_Application_t1045_Application_ExternalCall_m2770_Arg1_ParameterInfo,
	Application_t1045_CustomAttributesCacheGenerator_Application_t1045_Application_BuildInvocationForArguments_m5636_Arg1_ParameterInfo,
	Application_t1045_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5637,
	Application_t1045_CustomAttributesCacheGenerator_Application_OpenURL_m2675,
	Application_t1045_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5639,
	Application_t1045_CustomAttributesCacheGenerator_Application_t1045____persistentDataPath_PropertyInfo,
	Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4420,
	Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4665,
	Behaviour_t904_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4421,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4474,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4473,
	Camera_t435_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m2967,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_depth_m4385,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4487,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_eventMask_m5645,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5646,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5647,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5648,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5650,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5651,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5652,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5653,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5654,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5655,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5656,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_main_m2709,
	Camera_t435_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5657,
	Camera_t435_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5658,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5663,
	Camera_t435_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5665,
	CameraCallback_t1046_CustomAttributesCacheGenerator,
	Debug_t1047_CustomAttributesCacheGenerator_Debug_Internal_Log_m5666,
	Debug_t1047_CustomAttributesCacheGenerator_Debug_t1047_Debug_Internal_Log_m5666_Arg2_ParameterInfo,
	Debug_t1047_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5667,
	Debug_t1047_CustomAttributesCacheGenerator_Debug_t1047_Debug_Internal_LogException_m5667_Arg1_ParameterInfo,
	Debug_t1047_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2768,
	Display_t1050_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5693,
	Display_t1050_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5694,
	Display_t1050_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5695,
	Display_t1050_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5696,
	Display_t1050_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5697,
	Display_t1050_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5698,
	Display_t1050_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5699,
	Display_t1050_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5700,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2717,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2716,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5701,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5702,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5703,
	Input_t532_CustomAttributesCacheGenerator_Input_GetAxis_m2972,
	Input_t532_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4465,
	Input_t532_CustomAttributesCacheGenerator_Input_GetButtonDown_m4464,
	Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButton_m2917,
	Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2712,
	Input_t532_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m2916,
	Input_t532_CustomAttributesCacheGenerator_Input_get_mousePosition_m2710,
	Input_t532_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4438,
	Input_t532_CustomAttributesCacheGenerator_Input_get_mousePresent_m4463,
	Input_t532_CustomAttributesCacheGenerator_Input_GetTouch_m2457,
	Input_t532_CustomAttributesCacheGenerator_Input_get_touchCount_m2456,
	Input_t532_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4695,
	Input_t532_CustomAttributesCacheGenerator_Input_get_compositionString_m4632,
	Input_t532_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5705,
	HideFlags_t1053_CustomAttributesCacheGenerator,
	Object_t528_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5708,
	Object_t528_CustomAttributesCacheGenerator_Object_Destroy_m5709,
	Object_t528_CustomAttributesCacheGenerator_Object_t528_Object_Destroy_m5709_Arg1_ParameterInfo,
	Object_t528_CustomAttributesCacheGenerator_Object_Destroy_m2615,
	Object_t528_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5710,
	Object_t528_CustomAttributesCacheGenerator_Object_t528_Object_DestroyImmediate_m5710_Arg1_ParameterInfo,
	Object_t528_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4697,
	Object_t528_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5711,
	Object_t528_CustomAttributesCacheGenerator_Object_get_name_m4668,
	Object_t528_CustomAttributesCacheGenerator_Object_set_name_m4758,
	Object_t528_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2534,
	Object_t528_CustomAttributesCacheGenerator_Object_set_hideFlags_m4669,
	Object_t528_CustomAttributesCacheGenerator_Object_ToString_m3123,
	Object_t528_CustomAttributesCacheGenerator_Object_Instantiate_m2845,
	Object_t528_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5717,
	Component_t578_CustomAttributesCacheGenerator_Component_get_transform_m2739,
	Component_t578_CustomAttributesCacheGenerator_Component_get_gameObject_m2533,
	Component_t578_CustomAttributesCacheGenerator_Component_GetComponent_m4806,
	Component_t578_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5719,
	Component_t578_CustomAttributesCacheGenerator_Component_GetComponent_m6507,
	Component_t578_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5720,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5722,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5723,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6511,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5724,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5725,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2742,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4671,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4672,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2671,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4422,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m2976,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m2912,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5726,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5726_Arg1_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5726_Arg2_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5727,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5728,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5729,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5729_Arg0_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5733,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5734,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5735,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5736,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5737,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5738,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5739,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5740,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5741,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5742,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5743,
	Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5744,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2846,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5745,
	Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m2957,
	Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5746_Arg1_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5747,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5748,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m2962,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4670,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2847,
	Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m2961,
	Time_t1055_CustomAttributesCacheGenerator_Time_get_time_m2867,
	Time_t1055_CustomAttributesCacheGenerator_Time_get_deltaTime_m2899,
	Time_t1055_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4467,
	Time_t1055_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4499,
	Time_t1055_CustomAttributesCacheGenerator_Time_set_timeScale_m2676,
	Random_t1056_CustomAttributesCacheGenerator_Random_set_seed_m2921,
	Random_t1056_CustomAttributesCacheGenerator_Random_Range_m2932,
	Random_t1056_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5750,
	PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5753,
	PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5754,
	PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_t1058_PlayerPrefs_GetString_m5754_Arg1_ParameterInfo,
	PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2635,
	PlayerPrefs_t1058_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2634,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5772,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m5773_Arg3_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m5773_Arg4_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_Raycast_m2713,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m4553_Arg2_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_Raycast_m4553_Arg3_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m4489_Arg1_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m4489_Arg2_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m5774_Arg2_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_t1060_Physics_RaycastAll_m5774_Arg3_ParameterInfo,
	Physics_t1060_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5775,
	Collider_t581_CustomAttributesCacheGenerator_Collider_set_enabled_m2726,
	Collider_t581_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5776,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m2898,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_IgnoreLayerCollision_m2898_Arg2_ParameterInfo,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5780,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_Raycast_m4554,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg2_ParameterInfo,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg3_ParameterInfo,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg4_ParameterInfo,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_t613_Physics2D_Raycast_m5781_Arg5_ParameterInfo,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4477,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5782,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m2911,
	Physics2D_t613_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5783,
	Collider2D_t468_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m2946,
	Collider2D_t468_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5785,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_set_clip_m2701,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Play_m5801,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_t393_AudioSource_Play_m5801_Arg0_ParameterInfo,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Play_m2868,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m2880,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_Stop_m2702,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m2943,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5802,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_t393_AudioSource_PlayOneShot_m5802_Arg1_ParameterInfo,
	AudioSource_t393_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2715,
	AnimationEvent_t1071_CustomAttributesCacheGenerator_AnimationEvent_t1071____data_PropertyInfo,
	AnimationCurve_t1075_CustomAttributesCacheGenerator,
	AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_t1075_AnimationCurve__ctor_m5828_Arg0_ParameterInfo,
	AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5830,
	AnimationCurve_t1075_CustomAttributesCacheGenerator_AnimationCurve_Init_m5832,
	AnimatorStateInfo_t1072_CustomAttributesCacheGenerator_AnimatorStateInfo_t1072____nameHash_PropertyInfo,
	Animator_t495_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4750,
	Animator_t495_CustomAttributesCacheGenerator_Animator_StringToHash_m5851,
	Animator_t495_CustomAttributesCacheGenerator_Animator_SetIntegerString_m5852,
	Animator_t495_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5853,
	Animator_t495_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5854,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2707,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2708,
	CharacterInfo_t1081_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1081_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1081_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1081_CustomAttributesCacheGenerator_flipped,
	Font_t723_CustomAttributesCacheGenerator_Font_get_material_m4762,
	Font_t723_CustomAttributesCacheGenerator_Font_HasCharacter_m4653,
	Font_t723_CustomAttributesCacheGenerator_Font_get_dynamic_m4764,
	Font_t723_CustomAttributesCacheGenerator_Font_get_fontSize_m4765,
	FontTextureRebuildCallback_t1082_CustomAttributesCacheGenerator,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_Init_m5882,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5883,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5886,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4667,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5887,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5888,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5889,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5890,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5891,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5892,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4646,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5893,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5894,
	TextGenerator_t761_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4684,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4549,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4779,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2983,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m5905,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2863,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4783,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4577,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4784,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4536,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4551,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4550,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4558,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4523,
	Canvas_t374_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4761,
	CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m2963,
	CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4742,
	CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5907,
	CanvasGroup_t481_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4535,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5910,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4539,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4816,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4531,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5911,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5912,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4527,
	CanvasRenderer_t728_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4524,
	RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5914,
	RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5916,
	RectTransformUtility_t878_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4538,
	Request_t1086_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1086_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1086_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1086_CustomAttributesCacheGenerator_Request_get_sourceId_m5921,
	Request_t1086_CustomAttributesCacheGenerator_Request_get_appId_m5922,
	Request_t1086_CustomAttributesCacheGenerator_Request_get_domain_m5923,
	Response_t1088_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1088_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1088_CustomAttributesCacheGenerator_Response_get_success_m5932,
	Response_t1088_CustomAttributesCacheGenerator_Response_set_success_m5933,
	Response_t1088_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5934,
	Response_t1088_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5935,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5940,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5941,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5942,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5943,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5944,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5945,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5946,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5947,
	CreateMatchRequest_t1091_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5948,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5951,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5952,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5953,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5954,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5955,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5956,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5957,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5958,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5959,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5960,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5961,
	CreateMatchResponse_t1092_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5962,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5966,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5967,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5968,
	JoinMatchRequest_t1093_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5969,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5972,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5973,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5974,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5975,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5976,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5977,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5978,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5979,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5980,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5981,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5982,
	JoinMatchResponse_t1094_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5983,
	DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5987,
	DestroyMatchRequest_t1095_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5988,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5991,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5992,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5993,
	DropConnectionRequest_t1096_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5994,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5997,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5998,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5999,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6000,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6001,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6002,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6003,
	ListMatchRequest_t1097_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6004,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6007,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6008,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6009,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6010,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6011,
	MatchDirectConnectInfo_t1098_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6012,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6016,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6017,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_name_m6018,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_name_m6019,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6020,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6021,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6022,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6023,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6024,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6025,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6026,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6027,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6028,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6029,
	MatchDesc_t1100_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6030,
	ListMatchResponse_t1102_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1102_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6034,
	ListMatchResponse_t1102_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6035,
	AppID_t1103_CustomAttributesCacheGenerator,
	SourceID_t1104_CustomAttributesCacheGenerator,
	NetworkID_t1105_CustomAttributesCacheGenerator,
	NodeID_t1106_CustomAttributesCacheGenerator,
	NetworkMatch_t1111_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6523,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6529,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6530,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1279_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6532,
	JsonArray_t1112_CustomAttributesCacheGenerator,
	JsonObject_t1113_CustomAttributesCacheGenerator,
	SimpleJson_t1116_CustomAttributesCacheGenerator,
	SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6079,
	SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6091,
	SimpleJson_t1116_CustomAttributesCacheGenerator_SimpleJson_t1116____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1114_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1114_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6536,
	PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6108,
	PocoJsonSerializerStrategy_t1115_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6109,
	ReflectionUtils_t1130_CustomAttributesCacheGenerator,
	ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetConstructorInfo_m6134_Arg1_ParameterInfo,
	ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetContructor_m6139_Arg1_ParameterInfo,
	ReflectionUtils_t1130_CustomAttributesCacheGenerator_ReflectionUtils_t1130_ReflectionUtils_GetConstructorByReflection_m6141_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1282_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1123_CustomAttributesCacheGenerator_ConstructorDelegate_t1123_ConstructorDelegate_Invoke_m6119_Arg0_ParameterInfo,
	ConstructorDelegate_t1123_CustomAttributesCacheGenerator_ConstructorDelegate_t1123_ConstructorDelegate_BeginInvoke_m6120_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1125_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1126_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1127_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1128_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1129_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1132_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t927_CustomAttributesCacheGenerator,
	RequireComponent_t921_CustomAttributesCacheGenerator,
	WritableAttribute_t1138_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1139_CustomAttributesCacheGenerator,
	GUIStateObjects_t1151_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6174,
	Achievement_t1154_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1154_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1154_CustomAttributesCacheGenerator_Achievement_get_id_m6194,
	Achievement_t1154_CustomAttributesCacheGenerator_Achievement_set_id_m6195,
	Achievement_t1154_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6196,
	Achievement_t1154_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6197,
	AchievementDescription_t1155_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1155_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6204,
	AchievementDescription_t1155_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6205,
	Score_t1156_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1156_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1156_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6214,
	Score_t1156_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6215,
	Score_t1156_CustomAttributesCacheGenerator_Score_get_value_m6216,
	Score_t1156_CustomAttributesCacheGenerator_Score_set_value_m6217,
	Leaderboard_t994_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t994_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t994_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t994_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_id_m6225,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_id_m6226,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6227,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6228,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_range_m6229,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_range_m6230,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6231,
	Leaderboard_t994_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6232,
	PropertyAttribute_t1167_CustomAttributesCacheGenerator,
	TooltipAttribute_t930_CustomAttributesCacheGenerator,
	SpaceAttribute_t928_CustomAttributesCacheGenerator,
	RangeAttribute_t925_CustomAttributesCacheGenerator,
	TextAreaAttribute_t931_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t929_CustomAttributesCacheGenerator,
	StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6272,
	StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6275,
	StackTraceUtility_t1170_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6277,
	SharedBetweenAnimatorsAttribute_t1171_CustomAttributesCacheGenerator,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1178_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1182_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1182_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1182_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1182_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1182_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1184_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1187_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1187_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1188_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1189_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1190_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t919_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1192_CustomAttributesCacheGenerator,
};
