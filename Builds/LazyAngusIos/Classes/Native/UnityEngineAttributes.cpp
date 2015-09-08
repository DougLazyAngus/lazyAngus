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
extern TypeInfo* InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t821_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3454);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t821 * tmp;
		tmp = (ExtensionAttribute_t821 *)il2cpp_codegen_object_new (ExtensionAttribute_t821_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4519(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2183 * tmp;
		tmp = (InternalsVisibleToAttribute_t2183 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2183_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8013(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2702_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2702_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_t917_LayerMask_GetMask_m8864_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void RuntimePlatform_t804_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void RuntimePlatform_t804_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Coroutine_t972_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8870_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MeshFilter_t810_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_t525_Mesh_Internal_Create_m8944_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_vertices_m4508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_uv_m4510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_triangles_m4509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_enabled_m4182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_material_m4161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_material_m4163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_materials_m4434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_bounds_m4191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_get_width_m3821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_get_height_m3836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_get_dpi_m3943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Screen_t2722_CustomAttributesCacheGenerator_Screen_get_orientation_m3835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8971_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8972_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8972_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RenderTexture_t2723_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RenderTexture_t2723_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUILayer_t2726_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Gradient_t2729_CustomAttributesCacheGenerator_Gradient_Init_m8983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Gradient_t2729_CustomAttributesCacheGenerator_Gradient_Cleanup_m8984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_set_changed_m8996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_get_enabled_m8997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_set_enabled_m3854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m9002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m9005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m9012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Label_m3832_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Box_m3848_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Button_m3830_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_TextField_m3833_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_TextField_m4269_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Toggle_m3878_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_SelectionGrid_m3876_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_SelectionGrid_m9035_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginHorizontal_m3831_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginHorizontal_m9036_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginVertical_m3845_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginVertical_m9037_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginScrollView_m3853_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginScrollView_m9038_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_t722_GUILayoutUtility_GetRect_m9059_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_t722_GUILayoutUtility_GetRect_m9061_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIClip_t2745_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIClip_t2745_CustomAttributesCacheGenerator_GUIClip_Pop_m9129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISettings_t2746_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISettings_t2746_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISettings_t2746_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISettings_t2746_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISettings_t2746_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t827_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t827 * tmp;
		tmp = (ExecuteInEditMode_t827 *)il2cpp_codegen_object_new (ExecuteInEditMode_t827_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m4659(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUISkin_t798_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUIContent_t800_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUIContent_t800_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void GUIContent_t800_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_Init_m9198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_Init_m9204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_left_m6343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_left_m9206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_right_m9207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_right_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_top_m6344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_top_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9240_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6242(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Init_m9261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Cleanup_m9263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_rawType_m6207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_type_m4277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_modifiers_m6203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_character_m6205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_commandName_m9269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_get_keyCode_m6204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_Use_m9272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Event_t801_CustomAttributesCacheGenerator_Event_PopEvent_m6208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1126_il2cpp_TypeInfo_var;
void EventModifiers_t2755_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2004);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1126 * tmp;
		tmp = (FlagsAttribute_t1126 *)il2cpp_codegen_object_new (FlagsAttribute_t1126_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6380(tmp, NULL);
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
void Vector3_t538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2857_il2cpp_TypeInfo_var;
void Color32_t773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2857_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4636);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2857 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2857 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2857_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m10030(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t806_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t1063_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Mathf_t745_CustomAttributesCacheGenerator_Mathf_t745_Mathf_SmoothDamp_m6263_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Mathf_t745_CustomAttributesCacheGenerator_Mathf_t745_Mathf_SmoothDamp_m6263_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1126_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2004);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1126 * tmp;
		tmp = (FlagsAttribute_t1126 *)il2cpp_codegen_object_new (FlagsAttribute_t1126_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6380(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Resources_t808_CustomAttributesCacheGenerator_Resources_Load_m4303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextAsset_t797_CustomAttributesCacheGenerator_TextAsset_get_text_m4260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Shader_t2762_CustomAttributesCacheGenerator_Shader_PropertyToID_m9417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_SetTexture_m9422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_GetTexture_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_SetFloat_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_HasProperty_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void Material_t526_CustomAttributesCacheGenerator_Material_t526_Material_Internal_CreateWithMaterial_m9428_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_rect_m6134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_texture_m6127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_border_m6128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SpriteRenderer_t680_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void SpriteRenderer_t680_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9454_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9462_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9464_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9464_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_URLEncode_m9468_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_QPEncode_m9470_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_SevenBitClean_m9473_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void CacheIndex_t2767_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void UnityString_t2768_CustomAttributesCacheGenerator_UnityString_t2768_UnityString_Format_m9475_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AsyncOperation_t2703_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_isPlaying_m4300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_isEditor_m6245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_platform_m3929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_t1533_Application_ExternalCall_m4227_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_t1533_Application_BuildInvocationForArguments_m9486_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_get_unityVersion_m4304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_OpenURL_m4120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2985_il2cpp_TypeInfo_var;
void Application_t1533_CustomAttributesCacheGenerator_Application_t1533____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4637);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2985 * tmp;
		tmp = (SecurityCriticalAttribute_t2985 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2985_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m10374(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_depth_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_eventMask_m9496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_main_m4167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var;
void CameraCallback_t2769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3458);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2216 * tmp;
		tmp = (EditorBrowsableAttribute_t2216 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8310(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Debug_t2770_CustomAttributesCacheGenerator_Debug_Internal_Log_m9516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void Debug_t2770_CustomAttributesCacheGenerator_Debug_t2770_Debug_Internal_Log_m9516_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Debug_t2770_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void Debug_t2770_CustomAttributesCacheGenerator_Debug_t2770_Debug_Internal_LogException_m9517_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Debug_t2770_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Display_t2773_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetButtonDown_m6021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButton_m4384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_get_mousePosition_m4168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_get_mousePresent_m6020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_GetTouch_m3850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_get_touchCount_m3849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_get_compositionString_m6184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Input_t725_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1126_il2cpp_TypeInfo_var;
void HideFlags_t2776_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2004);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1126 * tmp;
		tmp = (FlagsAttribute_t1126 *)il2cpp_codegen_object_new (FlagsAttribute_t1126_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m6380(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_Destroy_m9559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_t721_Object_Destroy_m9559_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_Destroy_m4060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_t721_Object_DestroyImmediate_m9560_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_get_name_m3917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_set_name_m6304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_set_hideFlags_m6218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_ToString_m527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_Instantiate_m4321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void Object_t721_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_get_transform_m4196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_get_gameObject_m3916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_GetComponent_m6350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_GetComponent_m10377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Component_t779_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m4489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9576_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9576_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4632);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2917 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2917 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2917_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m10241(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2863_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9579_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4633);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2863 * tmp;
		tmp = (WritableAttribute_t2863 *)il2cpp_codegen_object_new (WritableAttribute_t2863_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m10038(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9597_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Time_t2778_CustomAttributesCacheGenerator_Time_get_time_m4301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Time_t2778_CustomAttributesCacheGenerator_Time_get_deltaTime_m4307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Time_t2778_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Time_t2778_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Time_t2778_CustomAttributesCacheGenerator_Time_set_timeScale_m4121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Random_t2779_CustomAttributesCacheGenerator_Random_set_seed_m4408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Random_t2779_CustomAttributesCacheGenerator_Random_Range_m4355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Random_t2779_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetInt_m4464_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetFloat_m4462_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetString_m7902_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void LocalNotification_t2782_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RemoteNotification_t2783_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m9651_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m9651_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_Raycast_m4171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m6107_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m6107_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m6045_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m6045_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m9652_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m9652_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics_t2787_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Collider_t782_CustomAttributesCacheGenerator_Collider_set_enabled_m4183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Collider_t782_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_IgnoreLayerCollision_m4385_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_Raycast_m6108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Collider2D_t717_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Collider2D_t717_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CircleCollider2D_t624_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CircleCollider2D_t624_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_set_clip_m4159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Play_m9679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_t615_AudioSource_Play_m9679_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Play_m4447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Stop_m4160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m9680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_t615_AudioSource_PlayOneShot_m9681_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4629);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10236(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var;
void AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4634);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2915 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2915 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2915_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m10240(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void AnimationEvent_t2798_CustomAttributesCacheGenerator_AnimationEvent_t2798____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2802_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_t2802_AnimationCurve__ctor_m9707_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_Init_m9711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2799_CustomAttributesCacheGenerator_AnimatorStateInfo_t2799____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Animator_t1065_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Animator_t1065_CustomAttributesCacheGenerator_Animator_StringToHash_m9730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Animator_t1065_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Animator_t1065_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void CharacterInfo_t2808_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void CharacterInfo_t2808_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void CharacterInfo_t2808_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t825_il2cpp_TypeInfo_var;
void CharacterInfo_t2808_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t825 * tmp;
		tmp = (ObsoleteAttribute_t825 *)il2cpp_codegen_object_new (ObsoleteAttribute_t825_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4626(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Font_t933_CustomAttributesCacheGenerator_Font_get_material_m6308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Font_t933_CustomAttributesCacheGenerator_Font_HasCharacter_m6206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Font_t933_CustomAttributesCacheGenerator_Font_get_dynamic_m6310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Font_t933_CustomAttributesCacheGenerator_Font_get_fontSize_m6311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3458);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2216 * tmp;
		tmp = (EditorBrowsableAttribute_t2216 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8310(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_Init_m9760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2856_il2cpp_TypeInfo_var;
void RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4631);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2856 * tmp;
		tmp = (WrapperlessIcall_t2856 *)il2cpp_codegen_object_new (WrapperlessIcall_t2856_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m10029(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_Request_get_sourceId_m9799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_Request_get_appId_m9800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2813_CustomAttributesCacheGenerator_Request_get_domain_m9801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_Response_get_success_m9810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_Response_set_success_m9811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2815_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_name_m9896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_name_m9897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2829_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2829_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2829_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2987_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
void AppID_t2830_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4638);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2987 * tmp;
		tmp = (DefaultValueAttribute_t2987 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2987_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10392(tmp, Box(AppID_t2830_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2987_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
void SourceID_t2831_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4638);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2987 * tmp;
		tmp = (DefaultValueAttribute_t2987 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2987_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10392(tmp, Box(SourceID_t2831_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2987_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
void NetworkID_t2832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4638);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2987 * tmp;
		tmp = (DefaultValueAttribute_t2987 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2987_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10392(tmp, Box(NetworkID_t2832_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2987_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
void NodeID_t2833_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4638);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2987 * tmp;
		tmp = (DefaultValueAttribute_t2987 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2987_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m10392(tmp, Box(NodeID_t2833_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2838_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10393(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10399(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10400(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10402(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10403(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var;
void JsonArray_t2839_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3458);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2216 * tmp;
		tmp = (EditorBrowsableAttribute_t2216 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8310(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void JsonObject_t2840_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3458);
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2216 * tmp;
		tmp = (EditorBrowsableAttribute_t2216 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8310(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
void SimpleJson_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var;
void SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4640);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2991 * tmp;
		tmp = (SuppressMessageAttribute_t2991 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10405(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10406(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var;
void SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4640);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2991 * tmp;
		tmp = (SuppressMessageAttribute_t2991 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10405(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var;
void SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_t2843____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3458);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2216 * tmp;
		tmp = (EditorBrowsableAttribute_t2216 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2216_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m8310(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2841_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2841_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4640);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2991 * tmp;
		tmp = (SuppressMessageAttribute_t2991 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10405(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10406(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4640);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2991 * tmp;
		tmp = (SuppressMessageAttribute_t2991 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10405(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10406(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4640);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2991 * tmp;
		tmp = (SuppressMessageAttribute_t2991 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2991_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m10405(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m10406(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var;
void ReflectionUtils_t2855_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2990 * tmp;
		tmp = (GeneratedCodeAttribute_t2990 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2990_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m10404(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetConstructorInfo_m10013_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetContructor_m10018_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetConstructorByReflection_m10020_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2992_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2849_CustomAttributesCacheGenerator_ConstructorDelegate_t2849_ConstructorDelegate_Invoke_m9998_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t822_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2849_CustomAttributesCacheGenerator_ConstructorDelegate_t2849_ConstructorDelegate_BeginInvoke_m9999_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t822 * tmp;
		tmp = (ParamArrayAttribute_t822 *)il2cpp_codegen_object_new (ParamArrayAttribute_t822_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4538(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2850_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2851_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2852_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2854_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1135_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void RequireComponent_t828_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void WritableAttribute_t2863_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2864_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void GUIStateObjects_t2875_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_Achievement_get_id_m10075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_Achievement_set_id_m10076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2878_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2879_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2879_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2879_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_Score_get_value_m10097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2880_CustomAttributesCacheGenerator_Score_set_value_m10098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_id_m10106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_id_m10107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_range_m10110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_range_m10111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void TooltipAttribute_t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void SpaceAttribute_t1136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void RangeAttribute_t1134_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2984 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2984 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2984_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m10370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2896_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void ArgumentCache_t2903_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
void PersistentCall_t2907_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void PersistentCall_t2907_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
void PersistentCall_t2907_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void PersistentCall_t2907_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void PersistentCall_t2907_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2909_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var;
void UnityEventBase_t2912_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2006);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1129 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1129 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1129_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m6399(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t823_il2cpp_TypeInfo_var;
void UnityEventBase_t2912_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t823 * tmp;
		tmp = (SerializeField_t823 *)il2cpp_codegen_object_new (SerializeField_t823_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4539(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1128_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2913_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2005);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1128 * tmp;
		tmp = (AddComponentMenu_t1128 *)il2cpp_codegen_object_new (AddComponentMenu_t1128_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m6398(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2914_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2915_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1129_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m8173(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m8172(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t826_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2917_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t826 * tmp;
		tmp = (AttributeUsageAttribute_t826 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t826_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4656(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[828] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2702_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8852,
	AssetBundleCreateRequest_t2702_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8853,
	AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8857,
	AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8858,
	AssetBundle_t2704_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8859,
	LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8862,
	LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8863,
	LayerMask_t917_CustomAttributesCacheGenerator_LayerMask_t917_LayerMask_GetMask_m8864_Arg0_ParameterInfo,
	RuntimePlatform_t804_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t804_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t804_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4506,
	SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8865,
	SystemInfo_t2708_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7949,
	Coroutine_t972_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8868,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8870,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8870_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8871,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8873,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8878,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8879,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8880,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8881,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8882,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8883,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8884,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8885,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8886,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8887,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8888,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8889,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8890,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8891,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8892,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8893,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8894,
	GameCenterPlatform_t819_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8896,
	GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8940,
	GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8941,
	GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8942,
	GcLeaderboard_t2720_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8943,
	MeshFilter_t810_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4348,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8944,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_t525_Mesh_Internal_Create_m8944_Arg0_ParameterInfo,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_vertices_m4508,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_uv_m4510,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4511,
	Mesh_t525_CustomAttributesCacheGenerator_Mesh_set_triangles_m4509,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_enabled_m4182,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_material_m4161,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_material_m4163,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_set_materials_m4434,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_bounds_m4191,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m6039,
	Renderer_t604_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m6040,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_get_width_m3821,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_get_height_m3836,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_get_dpi_m3943,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_get_fullScreen_m4256,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_set_fullScreen_m4257,
	Screen_t2722_CustomAttributesCacheGenerator_Screen_get_orientation_m3835,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8966,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8967,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8971,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8971_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m6081,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m6155,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8972,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8972_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8972_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3861,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3860,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8973,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3862,
	RenderTexture_t2723_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8974,
	RenderTexture_t2723_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8975,
	GUILayer_t2726_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8979,
	Gradient_t2729_CustomAttributesCacheGenerator_Gradient_Init_m8983,
	Gradient_t2729_CustomAttributesCacheGenerator_Gradient_Cleanup_m8984,
	GUI_t723_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t723_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t723_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8991,
	GUI_t723_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8992,
	GUI_t723_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8993,
	GUI_t723_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8994,
	GUI_t723_CustomAttributesCacheGenerator_GUI_set_changed_m8996,
	GUI_t723_CustomAttributesCacheGenerator_GUI_get_enabled_m8997,
	GUI_t723_CustomAttributesCacheGenerator_GUI_set_enabled_m3854,
	GUI_t723_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8999,
	GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m9002,
	GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m9005,
	GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m9012,
	GUI_t723_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m9019,
	GUI_t723_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m9021,
	GUI_t723_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m9028,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Label_m3832_Arg1_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Box_m3848_Arg1_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Button_m3830_Arg1_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_TextField_m3833_Arg1_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_TextField_m4269_Arg2_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_Toggle_m3878_Arg2_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_SelectionGrid_m3876_Arg3_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_SelectionGrid_m9035_Arg4_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginHorizontal_m3831_Arg0_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginHorizontal_m9036_Arg2_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginVertical_m3845_Arg0_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginVertical_m9037_Arg2_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginScrollView_m3853_Arg1_ParameterInfo,
	GUILayout_t2732_CustomAttributesCacheGenerator_GUILayout_t2732_GUILayout_BeginScrollView_m9038_Arg6_ParameterInfo,
	GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m9053,
	GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m9055,
	GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m9056,
	GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_t722_GUILayoutUtility_GetRect_m9059_Arg2_ParameterInfo,
	GUILayoutUtility_t722_CustomAttributesCacheGenerator_GUILayoutUtility_t722_GUILayoutUtility_GetRect_m9061_Arg3_ParameterInfo,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m9103,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m9107,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m9111,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m9112,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m9113,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m9114,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m9115,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m9116,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m9118,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m9120,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m9124,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m9125,
	GUIUtility_t2744_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m9126,
	GUIClip_t2745_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m9128,
	GUIClip_t2745_CustomAttributesCacheGenerator_GUIClip_Pop_m9129,
	GUISettings_t2746_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2746_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2746_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2746_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2746_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t798_CustomAttributesCacheGenerator,
	GUISkin_t798_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t798_CustomAttributesCacheGenerator_m_box,
	GUISkin_t798_CustomAttributesCacheGenerator_m_button,
	GUISkin_t798_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t798_CustomAttributesCacheGenerator_m_label,
	GUISkin_t798_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t798_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t798_CustomAttributesCacheGenerator_m_window,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t798_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t798_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t798_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t798_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t798_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t800_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t800_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t800_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_Init_m9198,
	GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m9199,
	GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m9200,
	GUIStyleState_t743_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m9201,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_Init_m9204,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_Cleanup_m9205,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_left_m6343,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_left_m9206,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_right_m9207,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_right_m9208,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_top_m6344,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_top_m9209,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_bottom_m4280,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_set_bottom_m9210,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m6337,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_get_vertical_m6338,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m9212,
	RectOffset_t718_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m9214,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m9218,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m9219,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m9220,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m9221,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m9222,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m9223,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m9225,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m9226,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m9227,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3822,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m9228,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3823,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m9229,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m9230,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m9231,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3827,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m9232,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3826,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m9233,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3923,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3924,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m9236,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m9239,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m9240_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m9242,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m9243,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m9247,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m9249,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m9251,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m9254,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m9257,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m9259,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6241,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m6242,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg1_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg2_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg3_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg4_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg5_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_t967_TouchScreenKeyboard_Open_m9260_Arg6_ParameterInfo,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m6182,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m6183,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m6240,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m6181,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m6239,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m6194,
	TouchScreenKeyboard_t967_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m6193,
	Event_t801_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t801_CustomAttributesCacheGenerator_Event_Init_m9261,
	Event_t801_CustomAttributesCacheGenerator_Event_Cleanup_m9263,
	Event_t801_CustomAttributesCacheGenerator_Event_get_rawType_m6207,
	Event_t801_CustomAttributesCacheGenerator_Event_get_type_m4277,
	Event_t801_CustomAttributesCacheGenerator_Event_GetTypeForControl_m9264,
	Event_t801_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m9266,
	Event_t801_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m9268,
	Event_t801_CustomAttributesCacheGenerator_Event_get_modifiers_m6203,
	Event_t801_CustomAttributesCacheGenerator_Event_get_character_m6205,
	Event_t801_CustomAttributesCacheGenerator_Event_get_commandName_m9269,
	Event_t801_CustomAttributesCacheGenerator_Event_get_keyCode_m6204,
	Event_t801_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m9270,
	Event_t801_CustomAttributesCacheGenerator_Event_Use_m9272,
	Event_t801_CustomAttributesCacheGenerator_Event_PopEvent_m6208,
	EventModifiers_t2755_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t538_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t773_CustomAttributesCacheGenerator,
	Quaternion_t806_CustomAttributesCacheGenerator,
	Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m9297,
	Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m9300,
	Quaternion_t806_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m9302,
	Matrix4x4_t1104_CustomAttributesCacheGenerator,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m9318,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m9320,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m9322,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m9325,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m9337,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m9340,
	Matrix4x4_t1104_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m9341,
	Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m9358,
	Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m9361,
	Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m9364,
	Bounds_t783_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9368,
	Vector4_t1063_CustomAttributesCacheGenerator,
	Mathf_t745_CustomAttributesCacheGenerator_Mathf_t745_Mathf_SmoothDamp_m6263_Arg4_ParameterInfo,
	Mathf_t745_CustomAttributesCacheGenerator_Mathf_t745_Mathf_SmoothDamp_m6263_Arg5_ParameterInfo,
	DrivenTransformProperties_t2757_CustomAttributesCacheGenerator,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m9399,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m9400,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m9401,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m9402,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m9403,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m9404,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m9405,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m9406,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m9407,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m9408,
	RectTransform_t545_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m9409,
	Resources_t808_CustomAttributesCacheGenerator_Resources_Load_m4303,
	TextAsset_t797_CustomAttributesCacheGenerator_TextAsset_get_text_m4260,
	SerializePrivateVariables_t2761_CustomAttributesCacheGenerator,
	Shader_t2762_CustomAttributesCacheGenerator_Shader_PropertyToID_m9417,
	Material_t526_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m9420,
	Material_t526_CustomAttributesCacheGenerator_Material_SetTexture_m9422,
	Material_t526_CustomAttributesCacheGenerator_Material_GetTexture_m9424,
	Material_t526_CustomAttributesCacheGenerator_Material_SetFloat_m9426,
	Material_t526_CustomAttributesCacheGenerator_Material_HasProperty_m9427,
	Material_t526_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m9428,
	Material_t526_CustomAttributesCacheGenerator_Material_t526_Material_Internal_CreateWithMaterial_m9428_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m9431,
	SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m9434,
	SphericalHarmonicsL2_t2763_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m9437,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_rect_m6134,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m6130,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_texture_m6127,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_textureRect_m6152,
	Sprite_t512_CustomAttributesCacheGenerator_Sprite_get_border_m6128,
	SpriteRenderer_t680_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9447,
	SpriteRenderer_t680_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9448,
	DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m6140,
	DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m6139,
	DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_GetPadding_m6133,
	DataUtility_t2764_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9449,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9452,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9453,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m4356,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9454_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9455,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9458,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m4014,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9459,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7907,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7913,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3865,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9462_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3864,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9464_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9464_Arg3_ParameterInfo,
	WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_URLEncode_m9468_Arg1_ParameterInfo,
	WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_QPEncode_m9470_Arg1_ParameterInfo,
	WWWTranscoder_t2766_CustomAttributesCacheGenerator_WWWTranscoder_t2766_WWWTranscoder_SevenBitClean_m9473_Arg1_ParameterInfo,
	CacheIndex_t2767_CustomAttributesCacheGenerator,
	UnityString_t2768_CustomAttributesCacheGenerator_UnityString_t2768_UnityString_Format_m9475_Arg1_ParameterInfo,
	AsyncOperation_t2703_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9477,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3915,
	Application_t1533_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9484,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_isPlaying_m4300,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_isEditor_m6245,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m4226,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_platform_m3929,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7947,
	Application_t1533_CustomAttributesCacheGenerator_Application_t1533_Application_ExternalCall_m4227_Arg1_ParameterInfo,
	Application_t1533_CustomAttributesCacheGenerator_Application_t1533_Application_BuildInvocationForArguments_m9486_Arg1_ParameterInfo,
	Application_t1533_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9487,
	Application_t1533_CustomAttributesCacheGenerator_Application_get_unityVersion_m4304,
	Application_t1533_CustomAttributesCacheGenerator_Application_OpenURL_m4120,
	Application_t1533_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9489,
	Application_t1533_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1533_CustomAttributesCacheGenerator_Application_t1533____persistentDataPath_PropertyInfo,
	Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_get_enabled_m5977,
	Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_set_enabled_m6215,
	Behaviour_t1114_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5978,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m6031,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m6030,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m4518,
	Camera_t548_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4491,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_depth_m5943,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_cullingMask_m6043,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_eventMask_m9496,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9497,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9498,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9499,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9501,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9502,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9503,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9506,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_main_m4167,
	Camera_t548_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9507,
	Camera_t548_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9508,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9513,
	Camera_t548_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9515,
	CameraCallback_t2769_CustomAttributesCacheGenerator,
	Debug_t2770_CustomAttributesCacheGenerator_Debug_Internal_Log_m9516,
	Debug_t2770_CustomAttributesCacheGenerator_Debug_t2770_Debug_Internal_Log_m9516_Arg2_ParameterInfo,
	Debug_t2770_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9517,
	Debug_t2770_CustomAttributesCacheGenerator_Debug_t2770_Debug_Internal_LogException_m9517_Arg1_ParameterInfo,
	Debug_t2770_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m4225,
	Display_t2773_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9542,
	Display_t2773_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9543,
	Display_t2773_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9544,
	Display_t2773_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9545,
	Display_t2773_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9546,
	Display_t2773_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9547,
	Display_t2773_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9548,
	Display_t2773_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9549,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m4175,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m4174,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9550,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9552,
	Input_t725_CustomAttributesCacheGenerator_Input_GetAxisRaw_m6022,
	Input_t725_CustomAttributesCacheGenerator_Input_GetButtonDown_m6021,
	Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButton_m4384,
	Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m4170,
	Input_t725_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m4383,
	Input_t725_CustomAttributesCacheGenerator_Input_get_mousePosition_m4168,
	Input_t725_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5995,
	Input_t725_CustomAttributesCacheGenerator_Input_get_mousePresent_m6020,
	Input_t725_CustomAttributesCacheGenerator_Input_GetTouch_m3850,
	Input_t725_CustomAttributesCacheGenerator_Input_get_touchCount_m3849,
	Input_t725_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m6243,
	Input_t725_CustomAttributesCacheGenerator_Input_get_compositionString_m6184,
	Input_t725_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9554,
	HideFlags_t2776_CustomAttributesCacheGenerator,
	Object_t721_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9556,
	Object_t721_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558,
	Object_t721_CustomAttributesCacheGenerator_Object_Destroy_m9559,
	Object_t721_CustomAttributesCacheGenerator_Object_t721_Object_Destroy_m9559_Arg1_ParameterInfo,
	Object_t721_CustomAttributesCacheGenerator_Object_Destroy_m4060,
	Object_t721_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9560,
	Object_t721_CustomAttributesCacheGenerator_Object_t721_Object_DestroyImmediate_m9560_Arg1_ParameterInfo,
	Object_t721_CustomAttributesCacheGenerator_Object_DestroyImmediate_m6244,
	Object_t721_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9561,
	Object_t721_CustomAttributesCacheGenerator_Object_get_name_m3917,
	Object_t721_CustomAttributesCacheGenerator_Object_set_name_m6304,
	Object_t721_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t721_CustomAttributesCacheGenerator_Object_set_hideFlags_m6218,
	Object_t721_CustomAttributesCacheGenerator_Object_ToString_m527,
	Object_t721_CustomAttributesCacheGenerator_Object_Instantiate_m4321,
	Object_t721_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9567,
	Component_t779_CustomAttributesCacheGenerator_Component_get_transform_m4196,
	Component_t779_CustomAttributesCacheGenerator_Component_get_gameObject_m3916,
	Component_t779_CustomAttributesCacheGenerator_Component_GetComponent_m6350,
	Component_t779_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9569,
	Component_t779_CustomAttributesCacheGenerator_Component_GetComponent_m10377,
	Component_t779_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9570,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9572,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9573,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m10381,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9574,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9575,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m4199,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m6220,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m6221,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m4116,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m4489,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5979,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4501,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m4380,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9576,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9576_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9576_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9577,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9578,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9579,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9579_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9584,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9585,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9586,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9587,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9588,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9589,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9590,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9591,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9592,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9593,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9594,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9595,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m4322,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9596,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4468,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9597_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformVector_m9598,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9599,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9600,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4481,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m6219,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m4323,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4480,
	Time_t2778_CustomAttributesCacheGenerator_Time_get_time_m4301,
	Time_t2778_CustomAttributesCacheGenerator_Time_get_deltaTime_m4307,
	Time_t2778_CustomAttributesCacheGenerator_Time_get_unscaledTime_m6024,
	Time_t2778_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m6055,
	Time_t2778_CustomAttributesCacheGenerator_Time_set_timeScale_m4121,
	Random_t2779_CustomAttributesCacheGenerator_Random_set_seed_m4408,
	Random_t2779_CustomAttributesCacheGenerator_Random_Range_m4355,
	Random_t2779_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9602,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m9605,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m9606,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9607,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m4464,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetInt_m4464_Arg1_ParameterInfo,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m4462,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetFloat_m4462_Arg1_ParameterInfo,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7902,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_t2781_PlayerPrefs_GetString_m7902_Arg1_ParameterInfo,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m4080,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m4079,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m4460,
	PlayerPrefs_t2781_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7905,
	LocalNotification_t2782_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9609,
	RemoteNotification_t2783_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9611,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9614,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9615,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9617,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9618,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9619,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9620,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9621,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9622,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9623,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9625,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9626,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9628,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9629,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9630,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9631,
	NotificationServices_t2785_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9632,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9650,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m9651_Arg3_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m9651_Arg4_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_Raycast_m4171,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m6107_Arg2_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_Raycast_m6107_Arg3_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m6045_Arg1_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m6045_Arg2_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m9652_Arg2_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_t2787_Physics_RaycastAll_m9652_Arg3_ParameterInfo,
	Physics_t2787_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9653,
	Collider_t782_CustomAttributesCacheGenerator_Collider_set_enabled_m4183,
	Collider_t782_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9654,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m4385,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_IgnoreLayerCollision_m4385_Arg2_ParameterInfo,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9658,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_Raycast_m6108,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg2_ParameterInfo,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg3_ParameterInfo,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg4_ParameterInfo,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_t814_Physics2D_Raycast_m9659_Arg5_ParameterInfo,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m6034,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9660,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m4378,
	Physics2D_t814_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9661,
	Collider2D_t717_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4455,
	Collider2D_t717_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9663,
	CircleCollider2D_t624_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m4454,
	CircleCollider2D_t624_CustomAttributesCacheGenerator_CircleCollider2D_set_radius_m4453,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_set_clip_m4159,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Play_m9679,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_t615_AudioSource_Play_m9679_Arg0_ParameterInfo,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Play_m4447,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4479,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_Stop_m4160,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m9680,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4449,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9681,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_t615_AudioSource_PlayOneShot_m9681_Arg1_ParameterInfo,
	AudioSource_t615_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m4173,
	AnimationEvent_t2798_CustomAttributesCacheGenerator_AnimationEvent_t2798____data_PropertyInfo,
	AnimationCurve_t2802_CustomAttributesCacheGenerator,
	AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_t2802_AnimationCurve__ctor_m9707_Arg0_ParameterInfo,
	AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9709,
	AnimationCurve_t2802_CustomAttributesCacheGenerator_AnimationCurve_Init_m9711,
	AnimatorStateInfo_t2799_CustomAttributesCacheGenerator_AnimatorStateInfo_t2799____nameHash_PropertyInfo,
	Animator_t1065_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m6297,
	Animator_t1065_CustomAttributesCacheGenerator_Animator_StringToHash_m9730,
	Animator_t1065_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9731,
	Animator_t1065_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9732,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m4165,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m4166,
	CharacterInfo_t2808_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2808_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2808_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2808_CustomAttributesCacheGenerator_flipped,
	Font_t933_CustomAttributesCacheGenerator_Font_get_material_m6308,
	Font_t933_CustomAttributesCacheGenerator_Font_HasCharacter_m6206,
	Font_t933_CustomAttributesCacheGenerator_Font_get_dynamic_m6310,
	Font_t933_CustomAttributesCacheGenerator_Font_get_fontSize_m6311,
	FontTextureRebuildCallback_t2809_CustomAttributesCacheGenerator,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_Init_m9760,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9761,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m6217,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9765,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9766,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9767,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9768,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9769,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9770,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m6199,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9771,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9772,
	TextGenerator_t970_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m6232,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderMode_m6104,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m6325,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m4366,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9783,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4515,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m6328,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m6131,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m6329,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m6091,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m6106,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m6105,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m6112,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m6078,
	Canvas_t547_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m6307,
	CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m6290,
	CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9785,
	CanvasGroup_t1086_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m6090,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9788,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m6094,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m6360,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m6086,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9789,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9790,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m6082,
	CanvasRenderer_t938_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m6079,
	RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792,
	RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794,
	RectTransformUtility_t1088_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m6093,
	Request_t2813_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2813_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2813_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2813_CustomAttributesCacheGenerator_Request_get_sourceId_m9799,
	Request_t2813_CustomAttributesCacheGenerator_Request_get_appId_m9800,
	Request_t2813_CustomAttributesCacheGenerator_Request_get_domain_m9801,
	Response_t2815_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2815_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2815_CustomAttributesCacheGenerator_Response_get_success_m9810,
	Response_t2815_CustomAttributesCacheGenerator_Response_set_success_m9811,
	Response_t2815_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9812,
	Response_t2815_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9813,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9818,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9819,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9820,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9821,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9822,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9823,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9824,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9825,
	CreateMatchRequest_t2818_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9826,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9829,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9830,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9831,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9832,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9833,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9834,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9835,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9836,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9837,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9838,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9839,
	CreateMatchResponse_t2819_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9840,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9844,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9845,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9846,
	JoinMatchRequest_t2820_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9847,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9850,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9851,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9852,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9853,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9854,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9855,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9856,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9857,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9858,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9859,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9860,
	JoinMatchResponse_t2821_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9861,
	DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9865,
	DestroyMatchRequest_t2822_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9866,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9869,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9870,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9871,
	DropConnectionRequest_t2823_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9872,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9875,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9876,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9877,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9878,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9879,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9880,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9881,
	ListMatchRequest_t2824_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9882,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9885,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9886,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9887,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9888,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9889,
	MatchDirectConnectInfo_t2825_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9890,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9894,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9895,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_name_m9896,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_name_m9897,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9898,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9899,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9900,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9901,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9902,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9903,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9904,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9905,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9906,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9907,
	MatchDesc_t2827_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9908,
	ListMatchResponse_t2829_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2829_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9912,
	ListMatchResponse_t2829_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9913,
	AppID_t2830_CustomAttributesCacheGenerator,
	SourceID_t2831_CustomAttributesCacheGenerator,
	NetworkID_t2832_CustomAttributesCacheGenerator,
	NodeID_t2833_CustomAttributesCacheGenerator,
	NetworkMatch_t2838_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m10393,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10399,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m10400,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m10402,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2989_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m10403,
	JsonArray_t2839_CustomAttributesCacheGenerator,
	JsonObject_t2840_CustomAttributesCacheGenerator,
	SimpleJson_t2843_CustomAttributesCacheGenerator,
	SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9958,
	SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9970,
	SimpleJson_t2843_CustomAttributesCacheGenerator_SimpleJson_t2843____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2841_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2841_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m10407,
	PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9987,
	PocoJsonSerializerStrategy_t2842_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9988,
	ReflectionUtils_t2855_CustomAttributesCacheGenerator,
	ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetConstructorInfo_m10013_Arg1_ParameterInfo,
	ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetContructor_m10018_Arg1_ParameterInfo,
	ReflectionUtils_t2855_CustomAttributesCacheGenerator_ReflectionUtils_t2855_ReflectionUtils_GetConstructorByReflection_m10020_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2992_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2849_CustomAttributesCacheGenerator_ConstructorDelegate_t2849_ConstructorDelegate_Invoke_m9998_Arg0_ParameterInfo,
	ConstructorDelegate_t2849_CustomAttributesCacheGenerator_ConstructorDelegate_t2849_ConstructorDelegate_BeginInvoke_m9999_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2850_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2851_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2852_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2853_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2854_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2857_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1135_CustomAttributesCacheGenerator,
	RequireComponent_t828_CustomAttributesCacheGenerator,
	WritableAttribute_t2863_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2864_CustomAttributesCacheGenerator,
	GUIStateObjects_t2875_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m10053,
	Achievement_t2878_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2878_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2878_CustomAttributesCacheGenerator_Achievement_get_id_m10075,
	Achievement_t2878_CustomAttributesCacheGenerator_Achievement_set_id_m10076,
	Achievement_t2878_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m10077,
	Achievement_t2878_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m10078,
	AchievementDescription_t2879_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2879_CustomAttributesCacheGenerator_AchievementDescription_get_id_m10085,
	AchievementDescription_t2879_CustomAttributesCacheGenerator_AchievementDescription_set_id_m10086,
	Score_t2880_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2880_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2880_CustomAttributesCacheGenerator_Score_get_leaderboardID_m10095,
	Score_t2880_CustomAttributesCacheGenerator_Score_set_leaderboardID_m10096,
	Score_t2880_CustomAttributesCacheGenerator_Score_get_value_m10097,
	Score_t2880_CustomAttributesCacheGenerator_Score_set_value_m10098,
	Leaderboard_t2719_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2719_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2719_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2719_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_id_m10106,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_id_m10107,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m10108,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m10109,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_range_m10110,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_range_m10111,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m10112,
	Leaderboard_t2719_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m10113,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1138_CustomAttributesCacheGenerator,
	SpaceAttribute_t1136_CustomAttributesCacheGenerator,
	RangeAttribute_t1134_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1139_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1137_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m10157,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m10159,
	SharedBetweenAnimatorsAttribute_t2896_CustomAttributesCacheGenerator,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2903_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2907_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2907_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2907_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2907_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2907_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2909_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2912_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2912_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2913_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2914_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2915_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1129_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2917_CustomAttributesCacheGenerator,
};
