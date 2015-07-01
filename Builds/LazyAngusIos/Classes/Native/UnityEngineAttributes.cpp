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
extern TypeInfo* InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t593_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2148);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t593 * tmp;
		tmp = (ExtensionAttribute_t593 *)il2cpp_codegen_object_new (ExtensionAttribute_t593_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m2836(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1250 * tmp;
		tmp = (InternalsVisibleToAttribute_t1250 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1250_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6350(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t953_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m4855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t953_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m4856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m4860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m4861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m4862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_LayerToName_m4865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m4866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_t685_LayerMask_GetMask_m4867_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void RuntimePlatform_t959_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void RuntimePlatform_t959_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SystemInfo_t960_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m4868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Coroutine_t740_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m4871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m4873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m4873_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m4874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m4876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m4881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m4882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m4883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m4884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m4885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m4886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m4887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m4888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m4889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m4890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m4891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m4892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m4893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m4894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m4895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m4896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m4945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m4946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m4947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m4948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MeshFilter_t583_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m4949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m4949_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m2736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m2737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_set_enabled_m2585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_material_m2563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_set_material_m2565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_bounds_m2594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_get_width_m2287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_get_height_m2303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_get_dpi_m4636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Screen_t975_CustomAttributesCacheGenerator_Screen_get_orientation_m2302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m4971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m4972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m4976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m4976_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m4977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m4977_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m4977_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m4978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RenderTexture_t976_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m4979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RenderTexture_t976_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m4980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUILayer_t979_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m4984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Gradient_t982_CustomAttributesCacheGenerator_Gradient_Init_m4988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Gradient_t982_CustomAttributesCacheGenerator_Gradient_Cleanup_m4989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m4996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m4997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m4998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m4999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_set_changed_m5001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_get_enabled_m5002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_set_enabled_m2321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Label_m2299_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Box_m2315_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Button_m2297_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_TextField_m2300_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_TextField_m2673_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Toggle_m2346_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_SelectionGrid_m2344_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_SelectionGrid_m5040_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginHorizontal_m2298_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginHorizontal_m5041_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginVertical_m2312_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginVertical_m5042_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginScrollView_m2320_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginScrollView_m5043_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_t505_GUILayoutUtility_GetRect_m5064_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_t505_GUILayoutUtility_GetRect_m5066_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIClip_t998_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIClip_t998_CustomAttributesCacheGenerator_GUIClip_Pop_m5134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISettings_t999_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISettings_t999_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISettings_t999_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISettings_t999_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISettings_t999_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t904_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t904_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1494);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t904 * tmp;
		tmp = (ExecuteInEditMode_t904 *)il2cpp_codegen_object_new (ExecuteInEditMode_t904_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4745(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUISkin_t574_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUIContent_t576_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUIContent_t576_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void GUIContent_t576_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_Init_m5203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_Init_m5210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_left_m4653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_left_m5212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_right_m5213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_right_m5214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_top_m4654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_top_m5215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5246_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Init_m5267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Cleanup_m5269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_rawType_m4506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_type_m2681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_modifiers_m4502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_character_m4504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_commandName_m5275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_get_keyCode_m4503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_Use_m5278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Event_t577_CustomAttributesCacheGenerator_Event_PopEvent_m4507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t894_il2cpp_TypeInfo_var;
void EventModifiers_t1009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1489);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t894 * tmp;
		tmp = (FlagsAttribute_t894 *)il2cpp_codegen_object_new (FlagsAttribute_t894_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4690(tmp, NULL);
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
void Vector3_t412_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1110_il2cpp_TypeInfo_var;
void Color32_t548_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2154);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1110 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1110 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1110_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6003(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t578_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Mathf_t585_CustomAttributesCacheGenerator_Mathf_t585_Mathf_SmoothDamp_m4568_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Mathf_t585_CustomAttributesCacheGenerator_Mathf_t585_Mathf_SmoothDamp_m4568_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t894_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1489);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t894 * tmp;
		tmp = (FlagsAttribute_t894 *)il2cpp_codegen_object_new (FlagsAttribute_t894_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4690(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void Resources_t581_CustomAttributesCacheGenerator_Resources_Load_m5422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextAsset_t573_CustomAttributesCacheGenerator_TextAsset_get_text_m2664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1015_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Shader_t1016_CustomAttributesCacheGenerator_Shader_PropertyToID_m5425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5433_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_rect_m4432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_texture_m4425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_border_m4426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5459_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5468_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5470_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5470_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_URLEncode_m5474_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_QPEncode_m5476_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_SevenBitClean_m5479_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void CacheIndex_t1021_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void UnityString_t1022_CustomAttributesCacheGenerator_UnityString_t1022_UnityString_Format_m5481_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AsyncOperation_t954_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_loadedLevel_m2813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_isPlaying_m4548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_isEditor_m4550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_platform_m2541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m2805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_t1023_Application_ExternalCall_m2630_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_t1023_Application_BuildInvocationForArguments_m5490_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_OpenURL_m2535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1252_il2cpp_TypeInfo_var;
void Application_t1023_CustomAttributesCacheGenerator_Application_t1023____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2155);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1252 * tmp;
		tmp = (SecurityCriticalAttribute_t1252 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1252_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m6356(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m2819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_depth_m4236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_eventMask_m5499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_main_m2569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var;
void CameraCallback_t1024_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1253 * tmp;
		tmp = (EditorBrowsableAttribute_t1253 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6357(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Debug_t1025_CustomAttributesCacheGenerator_Debug_Internal_Log_m5520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void Debug_t1025_CustomAttributesCacheGenerator_Debug_t1025_Debug_Internal_Log_m5520_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Debug_t1025_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void Debug_t1025_CustomAttributesCacheGenerator_Debug_t1025_Debug_Internal_LogException_m5521_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Debug_t1025_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Display_t1028_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetButtonDown_m4315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButton_m2773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m2772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_get_mousePosition_m2570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_get_mousePresent_m4314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_GetTouch_m2317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_get_touchCount_m2316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_get_compositionString_m4484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Input_t508_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t894_il2cpp_TypeInfo_var;
void HideFlags_t1031_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1489);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t894 * tmp;
		tmp = (FlagsAttribute_t894 *)il2cpp_codegen_object_new (FlagsAttribute_t894_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m4690(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_Destroy_m5563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_t504_Object_Destroy_m5563_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_Destroy_m2475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_t504_Object_DestroyImmediate_m5564_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_get_name_m4520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_set_name_m4612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_set_hideFlags_m4521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_ToString_m2974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_Instantiate_m2705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void Object_t504_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_get_transform_m2599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_get_gameObject_m2393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_GetComponent_m4660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_GetComponent_m6359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Component_t555_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4523(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m2824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m2768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5580_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5580_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2150);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1170 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1170 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1170_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6213(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1116_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5583_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2151);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1116 * tmp;
		tmp = (WritableAttribute_t1116 *)il2cpp_codegen_object_new (WritableAttribute_t1116_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6011(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m2811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5600_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m2825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m2823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Time_t1033_CustomAttributesCacheGenerator_Time_get_time_m2727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Time_t1033_CustomAttributesCacheGenerator_Time_get_deltaTime_m2755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Time_t1033_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Time_t1033_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Time_t1033_CustomAttributesCacheGenerator_Time_set_timeScale_m2536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Random_t1034_CustomAttributesCacheGenerator_Random_set_seed_m2776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Random_t1034_CustomAttributesCacheGenerator_Random_Range_m2788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Random_t1034_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_t1036_PlayerPrefs_GetString_m5608_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m5627_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m5627_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_Raycast_m2573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m4404_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m4404_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m4340_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m4340_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m5628_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m5628_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics_t1038_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Collider_t558_CustomAttributesCacheGenerator_Collider_set_enabled_m2586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Collider_t558_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_IgnoreLayerCollision_m2754_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_Raycast_m4405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m2767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Collider2D_t455_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m2801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Collider2D_t455_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_set_clip_m2561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_Stop_m2562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1167_il2cpp_TypeInfo_var;
void AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_t554_AudioSource_PlayOneShot_m5655_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1167 * tmp;
		tmp = (DefaultValueAttribute_t1167 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1167_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6208(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var;
void AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1168 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1168 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1168_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6212(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void AnimationEvent_t1049_CustomAttributesCacheGenerator_AnimationEvent_t1049____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_t1053_AnimationCurve__ctor_m5681_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_Init_m5685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1050_CustomAttributesCacheGenerator_AnimatorStateInfo_t1050____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Animator_t834_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Animator_t834_CustomAttributesCacheGenerator_Animator_StringToHash_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Animator_t834_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Animator_t834_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void CharacterInfo_t1059_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void CharacterInfo_t1059_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void CharacterInfo_t1059_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t598_il2cpp_TypeInfo_var;
void CharacterInfo_t1059_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t598 * tmp;
		tmp = (ObsoleteAttribute_t598 *)il2cpp_codegen_object_new (ObsoleteAttribute_t598_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2960(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Font_t700_CustomAttributesCacheGenerator_Font_get_material_m4616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Font_t700_CustomAttributesCacheGenerator_Font_HasCharacter_m4505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Font_t700_CustomAttributesCacheGenerator_Font_get_dynamic_m4618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Font_t700_CustomAttributesCacheGenerator_Font_get_fontSize_m4619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1060_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1253 * tmp;
		tmp = (EditorBrowsableAttribute_t1253 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6357(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_Init_m5734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m5757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m2815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1109_il2cpp_TypeInfo_var;
void RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2149);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1109 * tmp;
		tmp = (WrapperlessIcall_t1109 *)il2cpp_codegen_object_new (WrapperlessIcall_t1109_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_Request_get_sourceId_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_Request_get_appId_m5774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1064_CustomAttributesCacheGenerator_Request_get_domain_m5775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_Response_get_success_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_Response_set_success_m5785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1066_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m5852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m5854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m5855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m5856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m5864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m5868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m5869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_name_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_name_m5871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m5873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m5874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m5875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m5876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m5877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m5879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1080_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1080_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m5886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1080_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m5887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1255_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1081_il2cpp_TypeInfo_var;
void AppID_t1081_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2157);
		AppID_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2047);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1255 * tmp;
		tmp = (DefaultValueAttribute_t1255 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1255_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6374(tmp, Box(AppID_t1081_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1255_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1082_il2cpp_TypeInfo_var;
void SourceID_t1082_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2157);
		SourceID_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2046);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1255 * tmp;
		tmp = (DefaultValueAttribute_t1255 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1255_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6374(tmp, Box(SourceID_t1082_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1255_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1083_il2cpp_TypeInfo_var;
void NetworkID_t1083_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2157);
		NetworkID_t1083_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2049);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1255 * tmp;
		tmp = (DefaultValueAttribute_t1255 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1255_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6374(tmp, Box(NetworkID_t1083_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1255_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1084_il2cpp_TypeInfo_var;
void NodeID_t1084_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2157);
		NodeID_t1084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2050);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1255 * tmp;
		tmp = (DefaultValueAttribute_t1255 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1255_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6374(tmp, Box(NodeID_t1084_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1089_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6375(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6381(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6382(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6384(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var;
void JsonArray_t1090_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1253 * tmp;
		tmp = (EditorBrowsableAttribute_t1253 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6357(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
void JsonObject_t1091_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2156);
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1253 * tmp;
		tmp = (EditorBrowsableAttribute_t1253 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6357(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
void SimpleJson_t1094_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var;
void SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m5931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1259 * tmp;
		tmp = (SuppressMessageAttribute_t1259 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6387(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var;
void SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_NextToken_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1259 * tmp;
		tmp = (SuppressMessageAttribute_t1259 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var;
void SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_t1094____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1253 * tmp;
		tmp = (EditorBrowsableAttribute_t1253 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1253_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6357(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1092_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1092_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1259 * tmp;
		tmp = (SuppressMessageAttribute_t1259 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6387(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m5960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1259 * tmp;
		tmp = (SuppressMessageAttribute_t1259 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6387(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m5961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1259 * tmp;
		tmp = (SuppressMessageAttribute_t1259 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1259_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6386(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6387(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var;
void ReflectionUtils_t1108_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1258 * tmp;
		tmp = (GeneratedCodeAttribute_t1258 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1258_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6385(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetConstructorInfo_m5986_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetContructor_m5991_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetConstructorByReflection_m5993_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1260_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1101_CustomAttributesCacheGenerator_ConstructorDelegate_t1101_ConstructorDelegate_Invoke_m5971_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t594_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1101_CustomAttributesCacheGenerator_ConstructorDelegate_t1101_ConstructorDelegate_BeginInvoke_m5972_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t594 * tmp;
		tmp = (ParamArrayAttribute_t594 *)il2cpp_codegen_object_new (ParamArrayAttribute_t594_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2855(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1103_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1104_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1107_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t905_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void RequireComponent_t899_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void WritableAttribute_t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void GUIStateObjects_t1129_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_Achievement_get_id_m6046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_Achievement_set_id_m6047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1132_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1133_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1133_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1133_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_Score_get_value_m6068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1134_CustomAttributesCacheGenerator_Score_set_value_m6069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_id_m6077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_id_m6078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_range_m6081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_range_m6082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void PropertyAttribute_t1145_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void TooltipAttribute_t908_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void SpaceAttribute_t906_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void RangeAttribute_t903_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void TextAreaAttribute_t909_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t907_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var;
void StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1251 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1251 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1251_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1149_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void ArgumentCache_t1156_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void PersistentCall_t1160_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
void PersistentCall_t1160_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void PersistentCall_t1160_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void PersistentCall_t1160_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void PersistentCall_t1160_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1162_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var;
void UnityEventBase_t1165_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1491);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t897 * tmp;
		tmp = (FormerlySerializedAsAttribute_t897 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t897_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m4709(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t600_il2cpp_TypeInfo_var;
void UnityEventBase_t1165_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t600 * tmp;
		tmp = (SerializeField_t600 *)il2cpp_codegen_object_new (SerializeField_t600_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2965(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t896_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1166_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1490);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t896 * tmp;
		tmp = (AddComponentMenu_t896 *)il2cpp_codegen_object_new (AddComponentMenu_t896_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m4708(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1167_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1168_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t897_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6413(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6412(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t599_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1170_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t599 * tmp;
		tmp = (AttributeUsageAttribute_t599 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t599_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m2962(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[780] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t953_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m4855,
	AssetBundleCreateRequest_t953_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m4856,
	AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m4860,
	AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m4861,
	AssetBundle_t955_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m4862,
	LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_LayerToName_m4865,
	LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m4866,
	LayerMask_t685_CustomAttributesCacheGenerator_LayerMask_t685_LayerMask_GetMask_m4867_Arg0_ParameterInfo,
	RuntimePlatform_t959_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t959_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t959_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t960_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m4868,
	Coroutine_t740_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m4871,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m4873,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m4873_Arg0_ParameterInfo,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m4874,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m4876,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m4881,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m4882,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m4883,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m4884,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m4885,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m4886,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m4887,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m4888,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m4889,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m4890,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m4891,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m4892,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m4893,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m4894,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m4895,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m4896,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4897,
	GameCenterPlatform_t971_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4901,
	GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m4945,
	GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m4946,
	GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m4947,
	GcLeaderboard_t973_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m4948,
	MeshFilter_t583_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m2735,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m4949,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m4949_Arg0_ParameterInfo,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m2736,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m2737,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_set_enabled_m2585,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_material_m2563,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_set_material_m2565,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_bounds_m2594,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4334,
	Renderer_t495_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4335,
	Screen_t975_CustomAttributesCacheGenerator_Screen_get_width_m2287,
	Screen_t975_CustomAttributesCacheGenerator_Screen_get_height_m2303,
	Screen_t975_CustomAttributesCacheGenerator_Screen_get_dpi_m4636,
	Screen_t975_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2660,
	Screen_t975_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2661,
	Screen_t975_CustomAttributesCacheGenerator_Screen_get_orientation_m2302,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m4971,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m4972,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m4976,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m4976_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4377,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4455,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m4977,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m4977_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m4977_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2329,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2328,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m4978,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2330,
	RenderTexture_t976_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m4979,
	RenderTexture_t976_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m4980,
	GUILayer_t979_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m4984,
	Gradient_t982_CustomAttributesCacheGenerator_Gradient_Init_m4988,
	Gradient_t982_CustomAttributesCacheGenerator_Gradient_Cleanup_m4989,
	GUI_t506_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t506_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t506_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m4996,
	GUI_t506_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m4997,
	GUI_t506_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m4998,
	GUI_t506_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m4999,
	GUI_t506_CustomAttributesCacheGenerator_GUI_set_changed_m5001,
	GUI_t506_CustomAttributesCacheGenerator_GUI_get_enabled_m5002,
	GUI_t506_CustomAttributesCacheGenerator_GUI_set_enabled_m2321,
	GUI_t506_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5004,
	GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5007,
	GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5010,
	GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5017,
	GUI_t506_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5024,
	GUI_t506_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5026,
	GUI_t506_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5033,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Label_m2299_Arg1_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Box_m2315_Arg1_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Button_m2297_Arg1_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_TextField_m2300_Arg1_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_TextField_m2673_Arg2_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_Toggle_m2346_Arg2_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_SelectionGrid_m2344_Arg3_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_SelectionGrid_m5040_Arg4_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginHorizontal_m2298_Arg0_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginHorizontal_m5041_Arg2_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginVertical_m2312_Arg0_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginVertical_m5042_Arg2_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginScrollView_m2320_Arg1_ParameterInfo,
	GUILayout_t985_CustomAttributesCacheGenerator_GUILayout_t985_GUILayout_BeginScrollView_m5043_Arg6_ParameterInfo,
	GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5058,
	GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5060,
	GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5061,
	GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_t505_GUILayoutUtility_GetRect_m5064_Arg2_ParameterInfo,
	GUILayoutUtility_t505_CustomAttributesCacheGenerator_GUILayoutUtility_t505_GUILayoutUtility_GetRect_m5066_Arg3_ParameterInfo,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5108,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5112,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5116,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5117,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5118,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5119,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5120,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5121,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5123,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5125,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5129,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5130,
	GUIUtility_t997_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5131,
	GUIClip_t998_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5133,
	GUIClip_t998_CustomAttributesCacheGenerator_GUIClip_Pop_m5134,
	GUISettings_t999_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t999_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t999_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t999_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t999_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t574_CustomAttributesCacheGenerator,
	GUISkin_t574_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t574_CustomAttributesCacheGenerator_m_box,
	GUISkin_t574_CustomAttributesCacheGenerator_m_button,
	GUISkin_t574_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t574_CustomAttributesCacheGenerator_m_label,
	GUISkin_t574_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t574_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t574_CustomAttributesCacheGenerator_m_window,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t574_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t574_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t574_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t574_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t574_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t576_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t576_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t576_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_Init_m5203,
	GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5204,
	GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5205,
	GUIStyleState_t1003_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5206,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_Init_m5210,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5211,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_left_m4653,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_left_m5212,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_right_m5213,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_right_m5214,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_top_m4654,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_top_m5215,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2684,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5216,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4646,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4648,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5218,
	RectOffset_t501_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5220,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5224,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5225,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5226,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5227,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5229,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5231,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5232,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5233,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2289,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5234,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2290,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5235,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5236,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5237,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2294,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5238,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2293,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5239,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5242,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5245,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5246_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5248,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5249,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5253,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5255,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5257,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5260,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5263,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5265,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4545,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4546,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg1_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg2_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg3_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg4_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg5_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_t735_TouchScreenKeyboard_Open_m5266_Arg6_ParameterInfo,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4482,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4483,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4544,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4481,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4543,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4493,
	TouchScreenKeyboard_t735_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4492,
	Event_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t577_CustomAttributesCacheGenerator_Event_Init_m5267,
	Event_t577_CustomAttributesCacheGenerator_Event_Cleanup_m5269,
	Event_t577_CustomAttributesCacheGenerator_Event_get_rawType_m4506,
	Event_t577_CustomAttributesCacheGenerator_Event_get_type_m2681,
	Event_t577_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5270,
	Event_t577_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5272,
	Event_t577_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5274,
	Event_t577_CustomAttributesCacheGenerator_Event_get_modifiers_m4502,
	Event_t577_CustomAttributesCacheGenerator_Event_get_character_m4504,
	Event_t577_CustomAttributesCacheGenerator_Event_get_commandName_m5275,
	Event_t577_CustomAttributesCacheGenerator_Event_get_keyCode_m4503,
	Event_t577_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5276,
	Event_t577_CustomAttributesCacheGenerator_Event_Use_m5278,
	Event_t577_CustomAttributesCacheGenerator_Event_PopEvent_m4507,
	EventModifiers_t1009_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t412_CustomAttributesCacheGenerator,
	Color_t257_CustomAttributesCacheGenerator,
	Color32_t548_CustomAttributesCacheGenerator,
	Quaternion_t578_CustomAttributesCacheGenerator,
	Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5304,
	Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5307,
	Quaternion_t578_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5309,
	Matrix4x4_t872_CustomAttributesCacheGenerator,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5325,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5327,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5329,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5332,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5344,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5347,
	Matrix4x4_t872_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5348,
	Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5365,
	Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5368,
	Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5371,
	Bounds_t559_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5375,
	Vector4_t832_CustomAttributesCacheGenerator,
	Mathf_t585_CustomAttributesCacheGenerator_Mathf_t585_Mathf_SmoothDamp_m4568_Arg4_ParameterInfo,
	Mathf_t585_CustomAttributesCacheGenerator_Mathf_t585_Mathf_SmoothDamp_m4568_Arg5_ParameterInfo,
	DrivenTransformProperties_t1011_CustomAttributesCacheGenerator,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5406,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5407,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5408,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5409,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5410,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5411,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5412,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5413,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5414,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5415,
	RectTransform_t477_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5416,
	Resources_t581_CustomAttributesCacheGenerator_Resources_Load_m5422,
	TextAsset_t573_CustomAttributesCacheGenerator_TextAsset_get_text_m2664,
	SerializePrivateVariables_t1015_CustomAttributesCacheGenerator,
	Shader_t1016_CustomAttributesCacheGenerator_Shader_PropertyToID_m5425,
	Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5427,
	Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5429,
	Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5431,
	Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5432,
	Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5433,
	Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5433_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5436,
	SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5439,
	SphericalHarmonicsL2_t1017_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5442,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_rect_m4432,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4428,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_texture_m4425,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4452,
	Sprite_t394_CustomAttributesCacheGenerator_Sprite_get_border_m4426,
	SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5452,
	SpriteRenderer_t404_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5453,
	DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4439,
	DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4438,
	DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4431,
	DataUtility_t1018_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5454,
	WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5457,
	WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5458,
	WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m2749,
	WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5459_Arg1_ParameterInfo,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5460,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5463,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2424,
	WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5464,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5465,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2333,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5468_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2332,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5470_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5470_Arg3_ParameterInfo,
	WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_URLEncode_m5474_Arg1_ParameterInfo,
	WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_QPEncode_m5476_Arg1_ParameterInfo,
	WWWTranscoder_t1020_CustomAttributesCacheGenerator_WWWTranscoder_t1020_WWWTranscoder_SevenBitClean_m5479_Arg1_ParameterInfo,
	CacheIndex_t1021_CustomAttributesCacheGenerator,
	UnityString_t1022_CustomAttributesCacheGenerator_UnityString_t1022_UnityString_Format_m5481_Arg1_ParameterInfo,
	AsyncOperation_t954_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5483,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_loadedLevel_m2813,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2580,
	Application_t1023_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5488,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_isPlaying_m4548,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_isEditor_m4550,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2629,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_platform_m2541,
	Application_t1023_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m2805,
	Application_t1023_CustomAttributesCacheGenerator_Application_t1023_Application_ExternalCall_m2630_Arg1_ParameterInfo,
	Application_t1023_CustomAttributesCacheGenerator_Application_t1023_Application_BuildInvocationForArguments_m5490_Arg1_ParameterInfo,
	Application_t1023_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5491,
	Application_t1023_CustomAttributesCacheGenerator_Application_OpenURL_m2535,
	Application_t1023_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5493,
	Application_t1023_CustomAttributesCacheGenerator_Application_t1023____persistentDataPath_PropertyInfo,
	Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4271,
	Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4517,
	Behaviour_t882_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4272,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4325,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4324,
	Camera_t428_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m2819,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_depth_m4236,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4338,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_eventMask_m5499,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5500,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5501,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5502,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5504,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5505,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5506,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5507,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5508,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5509,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5510,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_main_m2569,
	Camera_t428_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5511,
	Camera_t428_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5512,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5517,
	Camera_t428_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5519,
	CameraCallback_t1024_CustomAttributesCacheGenerator,
	Debug_t1025_CustomAttributesCacheGenerator_Debug_Internal_Log_m5520,
	Debug_t1025_CustomAttributesCacheGenerator_Debug_t1025_Debug_Internal_Log_m5520_Arg2_ParameterInfo,
	Debug_t1025_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5521,
	Debug_t1025_CustomAttributesCacheGenerator_Debug_t1025_Debug_Internal_LogException_m5521_Arg1_ParameterInfo,
	Debug_t1025_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2628,
	Display_t1028_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5547,
	Display_t1028_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5548,
	Display_t1028_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5549,
	Display_t1028_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5550,
	Display_t1028_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5551,
	Display_t1028_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5552,
	Display_t1028_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5553,
	Display_t1028_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5554,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2577,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2576,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5555,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5556,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5557,
	Input_t508_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4316,
	Input_t508_CustomAttributesCacheGenerator_Input_GetButtonDown_m4315,
	Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButton_m2773,
	Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2572,
	Input_t508_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m2772,
	Input_t508_CustomAttributesCacheGenerator_Input_get_mousePosition_m2570,
	Input_t508_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4289,
	Input_t508_CustomAttributesCacheGenerator_Input_get_mousePresent_m4314,
	Input_t508_CustomAttributesCacheGenerator_Input_GetTouch_m2317,
	Input_t508_CustomAttributesCacheGenerator_Input_get_touchCount_m2316,
	Input_t508_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4547,
	Input_t508_CustomAttributesCacheGenerator_Input_get_compositionString_m4484,
	Input_t508_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5559,
	HideFlags_t1031_CustomAttributesCacheGenerator,
	Object_t504_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5562,
	Object_t504_CustomAttributesCacheGenerator_Object_Destroy_m5563,
	Object_t504_CustomAttributesCacheGenerator_Object_t504_Object_Destroy_m5563_Arg1_ParameterInfo,
	Object_t504_CustomAttributesCacheGenerator_Object_Destroy_m2475,
	Object_t504_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5564,
	Object_t504_CustomAttributesCacheGenerator_Object_t504_Object_DestroyImmediate_m5564_Arg1_ParameterInfo,
	Object_t504_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4549,
	Object_t504_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5565,
	Object_t504_CustomAttributesCacheGenerator_Object_get_name_m4520,
	Object_t504_CustomAttributesCacheGenerator_Object_set_name_m4612,
	Object_t504_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2394,
	Object_t504_CustomAttributesCacheGenerator_Object_set_hideFlags_m4521,
	Object_t504_CustomAttributesCacheGenerator_Object_ToString_m2974,
	Object_t504_CustomAttributesCacheGenerator_Object_Instantiate_m2705,
	Object_t504_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5571,
	Component_t555_CustomAttributesCacheGenerator_Component_get_transform_m2599,
	Component_t555_CustomAttributesCacheGenerator_Component_get_gameObject_m2393,
	Component_t555_CustomAttributesCacheGenerator_Component_GetComponent_m4660,
	Component_t555_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5573,
	Component_t555_CustomAttributesCacheGenerator_Component_GetComponent_m6359,
	Component_t555_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5574,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5576,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5577,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6363,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5578,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5579,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2602,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4523,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4524,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2531,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4273,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m2824,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m2768,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5580,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5580_Arg1_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5580_Arg2_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5581,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5582,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5583,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5583_Arg0_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5587,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5588,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5589,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5590,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5591,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5592,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5593,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5594,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5595,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5596,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5597,
	Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5598,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m2706,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5599,
	Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m2811,
	Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5600_Arg1_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5601,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5602,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m2825,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4522,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m2707,
	Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m2823,
	Time_t1033_CustomAttributesCacheGenerator_Time_get_time_m2727,
	Time_t1033_CustomAttributesCacheGenerator_Time_get_deltaTime_m2755,
	Time_t1033_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4318,
	Time_t1033_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4350,
	Time_t1033_CustomAttributesCacheGenerator_Time_set_timeScale_m2536,
	Random_t1034_CustomAttributesCacheGenerator_Random_set_seed_m2776,
	Random_t1034_CustomAttributesCacheGenerator_Random_Range_m2788,
	Random_t1034_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5604,
	PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5607,
	PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5608,
	PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_t1036_PlayerPrefs_GetString_m5608_Arg1_ParameterInfo,
	PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2495,
	PlayerPrefs_t1036_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2494,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5626,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m5627_Arg3_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m5627_Arg4_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_Raycast_m2573,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m4404_Arg2_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_Raycast_m4404_Arg3_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m4340_Arg1_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m4340_Arg2_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m5628_Arg2_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_t1038_Physics_RaycastAll_m5628_Arg3_ParameterInfo,
	Physics_t1038_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5629,
	Collider_t558_CustomAttributesCacheGenerator_Collider_set_enabled_m2586,
	Collider_t558_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5630,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m2754,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_IgnoreLayerCollision_m2754_Arg2_ParameterInfo,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5634,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_Raycast_m4405,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg2_ParameterInfo,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg3_ParameterInfo,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg4_ParameterInfo,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_t590_Physics2D_Raycast_m5635_Arg5_ParameterInfo,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4328,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5636,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m2767,
	Physics2D_t590_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5637,
	Collider2D_t455_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m2801,
	Collider2D_t455_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5639,
	AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_set_clip_m2561,
	AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_Stop_m2562,
	AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m5655,
	AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_t554_AudioSource_PlayOneShot_m5655_Arg1_ParameterInfo,
	AudioSource_t554_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2575,
	AnimationEvent_t1049_CustomAttributesCacheGenerator_AnimationEvent_t1049____data_PropertyInfo,
	AnimationCurve_t1053_CustomAttributesCacheGenerator,
	AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_t1053_AnimationCurve__ctor_m5681_Arg0_ParameterInfo,
	AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5683,
	AnimationCurve_t1053_CustomAttributesCacheGenerator_AnimationCurve_Init_m5685,
	AnimatorStateInfo_t1050_CustomAttributesCacheGenerator_AnimatorStateInfo_t1050____nameHash_PropertyInfo,
	Animator_t834_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4604,
	Animator_t834_CustomAttributesCacheGenerator_Animator_StringToHash_m5704,
	Animator_t834_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5705,
	Animator_t834_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5706,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2567,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2568,
	CharacterInfo_t1059_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1059_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1059_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1059_CustomAttributesCacheGenerator_flipped,
	Font_t700_CustomAttributesCacheGenerator_Font_get_material_m4616,
	Font_t700_CustomAttributesCacheGenerator_Font_HasCharacter_m4505,
	Font_t700_CustomAttributesCacheGenerator_Font_get_dynamic_m4618,
	Font_t700_CustomAttributesCacheGenerator_Font_get_fontSize_m4619,
	FontTextureRebuildCallback_t1060_CustomAttributesCacheGenerator,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_Init_m5734,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5735,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5738,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4519,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5739,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5740,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5741,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5742,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5743,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5744,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4498,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5745,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5746,
	TextGenerator_t738_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4536,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4400,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4633,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2834,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m5757,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2723,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4637,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4429,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4638,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4387,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4402,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4401,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4410,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4374,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4615,
	CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m2815,
	CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4595,
	CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5759,
	CanvasGroup_t465_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4386,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5762,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4390,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m4670,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4382,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5763,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5764,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4378,
	CanvasRenderer_t705_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4375,
	RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5766,
	RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5768,
	RectTransformUtility_t856_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4389,
	Request_t1064_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1064_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1064_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1064_CustomAttributesCacheGenerator_Request_get_sourceId_m5773,
	Request_t1064_CustomAttributesCacheGenerator_Request_get_appId_m5774,
	Request_t1064_CustomAttributesCacheGenerator_Request_get_domain_m5775,
	Response_t1066_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1066_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1066_CustomAttributesCacheGenerator_Response_get_success_m5784,
	Response_t1066_CustomAttributesCacheGenerator_Response_set_success_m5785,
	Response_t1066_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5786,
	Response_t1066_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5787,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5792,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5793,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5794,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5795,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5796,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5797,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5798,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5799,
	CreateMatchRequest_t1069_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5800,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5803,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5804,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5805,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5806,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5807,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5808,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5809,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5810,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5811,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5812,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5813,
	CreateMatchResponse_t1070_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5814,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5818,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5819,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5820,
	JoinMatchRequest_t1071_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5821,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5824,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5825,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5826,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5827,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5828,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5829,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5830,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5831,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5832,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5833,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5834,
	JoinMatchResponse_t1072_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5835,
	DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5839,
	DestroyMatchRequest_t1073_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5840,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5843,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5844,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5845,
	DropConnectionRequest_t1074_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5846,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5849,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5850,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5851,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m5852,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m5853,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m5854,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m5855,
	ListMatchRequest_t1075_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m5856,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m5859,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m5860,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m5861,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m5862,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m5863,
	MatchDirectConnectInfo_t1076_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m5864,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m5868,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m5869,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_name_m5870,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_name_m5871,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m5872,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m5873,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m5874,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m5875,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m5876,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m5877,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m5878,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m5879,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m5880,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m5881,
	MatchDesc_t1078_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m5882,
	ListMatchResponse_t1080_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1080_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m5886,
	ListMatchResponse_t1080_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m5887,
	AppID_t1081_CustomAttributesCacheGenerator,
	SourceID_t1082_CustomAttributesCacheGenerator,
	NetworkID_t1083_CustomAttributesCacheGenerator,
	NodeID_t1084_CustomAttributesCacheGenerator,
	NetworkMatch_t1089_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6375,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6381,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6382,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1257_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6384,
	JsonArray_t1090_CustomAttributesCacheGenerator,
	JsonObject_t1091_CustomAttributesCacheGenerator,
	SimpleJson_t1094_CustomAttributesCacheGenerator,
	SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m5931,
	SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_NextToken_m5943,
	SimpleJson_t1094_CustomAttributesCacheGenerator_SimpleJson_t1094____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1092_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1092_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6388,
	PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m5960,
	PocoJsonSerializerStrategy_t1093_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m5961,
	ReflectionUtils_t1108_CustomAttributesCacheGenerator,
	ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetConstructorInfo_m5986_Arg1_ParameterInfo,
	ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetContructor_m5991_Arg1_ParameterInfo,
	ReflectionUtils_t1108_CustomAttributesCacheGenerator_ReflectionUtils_t1108_ReflectionUtils_GetConstructorByReflection_m5993_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1260_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1101_CustomAttributesCacheGenerator_ConstructorDelegate_t1101_ConstructorDelegate_Invoke_m5971_Arg0_ParameterInfo,
	ConstructorDelegate_t1101_CustomAttributesCacheGenerator_ConstructorDelegate_t1101_ConstructorDelegate_BeginInvoke_m5972_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1103_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1104_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1105_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1106_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1107_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1110_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t905_CustomAttributesCacheGenerator,
	RequireComponent_t899_CustomAttributesCacheGenerator,
	WritableAttribute_t1116_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1117_CustomAttributesCacheGenerator,
	GUIStateObjects_t1129_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6026,
	Achievement_t1132_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1132_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1132_CustomAttributesCacheGenerator_Achievement_get_id_m6046,
	Achievement_t1132_CustomAttributesCacheGenerator_Achievement_set_id_m6047,
	Achievement_t1132_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6048,
	Achievement_t1132_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6049,
	AchievementDescription_t1133_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1133_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6056,
	AchievementDescription_t1133_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6057,
	Score_t1134_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1134_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1134_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6066,
	Score_t1134_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6067,
	Score_t1134_CustomAttributesCacheGenerator_Score_get_value_m6068,
	Score_t1134_CustomAttributesCacheGenerator_Score_set_value_m6069,
	Leaderboard_t972_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t972_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t972_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t972_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_id_m6077,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_id_m6078,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6079,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6080,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_range_m6081,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_range_m6082,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6083,
	Leaderboard_t972_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6084,
	PropertyAttribute_t1145_CustomAttributesCacheGenerator,
	TooltipAttribute_t908_CustomAttributesCacheGenerator,
	SpaceAttribute_t906_CustomAttributesCacheGenerator,
	RangeAttribute_t903_CustomAttributesCacheGenerator,
	TextAreaAttribute_t909_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t907_CustomAttributesCacheGenerator,
	StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6124,
	StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6127,
	StackTraceUtility_t1148_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6129,
	SharedBetweenAnimatorsAttribute_t1149_CustomAttributesCacheGenerator,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1156_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1160_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1160_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1160_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1160_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1160_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1162_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1165_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1165_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1166_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1167_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1168_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t897_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1170_CustomAttributesCacheGenerator,
};
