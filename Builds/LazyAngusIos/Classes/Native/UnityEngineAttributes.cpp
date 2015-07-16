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
extern TypeInfo* InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t647_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2290);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ExtensionAttribute_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t647 * tmp;
		tmp = (ExtensionAttribute_t647 *)il2cpp_codegen_object_new (ExtensionAttribute_t647_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3182(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1307 * tmp;
		tmp = (InternalsVisibleToAttribute_t1307 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1307_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6708(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1009_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t1009_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_t741_LayerMask_GetMask_m5220_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void RuntimePlatform_t1015_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void RuntimePlatform_t1015_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SystemInfo_t1016_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SystemInfo_t1016_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Coroutine_t796_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5226_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MeshFilter_t635_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m5300_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m3038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m3039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_set_enabled_m2887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_material_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_set_material_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_bounds_m2896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_get_width_m2589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_get_height_m2605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_get_dpi_m4986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Screen_t1030_CustomAttributesCacheGenerator_Screen_get_orientation_m2604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5327_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5328_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5328_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RenderTexture_t1031_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RenderTexture_t1031_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUILayer_t1034_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Gradient_t1037_CustomAttributesCacheGenerator_Gradient_Init_m5339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Gradient_t1037_CustomAttributesCacheGenerator_Gradient_Cleanup_m5340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_set_changed_m5352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_get_enabled_m5353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_set_enabled_m2623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Label_m2601_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Box_m2617_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Button_m2599_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_TextField_m2602_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_TextField_m2975_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Toggle_m2648_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_SelectionGrid_m2646_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_SelectionGrid_m5391_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginHorizontal_m2600_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginHorizontal_m5392_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginVertical_m2614_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginVertical_m5393_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginScrollView_m2622_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginScrollView_m5394_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_t558_GUILayoutUtility_GetRect_m5415_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_t558_GUILayoutUtility_GetRect_m5417_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIClip_t1053_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIClip_t1053_CustomAttributesCacheGenerator_GUIClip_Pop_m5485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISettings_t1054_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISettings_t1054_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISettings_t1054_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISettings_t1054_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISettings_t1054_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t959_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1636);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t959 * tmp;
		tmp = (ExecuteInEditMode_t959 *)il2cpp_codegen_object_new (ExecuteInEditMode_t959_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5095(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUISkin_t626_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUIContent_t628_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUIContent_t628_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void GUIContent_t628_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_Init_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_Init_m5561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_left_m5003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_left_m5563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_right_m5564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_right_m5565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_top_m5004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_top_m5566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5597_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Init_m5618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Cleanup_m5620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_rawType_m4859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_type_m2983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_modifiers_m4855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_character_m4857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_commandName_m5626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_get_keyCode_m4856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_Use_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Event_t629_CustomAttributesCacheGenerator_Event_PopEvent_m4860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t949_il2cpp_TypeInfo_var;
void EventModifiers_t1064_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t949 * tmp;
		tmp = (FlagsAttribute_t949 *)il2cpp_codegen_object_new (FlagsAttribute_t949_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5040(tmp, NULL);
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
void Vector3_t411_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1165_il2cpp_TypeInfo_var;
void Color32_t601_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1165 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1165 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1165_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6356(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Quaternion_t630_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void Vector4_t888_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Mathf_t637_CustomAttributesCacheGenerator_Mathf_t637_Mathf_SmoothDamp_m4920_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Mathf_t637_CustomAttributesCacheGenerator_Mathf_t637_Mathf_SmoothDamp_m4920_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t949_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t1066_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t949 * tmp;
		tmp = (FlagsAttribute_t949 *)il2cpp_codegen_object_new (FlagsAttribute_t949_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void Resources_t633_CustomAttributesCacheGenerator_Resources_Load_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextAsset_t625_CustomAttributesCacheGenerator_TextAsset_get_text_m2966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t1070_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Shader_t1071_CustomAttributesCacheGenerator_Shader_PropertyToID_m5776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5784_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_rect_m4786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_texture_m4779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_border_m4780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m3052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5810_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5819_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5821_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5821_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_URLEncode_m5825_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_QPEncode_m5827_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_SevenBitClean_m5830_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void CacheIndex_t1076_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void UnityString_t1077_CustomAttributesCacheGenerator_UnityString_t1077_UnityString_Format_m5832_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AsyncOperation_t1010_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_isPlaying_m4900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_isEditor_m4902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_platform_m2843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_t1078_Application_ExternalCall_m2932_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_t1078_Application_BuildInvocationForArguments_m5841_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_OpenURL_m2837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t1309_il2cpp_TypeInfo_var;
void Application_t1078_CustomAttributesCacheGenerator_Application_t1078____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t1309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t1309 * tmp;
		tmp = (SecurityCriticalAttribute_t1309 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t1309_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m6714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_depth_m4592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_eventMask_m5850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_main_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var;
void CameraCallback_t1079_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1310 * tmp;
		tmp = (EditorBrowsableAttribute_t1310 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Debug_t1080_CustomAttributesCacheGenerator_Debug_Internal_Log_m5871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void Debug_t1080_CustomAttributesCacheGenerator_Debug_t1080_Debug_Internal_Log_m5871_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Debug_t1080_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void Debug_t1080_CustomAttributesCacheGenerator_Debug_t1080_Debug_Internal_LogException_m5872_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Debug_t1080_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Display_t1083_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetAxis_m3168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetButtonDown_m4670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButton_m3081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_get_mousePosition_m2872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_get_mousePresent_m4669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_GetTouch_m2619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_get_touchCount_m2618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_get_compositionString_m4837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Input_t561_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t949_il2cpp_TypeInfo_var;
void HideFlags_t1086_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t949 * tmp;
		tmp = (FlagsAttribute_t949 *)il2cpp_codegen_object_new (FlagsAttribute_t949_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5040(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_Destroy_m5914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_t557_Object_Destroy_m5914_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_Destroy_m2777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_t557_Object_DestroyImmediate_m5915_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_get_name_m4872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_set_name_m4962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_set_hideFlags_m4873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_ToString_m3329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_Instantiate_m3007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void Object_t557_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_get_transform_m2901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_get_gameObject_m2695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_GetComponent_m5010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_GetComponent_m6717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Component_t607_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5931_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5931_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1228 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1228 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1228_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6571(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1171_il2cpp_TypeInfo_var;
void GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5934_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1171 * tmp;
		tmp = (WritableAttribute_t1171 *)il2cpp_codegen_object_new (WritableAttribute_t1171_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6364(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m3008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5951_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Time_t1088_CustomAttributesCacheGenerator_Time_get_time_m3029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Time_t1088_CustomAttributesCacheGenerator_Time_get_deltaTime_m3053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Time_t1088_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Time_t1088_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Time_t1088_CustomAttributesCacheGenerator_Time_set_timeScale_m2838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Random_t1089_CustomAttributesCacheGenerator_Random_set_seed_m3103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Random_t1089_CustomAttributesCacheGenerator_Random_Range_m3050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Random_t1089_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_t1091_PlayerPrefs_GetString_m5959_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m5978_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m5978_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_Raycast_m2875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m4759_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m4759_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m4695_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m4695_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m5979_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m5979_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics_t1093_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Collider_t610_CustomAttributesCacheGenerator_Collider_set_enabled_m2888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Collider_t610_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_IgnoreLayerCollision_m3063_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_Raycast_m4760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_set_clip_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Play_m6006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_t477_AudioSource_Play_m6006_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Play_m3133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Stop_m2864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1225_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_t477_AudioSource_PlayOneShot_m6007_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1225 * tmp;
		tmp = (DefaultValueAttribute_t1225 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1225_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6566(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var;
void AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1226 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1226 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1226_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6570(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void AnimationEvent_t1104_CustomAttributesCacheGenerator_AnimationEvent_t1104____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void AnimationCurve_t1108_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_t1108_AnimationCurve__ctor_m6033_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_Init_m6037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t1105_CustomAttributesCacheGenerator_AnimatorStateInfo_t1105____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Animator_t526_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Animator_t526_CustomAttributesCacheGenerator_Animator_StringToHash_m6056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Animator_t526_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Animator_t526_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Animator_t526_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void CharacterInfo_t1114_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void CharacterInfo_t1114_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void CharacterInfo_t1114_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t652_il2cpp_TypeInfo_var;
void CharacterInfo_t1114_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t652 * tmp;
		tmp = (ObsoleteAttribute_t652 *)il2cpp_codegen_object_new (ObsoleteAttribute_t652_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3306(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Font_t756_CustomAttributesCacheGenerator_Font_get_material_m4966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Font_t756_CustomAttributesCacheGenerator_Font_HasCharacter_m4858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Font_t756_CustomAttributesCacheGenerator_Font_get_dynamic_m4968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Font_t756_CustomAttributesCacheGenerator_Font_get_fontSize_m4969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1310 * tmp;
		tmp = (EditorBrowsableAttribute_t1310 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_Init_m6087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1164_il2cpp_TypeInfo_var;
void RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1164 * tmp;
		tmp = (WrapperlessIcall_t1164 *)il2cpp_codegen_object_new (WrapperlessIcall_t1164_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6355(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_Request_get_sourceId_m6126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_Request_get_appId_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Request_t1119_CustomAttributesCacheGenerator_Request_get_domain_m6128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_Response_get_success_m6137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_Response_set_success_m6138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Response_t1121_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_name_m6223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_name_m6224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1135_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1135_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ListMatchResponse_t1135_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t1312_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1136_il2cpp_TypeInfo_var;
void AppID_t1136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2299);
		AppID_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1312 * tmp;
		tmp = (DefaultValueAttribute_t1312 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1312_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6732(tmp, Box(AppID_t1136_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1312_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1137_il2cpp_TypeInfo_var;
void SourceID_t1137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2299);
		SourceID_t1137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2186);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1312 * tmp;
		tmp = (DefaultValueAttribute_t1312 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1312_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6732(tmp, Box(SourceID_t1137_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1312_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1138_il2cpp_TypeInfo_var;
void NetworkID_t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2299);
		NetworkID_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2189);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1312 * tmp;
		tmp = (DefaultValueAttribute_t1312 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1312_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6732(tmp, Box(NetworkID_t1138_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1312_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1139_il2cpp_TypeInfo_var;
void NodeID_t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2299);
		NodeID_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2190);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1312 * tmp;
		tmp = (DefaultValueAttribute_t1312 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1312_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6732(tmp, Box(NodeID_t1139_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t52_il2cpp_TypeInfo_var;
void NetworkMatch_t1144_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6733(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6739(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6740(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6742(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var;
void JsonArray_t1145_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1310 * tmp;
		tmp = (EditorBrowsableAttribute_t1310 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6715(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var;
void JsonObject_t1146_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
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
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1310 * tmp;
		tmp = (EditorBrowsableAttribute_t1310 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6715(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
void SimpleJson_t1149_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var;
void SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1316 * tmp;
		tmp = (SuppressMessageAttribute_t1316 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6744(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6745(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var;
void SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1316 * tmp;
		tmp = (SuppressMessageAttribute_t1316 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6744(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var;
void SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_t1149____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1310 * tmp;
		tmp = (EditorBrowsableAttribute_t1310 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1310_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6715(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1147_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1147_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1316 * tmp;
		tmp = (SuppressMessageAttribute_t1316 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6744(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6745(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1316 * tmp;
		tmp = (SuppressMessageAttribute_t1316 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6744(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6745(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1316 * tmp;
		tmp = (SuppressMessageAttribute_t1316 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1316_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6744(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6745(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var;
void ReflectionUtils_t1163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1315 * tmp;
		tmp = (GeneratedCodeAttribute_t1315 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1315_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6743(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetConstructorInfo_m6339_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetContructor_m6344_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetConstructorByReflection_m6346_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1317_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1156_CustomAttributesCacheGenerator_ConstructorDelegate_t1156_ConstructorDelegate_Invoke_m6324_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t648_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1156_CustomAttributesCacheGenerator_ConstructorDelegate_t1156_ConstructorDelegate_BeginInvoke_m6325_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t648 * tmp;
		tmp = (ParamArrayAttribute_t648 *)il2cpp_codegen_object_new (ParamArrayAttribute_t648_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3201(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1158_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1159_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1160_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1161_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1165_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t960_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void RequireComponent_t954_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void WritableAttribute_t1171_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1172_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void GUIStateObjects_t1184_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_Achievement_get_id_m6401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_Achievement_set_id_m6402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Achievement_t1187_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1188_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1188_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void AchievementDescription_t1188_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_Score_get_value_m6423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Score_t1189_CustomAttributesCacheGenerator_Score_set_value_m6424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_id_m6432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_id_m6433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_range_m6436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_range_m6437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void PropertyAttribute_t1203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void TooltipAttribute_t963_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void SpaceAttribute_t961_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void RangeAttribute_t958_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void TextAreaAttribute_t964_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t962_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var;
void StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1308 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1308 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1308_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6710(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void ArgumentCache_t1214_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void PersistentCall_t1218_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void PersistentCall_t1218_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void PersistentCall_t1218_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void PersistentCall_t1218_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void PersistentCall_t1218_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1220_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var;
void UnityEventBase_t1223_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t952 * tmp;
		tmp = (FormerlySerializedAsAttribute_t952 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t952_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5059(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t654_il2cpp_TypeInfo_var;
void UnityEventBase_t1223_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t654 * tmp;
		tmp = (SerializeField_t654 *)il2cpp_codegen_object_new (SerializeField_t654_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3311(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t951_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1224_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t951 * tmp;
		tmp = (AddComponentMenu_t951 *)il2cpp_codegen_object_new (AddComponentMenu_t951_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5058(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1225_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1226_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t952_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6771(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6770(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t653_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1228_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t653 * tmp;
		tmp = (AttributeUsageAttribute_t653 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t653_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3308(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[787] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t1009_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5208,
	AssetBundleCreateRequest_t1009_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5209,
	AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5213,
	AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5214,
	AssetBundle_t1011_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5215,
	LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5218,
	LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5219,
	LayerMask_t741_CustomAttributesCacheGenerator_LayerMask_t741_LayerMask_GetMask_m5220_Arg0_ParameterInfo,
	RuntimePlatform_t1015_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t1015_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t1015_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t1016_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m3176,
	SystemInfo_t1016_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5221,
	Coroutine_t796_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5224,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5226,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_t111_ScriptableObject_Internal_CreateScriptableObject_m5226_Arg0_ParameterInfo,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5227,
	ScriptableObject_t111_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5229,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5234,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5235,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5236,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5237,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5238,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5239,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5240,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5241,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5242,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5243,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5244,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5245,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5246,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5247,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5248,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5249,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5250,
	GameCenterPlatform_t646_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5252,
	GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5296,
	GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5297,
	GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5298,
	GcLeaderboard_t1028_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5299,
	MeshFilter_t635_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3037,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5300,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_t399_Mesh_Internal_Create_m5300_Arg0_ParameterInfo,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_vertices_m3038,
	Mesh_t399_CustomAttributesCacheGenerator_Mesh_set_triangles_m3039,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_set_enabled_m2887,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_material_m2865,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_set_material_m2867,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_bounds_m2896,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4689,
	Renderer_t551_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4690,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_get_width_m2589,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_get_height_m2605,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_get_dpi_m4986,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_get_fullScreen_m2962,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_set_fullScreen_m2963,
	Screen_t1030_CustomAttributesCacheGenerator_Screen_get_orientation_m2604,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5322,
	Texture_t311_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5323,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5327,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Internal_Create_m5327_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4732,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m4808,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m5328,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5328_Arg0_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_t65_Texture2D_Apply_m5328_Arg1_ParameterInfo,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_Apply_m2631,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m2630,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5329,
	Texture2D_t65_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m2632,
	RenderTexture_t1031_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5330,
	RenderTexture_t1031_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5331,
	GUILayer_t1034_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5335,
	Gradient_t1037_CustomAttributesCacheGenerator_Gradient_Init_m5339,
	Gradient_t1037_CustomAttributesCacheGenerator_Gradient_Cleanup_m5340,
	GUI_t559_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t559_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t559_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m5347,
	GUI_t559_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5348,
	GUI_t559_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m5349,
	GUI_t559_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m5350,
	GUI_t559_CustomAttributesCacheGenerator_GUI_set_changed_m5352,
	GUI_t559_CustomAttributesCacheGenerator_GUI_get_enabled_m5353,
	GUI_t559_CustomAttributesCacheGenerator_GUI_set_enabled_m2623,
	GUI_t559_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m5355,
	GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5358,
	GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5361,
	GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m5368,
	GUI_t559_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m5375,
	GUI_t559_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m5377,
	GUI_t559_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m5384,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Label_m2601_Arg1_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Box_m2617_Arg1_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Button_m2599_Arg1_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_TextField_m2602_Arg1_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_TextField_m2975_Arg2_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_Toggle_m2648_Arg2_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_SelectionGrid_m2646_Arg3_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_SelectionGrid_m5391_Arg4_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginHorizontal_m2600_Arg0_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginHorizontal_m5392_Arg2_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginVertical_m2614_Arg0_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginVertical_m5393_Arg2_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginScrollView_m2622_Arg1_ParameterInfo,
	GUILayout_t1040_CustomAttributesCacheGenerator_GUILayout_t1040_GUILayout_BeginScrollView_m5394_Arg6_ParameterInfo,
	GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5409,
	GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5411,
	GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5412,
	GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_t558_GUILayoutUtility_GetRect_m5415_Arg2_ParameterInfo,
	GUILayoutUtility_t558_CustomAttributesCacheGenerator_GUILayoutUtility_t558_GUILayoutUtility_GetRect_m5417_Arg3_ParameterInfo,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m5459,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m5463,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m5467,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m5468,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m5469,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m5470,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5471,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5472,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5474,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5476,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5480,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m5481,
	GUIUtility_t1052_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m5482,
	GUIClip_t1053_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m5484,
	GUIClip_t1053_CustomAttributesCacheGenerator_GUIClip_Pop_m5485,
	GUISettings_t1054_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t1054_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t1054_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t1054_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t1054_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t626_CustomAttributesCacheGenerator,
	GUISkin_t626_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t626_CustomAttributesCacheGenerator_m_box,
	GUISkin_t626_CustomAttributesCacheGenerator_m_button,
	GUISkin_t626_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t626_CustomAttributesCacheGenerator_m_label,
	GUISkin_t626_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t626_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t626_CustomAttributesCacheGenerator_m_window,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t626_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t626_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t626_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t626_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t626_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t628_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t628_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t628_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_Init_m5554,
	GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5555,
	GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5556,
	GUIStyleState_t1058_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5557,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_Init_m5561,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5562,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_left_m5003,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_left_m5563,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_right_m5564,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_right_m5565,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_top_m5004,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_top_m5566,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2986,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5567,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m4996,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_get_vertical_m4998,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m5569,
	RectOffset_t554_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5571,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Init_m5575,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5576,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_name_m5577,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_name_m5578,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5580,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5582,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m5583,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m5584,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2591,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5585,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2592,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5586,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5587,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5588,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2596,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5589,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2595,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5590,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m5593,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Draw_m5596,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_t64_GUIStyle_Draw_m5597_Arg3_ParameterInfo,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m5599,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5600,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5604,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5606,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5608,
	GUIStyle_t64_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m5611,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5614,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5616,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4897,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4898,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg1_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg2_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg3_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg4_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg5_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_t791_TouchScreenKeyboard_Open_m5617_Arg6_ParameterInfo,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4835,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4836,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m4896,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4834,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4895,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4846,
	TouchScreenKeyboard_t791_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4845,
	Event_t629_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t629_CustomAttributesCacheGenerator_Event_Init_m5618,
	Event_t629_CustomAttributesCacheGenerator_Event_Cleanup_m5620,
	Event_t629_CustomAttributesCacheGenerator_Event_get_rawType_m4859,
	Event_t629_CustomAttributesCacheGenerator_Event_get_type_m2983,
	Event_t629_CustomAttributesCacheGenerator_Event_GetTypeForControl_m5621,
	Event_t629_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5623,
	Event_t629_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m5625,
	Event_t629_CustomAttributesCacheGenerator_Event_get_modifiers_m4855,
	Event_t629_CustomAttributesCacheGenerator_Event_get_character_m4857,
	Event_t629_CustomAttributesCacheGenerator_Event_get_commandName_m5626,
	Event_t629_CustomAttributesCacheGenerator_Event_get_keyCode_m4856,
	Event_t629_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5627,
	Event_t629_CustomAttributesCacheGenerator_Event_Use_m5629,
	Event_t629_CustomAttributesCacheGenerator_Event_PopEvent_m4860,
	EventModifiers_t1064_CustomAttributesCacheGenerator,
	Vector2_t68_CustomAttributesCacheGenerator,
	Vector3_t411_CustomAttributesCacheGenerator,
	Color_t257_CustomAttributesCacheGenerator,
	Color32_t601_CustomAttributesCacheGenerator,
	Quaternion_t630_CustomAttributesCacheGenerator,
	Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5655,
	Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5658,
	Quaternion_t630_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5660,
	Matrix4x4_t927_CustomAttributesCacheGenerator,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5676,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5678,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5680,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5683,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5695,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5698,
	Matrix4x4_t927_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5699,
	Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5716,
	Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5719,
	Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5722,
	Bounds_t611_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5726,
	Vector4_t888_CustomAttributesCacheGenerator,
	Mathf_t637_CustomAttributesCacheGenerator_Mathf_t637_Mathf_SmoothDamp_m4920_Arg4_ParameterInfo,
	Mathf_t637_CustomAttributesCacheGenerator_Mathf_t637_Mathf_SmoothDamp_m4920_Arg5_ParameterInfo,
	DrivenTransformProperties_t1066_CustomAttributesCacheGenerator,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5757,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5758,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5759,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5760,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5761,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5762,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5763,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5764,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5765,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5766,
	RectTransform_t533_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5767,
	Resources_t633_CustomAttributesCacheGenerator_Resources_Load_m5773,
	TextAsset_t625_CustomAttributesCacheGenerator_TextAsset_get_text_m2966,
	SerializePrivateVariables_t1070_CustomAttributesCacheGenerator,
	Shader_t1071_CustomAttributesCacheGenerator_Shader_PropertyToID_m5776,
	Material_t400_CustomAttributesCacheGenerator_Material_SetTexture_m5778,
	Material_t400_CustomAttributesCacheGenerator_Material_GetTexture_m5780,
	Material_t400_CustomAttributesCacheGenerator_Material_SetFloat_m5782,
	Material_t400_CustomAttributesCacheGenerator_Material_HasProperty_m5783,
	Material_t400_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5784,
	Material_t400_CustomAttributesCacheGenerator_Material_t400_Material_Internal_CreateWithMaterial_m5784_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5787,
	SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5790,
	SphericalHarmonicsL2_t1072_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5793,
	Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_rect_m4786,
	Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4782,
	Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_texture_m4779,
	Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4805,
	Sprite_t392_CustomAttributesCacheGenerator_Sprite_get_border_m4780,
	SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m5803,
	SpriteRenderer_t470_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m5804,
	DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4793,
	DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4792,
	DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4785,
	DataUtility_t1073_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5805,
	WWW_t196_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5808,
	WWW_t196_CustomAttributesCacheGenerator_WWW_InitWWW_m5809,
	WWW_t196_CustomAttributesCacheGenerator_WWW_EscapeURL_m3052,
	WWW_t196_CustomAttributesCacheGenerator_WWW_t196_WWW_EscapeURL_m5810_Arg1_ParameterInfo,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5811,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_bytes_m5814,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_error_m2726,
	WWW_t196_CustomAttributesCacheGenerator_WWW_GetTexture_m5815,
	WWW_t196_CustomAttributesCacheGenerator_WWW_get_isDone_m5816,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddField_m2635,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddField_m5819_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m2634,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5821_Arg2_ParameterInfo,
	WWWForm_t70_CustomAttributesCacheGenerator_WWWForm_t70_WWWForm_AddBinaryData_m5821_Arg3_ParameterInfo,
	WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_URLEncode_m5825_Arg1_ParameterInfo,
	WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_QPEncode_m5827_Arg1_ParameterInfo,
	WWWTranscoder_t1075_CustomAttributesCacheGenerator_WWWTranscoder_t1075_WWWTranscoder_SevenBitClean_m5830_Arg1_ParameterInfo,
	CacheIndex_t1076_CustomAttributesCacheGenerator,
	UnityString_t1077_CustomAttributesCacheGenerator_UnityString_t1077_UnityString_Format_m5832_Arg1_ParameterInfo,
	AsyncOperation_t1010_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5834,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2882,
	Application_t1078_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m5839,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_isPlaying_m4900,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_isEditor_m4902,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m2931,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_platform_m2843,
	Application_t1078_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m3138,
	Application_t1078_CustomAttributesCacheGenerator_Application_t1078_Application_ExternalCall_m2932_Arg1_ParameterInfo,
	Application_t1078_CustomAttributesCacheGenerator_Application_t1078_Application_BuildInvocationForArguments_m5841_Arg1_ParameterInfo,
	Application_t1078_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m5842,
	Application_t1078_CustomAttributesCacheGenerator_Application_OpenURL_m2837,
	Application_t1078_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m5844,
	Application_t1078_CustomAttributesCacheGenerator_Application_t1078____persistentDataPath_PropertyInfo,
	Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_get_enabled_m3117,
	Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_set_enabled_m4869,
	Behaviour_t937_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4627,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4680,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4679,
	Camera_t439_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m3156,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_depth_m4592,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4693,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_eventMask_m5850,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5851,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5852,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5853,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_targetTexture_m5855,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5856,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5857,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m5858,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m5859,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5860,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5861,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_main_m2871,
	Camera_t439_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5862,
	Camera_t439_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5863,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5868,
	Camera_t439_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5870,
	CameraCallback_t1079_CustomAttributesCacheGenerator,
	Debug_t1080_CustomAttributesCacheGenerator_Debug_Internal_Log_m5871,
	Debug_t1080_CustomAttributesCacheGenerator_Debug_t1080_Debug_Internal_Log_m5871_Arg2_ParameterInfo,
	Debug_t1080_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5872,
	Debug_t1080_CustomAttributesCacheGenerator_Debug_t1080_Debug_Internal_LogException_m5872_Arg1_ParameterInfo,
	Debug_t1080_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m2930,
	Display_t1083_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5898,
	Display_t1083_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5899,
	Display_t1083_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5900,
	Display_t1083_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5901,
	Display_t1083_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5902,
	Display_t1083_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5903,
	Display_t1083_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5904,
	Display_t1083_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5905,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2879,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2878,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5906,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5907,
	MonoBehaviour_t67_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5908,
	Input_t561_CustomAttributesCacheGenerator_Input_GetAxis_m3168,
	Input_t561_CustomAttributesCacheGenerator_Input_GetAxisRaw_m4671,
	Input_t561_CustomAttributesCacheGenerator_Input_GetButtonDown_m4670,
	Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButton_m3081,
	Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2874,
	Input_t561_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3080,
	Input_t561_CustomAttributesCacheGenerator_Input_get_mousePosition_m2872,
	Input_t561_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4644,
	Input_t561_CustomAttributesCacheGenerator_Input_get_mousePresent_m4669,
	Input_t561_CustomAttributesCacheGenerator_Input_GetTouch_m2619,
	Input_t561_CustomAttributesCacheGenerator_Input_get_touchCount_m2618,
	Input_t561_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4899,
	Input_t561_CustomAttributesCacheGenerator_Input_get_compositionString_m4837,
	Input_t561_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5910,
	HideFlags_t1086_CustomAttributesCacheGenerator,
	Object_t557_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m5913,
	Object_t557_CustomAttributesCacheGenerator_Object_Destroy_m5914,
	Object_t557_CustomAttributesCacheGenerator_Object_t557_Object_Destroy_m5914_Arg1_ParameterInfo,
	Object_t557_CustomAttributesCacheGenerator_Object_Destroy_m2777,
	Object_t557_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5915,
	Object_t557_CustomAttributesCacheGenerator_Object_t557_Object_DestroyImmediate_m5915_Arg1_ParameterInfo,
	Object_t557_CustomAttributesCacheGenerator_Object_DestroyImmediate_m4901,
	Object_t557_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m5916,
	Object_t557_CustomAttributesCacheGenerator_Object_get_name_m4872,
	Object_t557_CustomAttributesCacheGenerator_Object_set_name_m4962,
	Object_t557_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2696,
	Object_t557_CustomAttributesCacheGenerator_Object_set_hideFlags_m4873,
	Object_t557_CustomAttributesCacheGenerator_Object_ToString_m3329,
	Object_t557_CustomAttributesCacheGenerator_Object_Instantiate_m3007,
	Object_t557_CustomAttributesCacheGenerator_Object_FindObjectOfType_m5922,
	Component_t607_CustomAttributesCacheGenerator_Component_get_transform_m2901,
	Component_t607_CustomAttributesCacheGenerator_Component_get_gameObject_m2695,
	Component_t607_CustomAttributesCacheGenerator_Component_GetComponent_m5010,
	Component_t607_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5924,
	Component_t607_CustomAttributesCacheGenerator_Component_GetComponent_m6717,
	Component_t607_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5925,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m5927,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5928,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponent_m6721,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5929,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5930,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_transform_m2904,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_layer_m4875,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_set_layer_m4876,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SetActive_m2833,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m4628,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_get_tag_m3171,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3076,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_SendMessage_m5931,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5931_Arg1_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_SendMessage_m5931_Arg2_ParameterInfo,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5932,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_AddComponent_m5933,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5934,
	GameObject_t284_CustomAttributesCacheGenerator_GameObject_t284_GameObject_Internal_CreateGameObject_m5934_Arg0_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5938,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5939,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5940,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5941,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5942,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5943,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5944,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5945,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5946,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5947,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5948,
	Transform_t323_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5949,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetParent_m3008,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5950,
	Transform_t323_CustomAttributesCacheGenerator_Transform_Rotate_m3146,
	Transform_t323_CustomAttributesCacheGenerator_Transform_t323_Transform_Rotate_m5951_Arg1_ParameterInfo,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5952,
	Transform_t323_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5953,
	Transform_t323_CustomAttributesCacheGenerator_Transform_get_childCount_m3151,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4874,
	Transform_t323_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3009,
	Transform_t323_CustomAttributesCacheGenerator_Transform_GetChild_m3150,
	Time_t1088_CustomAttributesCacheGenerator_Time_get_time_m3029,
	Time_t1088_CustomAttributesCacheGenerator_Time_get_deltaTime_m3053,
	Time_t1088_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4673,
	Time_t1088_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4705,
	Time_t1088_CustomAttributesCacheGenerator_Time_set_timeScale_m2838,
	Random_t1089_CustomAttributesCacheGenerator_Random_set_seed_m3103,
	Random_t1089_CustomAttributesCacheGenerator_Random_Range_m3050,
	Random_t1089_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5955,
	PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m5958,
	PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5959,
	PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_t1091_PlayerPrefs_GetString_m5959_Arg1_ParameterInfo,
	PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2797,
	PlayerPrefs_t1091_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2796,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5977,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m5978_Arg3_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m5978_Arg4_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_Raycast_m2875,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m4759_Arg2_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_Raycast_m4759_Arg3_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m4695_Arg1_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m4695_Arg2_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m5979_Arg2_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_t1093_Physics_RaycastAll_m5979_Arg3_ParameterInfo,
	Physics_t1093_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5980,
	Collider_t610_CustomAttributesCacheGenerator_Collider_set_enabled_m2888,
	Collider_t610_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m5981,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3063,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_IgnoreLayerCollision_m3063_Arg2_ParameterInfo,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5985,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_Raycast_m4760,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg2_ParameterInfo,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg3_ParameterInfo,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg4_ParameterInfo,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_t641_Physics2D_Raycast_m5986_Arg5_ParameterInfo,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m4683,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5987,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3075,
	Physics2D_t641_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m5988,
	Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m3135,
	Collider2D_t484_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5990,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_set_clip_m2863,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Play_m6006,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_t477_AudioSource_Play_m6006_Arg0_ParameterInfo,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Play_m3133,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m3149,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_Stop_m2864,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m3134,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m6007,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_t477_AudioSource_PlayOneShot_m6007_Arg1_ParameterInfo,
	AudioSource_t477_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2877,
	AnimationEvent_t1104_CustomAttributesCacheGenerator_AnimationEvent_t1104____data_PropertyInfo,
	AnimationCurve_t1108_CustomAttributesCacheGenerator,
	AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_t1108_AnimationCurve__ctor_m6033_Arg0_ParameterInfo,
	AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m6035,
	AnimationCurve_t1108_CustomAttributesCacheGenerator_AnimationCurve_Init_m6037,
	AnimatorStateInfo_t1105_CustomAttributesCacheGenerator_AnimatorStateInfo_t1105____nameHash_PropertyInfo,
	Animator_t526_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4954,
	Animator_t526_CustomAttributesCacheGenerator_Animator_StringToHash_m6056,
	Animator_t526_CustomAttributesCacheGenerator_Animator_SetIntegerString_m6057,
	Animator_t526_CustomAttributesCacheGenerator_Animator_SetTriggerString_m6058,
	Animator_t526_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m6059,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_get_text_m2869,
	TextMesh_t320_CustomAttributesCacheGenerator_TextMesh_set_text_m2870,
	CharacterInfo_t1114_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1114_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1114_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1114_CustomAttributesCacheGenerator_flipped,
	Font_t756_CustomAttributesCacheGenerator_Font_get_material_m4966,
	Font_t756_CustomAttributesCacheGenerator_Font_HasCharacter_m4858,
	Font_t756_CustomAttributesCacheGenerator_Font_get_dynamic_m4968,
	Font_t756_CustomAttributesCacheGenerator_Font_get_fontSize_m4969,
	FontTextureRebuildCallback_t1115_CustomAttributesCacheGenerator,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_Init_m6087,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m6088,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6091,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4871,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m6092,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m6093,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m6094,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m6095,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m6096,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m6097,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4851,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m6098,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m6099,
	TextGenerator_t794_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4888,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4755,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m4983,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3180,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m6110,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3025,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m4987,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4783,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m4988,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4742,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4757,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4756,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4764,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4729,
	Canvas_t375_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4965,
	CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m3152,
	CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4946,
	CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m6112,
	CanvasGroup_t505_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4741,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m6115,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4745,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5020,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4737,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m6116,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m6117,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4733,
	CanvasRenderer_t761_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4730,
	RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6119,
	RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6121,
	RectTransformUtility_t911_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4744,
	Request_t1119_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1119_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1119_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1119_CustomAttributesCacheGenerator_Request_get_sourceId_m6126,
	Request_t1119_CustomAttributesCacheGenerator_Request_get_appId_m6127,
	Request_t1119_CustomAttributesCacheGenerator_Request_get_domain_m6128,
	Response_t1121_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1121_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1121_CustomAttributesCacheGenerator_Response_get_success_m6137,
	Response_t1121_CustomAttributesCacheGenerator_Response_set_success_m6138,
	Response_t1121_CustomAttributesCacheGenerator_Response_get_extendedInfo_m6139,
	Response_t1121_CustomAttributesCacheGenerator_Response_set_extendedInfo_m6140,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m6145,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m6146,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m6147,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m6148,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m6149,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m6150,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m6151,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m6152,
	CreateMatchRequest_t1124_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m6153,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m6156,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m6157,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m6158,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m6159,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m6160,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m6161,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m6162,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m6163,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m6164,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m6165,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m6166,
	CreateMatchResponse_t1125_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m6167,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m6171,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m6172,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m6173,
	JoinMatchRequest_t1126_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m6174,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m6177,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m6178,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m6179,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m6180,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m6181,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m6182,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m6183,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m6184,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m6185,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m6186,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m6187,
	JoinMatchResponse_t1127_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m6188,
	DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m6192,
	DestroyMatchRequest_t1128_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m6193,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m6196,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m6197,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m6198,
	DropConnectionRequest_t1129_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m6199,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m6202,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m6203,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m6204,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m6205,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m6206,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m6207,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m6208,
	ListMatchRequest_t1130_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m6209,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m6212,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m6213,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m6214,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m6215,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m6216,
	MatchDirectConnectInfo_t1131_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m6217,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m6221,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m6222,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_name_m6223,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_name_m6224,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m6225,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m6226,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m6227,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m6228,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m6229,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m6230,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m6231,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m6232,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m6233,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m6234,
	MatchDesc_t1133_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m6235,
	ListMatchResponse_t1135_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1135_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6239,
	ListMatchResponse_t1135_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6240,
	AppID_t1136_CustomAttributesCacheGenerator,
	SourceID_t1137_CustomAttributesCacheGenerator,
	NetworkID_t1138_CustomAttributesCacheGenerator,
	NodeID_t1139_CustomAttributesCacheGenerator,
	NetworkMatch_t1144_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6733,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6739,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6740,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1314_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6742,
	JsonArray_t1145_CustomAttributesCacheGenerator,
	JsonObject_t1146_CustomAttributesCacheGenerator,
	SimpleJson_t1149_CustomAttributesCacheGenerator,
	SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6284,
	SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6296,
	SimpleJson_t1149_CustomAttributesCacheGenerator_SimpleJson_t1149____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1147_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1147_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6746,
	PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6313,
	PocoJsonSerializerStrategy_t1148_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6314,
	ReflectionUtils_t1163_CustomAttributesCacheGenerator,
	ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetConstructorInfo_m6339_Arg1_ParameterInfo,
	ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetContructor_m6344_Arg1_ParameterInfo,
	ReflectionUtils_t1163_CustomAttributesCacheGenerator_ReflectionUtils_t1163_ReflectionUtils_GetConstructorByReflection_m6346_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1317_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1156_CustomAttributesCacheGenerator_ConstructorDelegate_t1156_ConstructorDelegate_Invoke_m6324_Arg0_ParameterInfo,
	ConstructorDelegate_t1156_CustomAttributesCacheGenerator_ConstructorDelegate_t1156_ConstructorDelegate_BeginInvoke_m6325_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1158_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1159_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1160_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1161_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1162_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1165_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t960_CustomAttributesCacheGenerator,
	RequireComponent_t954_CustomAttributesCacheGenerator,
	WritableAttribute_t1171_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1172_CustomAttributesCacheGenerator,
	GUIStateObjects_t1184_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m6379,
	Achievement_t1187_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1187_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1187_CustomAttributesCacheGenerator_Achievement_get_id_m6401,
	Achievement_t1187_CustomAttributesCacheGenerator_Achievement_set_id_m6402,
	Achievement_t1187_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6403,
	Achievement_t1187_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6404,
	AchievementDescription_t1188_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1188_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6411,
	AchievementDescription_t1188_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6412,
	Score_t1189_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1189_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1189_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6421,
	Score_t1189_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6422,
	Score_t1189_CustomAttributesCacheGenerator_Score_get_value_m6423,
	Score_t1189_CustomAttributesCacheGenerator_Score_set_value_m6424,
	Leaderboard_t1027_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t1027_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t1027_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t1027_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_id_m6432,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_id_m6433,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6434,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6435,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_range_m6436,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_range_m6437,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6438,
	Leaderboard_t1027_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6439,
	PropertyAttribute_t1203_CustomAttributesCacheGenerator,
	TooltipAttribute_t963_CustomAttributesCacheGenerator,
	SpaceAttribute_t961_CustomAttributesCacheGenerator,
	RangeAttribute_t958_CustomAttributesCacheGenerator,
	TextAreaAttribute_t964_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t962_CustomAttributesCacheGenerator,
	StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6482,
	StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6485,
	StackTraceUtility_t1206_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6487,
	SharedBetweenAnimatorsAttribute_t1207_CustomAttributesCacheGenerator,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1214_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1218_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1218_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1218_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1218_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1218_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1220_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1223_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1223_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1224_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1225_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1226_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t952_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1228_CustomAttributesCacheGenerator,
};
