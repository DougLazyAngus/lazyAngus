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
extern TypeInfo* InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t747_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3282);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ExtensionAttribute_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t747 * tmp;
		tmp = (ExtensionAttribute_t747 *)il2cpp_codegen_object_new (ExtensionAttribute_t747_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4069(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2109 * tmp;
		tmp = (InternalsVisibleToAttribute_t2109 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2109_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7572(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2628_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2628_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_t836_LayerMask_GetMask_m8423_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void RuntimePlatform_t2634_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void RuntimePlatform_t2634_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Coroutine_t891_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8429_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MeshFilter_t739_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8503_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_set_enabled_m3772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_material_m3751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_set_material_m3753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_bounds_m3781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_get_width_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_get_height_m3426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_get_dpi_m3533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Screen_t2649_CustomAttributesCacheGenerator_Screen_get_orientation_m3425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8530_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8531_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8531_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RenderTexture_t2650_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RenderTexture_t2650_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUILayer_t2653_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Gradient_t2656_CustomAttributesCacheGenerator_Gradient_Init_m8542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Gradient_t2656_CustomAttributesCacheGenerator_Gradient_Cleanup_m8543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_changed_m8555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_enabled_m8556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_set_enabled_m3444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Label_m3422_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Box_m3438_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Button_m3420_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_TextField_m3423_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_TextField_m3859_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Toggle_m3468_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_SelectionGrid_m3466_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_SelectionGrid_m8594_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginHorizontal_m3421_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginHorizontal_m8595_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginVertical_m3435_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginVertical_m8596_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginScrollView_m3443_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginScrollView_m8597_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8618_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8620_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIClip_t2672_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIClip_t2672_CustomAttributesCacheGenerator_GUIClip_Pop_m8688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISettings_t2673_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISettings_t2673_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISettings_t2673_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISettings_t2673_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISettings_t2673_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t1054_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1054_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1828);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t1054 * tmp;
		tmp = (ExecuteInEditMode_t1054 *)il2cpp_codegen_object_new (ExecuteInEditMode_t1054_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m5988(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUISkin_t730_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void GUIContent_t732_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Init_m8757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Init_m8763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_left_m5896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_left_m8765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_right_m8766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_right_m8767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_top_m5897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_top_m8768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8799_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Init_m8820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Cleanup_m8822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_rawType_m5756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_type_m3867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_modifiers_m5752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_character_m5754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_commandName_m8828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_get_keyCode_m5753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_Use_m8831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Event_t733_CustomAttributesCacheGenerator_Event_PopEvent_m5757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1044_il2cpp_TypeInfo_var;
void EventModifiers_t2682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1044_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1823);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1044 * tmp;
		tmp = (FlagsAttribute_t1044 *)il2cpp_codegen_object_new (FlagsAttribute_t1044_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5933(tmp, NULL);
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
void Vector3_t497_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2784_il2cpp_TypeInfo_var;
void Color32_t705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2784 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2784 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2784_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m9585(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void Vector4_t983_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5815_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5815_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1044_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1044_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1823);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1044 * tmp;
		tmp = (FlagsAttribute_t1044 *)il2cpp_codegen_object_new (FlagsAttribute_t1044_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5933(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void Resources_t737_CustomAttributesCacheGenerator_Resources_Load_m8975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextAsset_t729_CustomAttributesCacheGenerator_TextAsset_get_text_m3850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Shader_t2689_CustomAttributesCacheGenerator_Shader_PropertyToID_m8978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m8980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m8982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m8984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m8985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m8986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m8986_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m8989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m8992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m8995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SpriteRenderer_t563_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void SpriteRenderer_t563_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9012_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9020_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9022_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9022_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_URLEncode_m9026_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_QPEncode_m9028_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_SevenBitClean_m9031_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void CacheIndex_t2694_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void UnityString_t2695_CustomAttributesCacheGenerator_UnityString_t2695_UnityString_Format_m9033_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AsyncOperation_t2629_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_isPlaying_m5795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_isEditor_m5797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_platform_m3519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_t1459_Application_ExternalCall_m3817_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_t1459_Application_BuildInvocationForArguments_m9044_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_OpenURL_m3710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2912_il2cpp_TypeInfo_var;
void Application_t1459_CustomAttributesCacheGenerator_Application_t1459____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2912 * tmp;
		tmp = (SecurityCriticalAttribute_t2912 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2912_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m9933(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_depth_m5491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_eventMask_m9054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_main_m3757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var;
void CameraCallback_t2696_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2142 * tmp;
		tmp = (EditorBrowsableAttribute_t2142 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7869(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Debug_t2697_CustomAttributesCacheGenerator_Debug_Internal_Log_m9074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void Debug_t2697_CustomAttributesCacheGenerator_Debug_t2697_Debug_Internal_Log_m9074_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Debug_t2697_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void Debug_t2697_CustomAttributesCacheGenerator_Debug_t2697_Debug_Internal_LogException_m9075_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Debug_t2697_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Display_t2700_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetAxis_m4058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetButtonDown_m5569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButton_m3966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mousePosition_m3758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_mousePresent_m5568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_GetTouch_m3440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_touchCount_m3439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_get_compositionString_m5734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Input_t656_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1044_il2cpp_TypeInfo_var;
void HideFlags_t2703_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1044_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1823);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1044 * tmp;
		tmp = (FlagsAttribute_t1044 *)il2cpp_codegen_object_new (FlagsAttribute_t1044_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5933(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m9117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_Destroy_m9117_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m3650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_DestroyImmediate_m9118_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_get_name_m3507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_set_name_m5857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_set_hideFlags_m5768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_ToString_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_Instantiate_m3891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void Object_t652_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_get_transform_m3786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_get_gameObject_m3506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m9936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Component_t711_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9134_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9134_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2844 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2844 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2844_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m9798(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2790_il2cpp_TypeInfo_var;
void GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9137_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2790 * tmp;
		tmp = (WritableAttribute_t2790 *)il2cpp_codegen_object_new (WritableAttribute_t2790_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m9593(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9155_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Time_t2705_CustomAttributesCacheGenerator_Time_get_time_m3913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Time_t2705_CustomAttributesCacheGenerator_Time_get_deltaTime_m3935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Time_t2705_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Time_t2705_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Time_t2705_CustomAttributesCacheGenerator_Time_set_timeScale_m3711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Random_t2706_CustomAttributesCacheGenerator_Random_set_seed_m3988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Random_t2706_CustomAttributesCacheGenerator_Random_Range_m3933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Random_t2706_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_t2708_PlayerPrefs_GetString_m7460_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void LocalNotification_t2709_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RemoteNotification_t2710_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m9206_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m9206_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_Raycast_m3761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m5656_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m5656_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m5594_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m5594_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m9207_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m9207_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics_t2714_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Collider_t714_CustomAttributesCacheGenerator_Collider_set_enabled_m3773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Collider_t714_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_IgnoreLayerCollision_m3949_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_Raycast_m5657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_set_clip_m3749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m9234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_Play_m9234_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m4021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Stop_m3750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2841_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_PlayOneShot_m9235_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2841 * tmp;
		tmp = (DefaultValueAttribute_t2841 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2841_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9793(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var;
void AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2842 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2842 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2842_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m9797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void AnimationEvent_t2725_CustomAttributesCacheGenerator_AnimationEvent_t2725____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void AnimationCurve_t2729_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_t2729_AnimationCurve__ctor_m9261_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_Init_m9265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t2726_CustomAttributesCacheGenerator_AnimatorStateInfo_t2726____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_StringToHash_m9284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Animator_t619_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void CharacterInfo_t2735_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void CharacterInfo_t2735_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void CharacterInfo_t2735_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t751_il2cpp_TypeInfo_var;
void CharacterInfo_t2735_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t751 * tmp;
		tmp = (ObsoleteAttribute_t751 *)il2cpp_codegen_object_new (ObsoleteAttribute_t751_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m4176(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Font_t851_CustomAttributesCacheGenerator_Font_get_material_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Font_t851_CustomAttributesCacheGenerator_Font_HasCharacter_m5755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Font_t851_CustomAttributesCacheGenerator_Font_get_dynamic_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Font_t851_CustomAttributesCacheGenerator_Font_get_fontSize_m5864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2142 * tmp;
		tmp = (EditorBrowsableAttribute_t2142 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7869(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_Init_m9315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void Canvas_t458_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m4042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2783_il2cpp_TypeInfo_var;
void RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2783 * tmp;
		tmp = (WrapperlessIcall_t2783 *)il2cpp_codegen_object_new (WrapperlessIcall_t2783_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m9584(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_Request_get_sourceId_m9354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_Request_get_appId_m9355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Request_t2740_CustomAttributesCacheGenerator_Request_get_domain_m9356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_Response_get_success_m9365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_Response_set_success_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Response_t2742_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_name_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_name_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2756_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2756_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ListMatchResponse_t2756_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2757_il2cpp_TypeInfo_var;
void AppID_t2757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		AppID_t2757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4367);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9951(tmp, Box(AppID_t2757_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2758_il2cpp_TypeInfo_var;
void SourceID_t2758_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		SourceID_t2758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4366);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9951(tmp, Box(SourceID_t2758_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2759_il2cpp_TypeInfo_var;
void NetworkID_t2759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		NetworkID_t2759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4369);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9951(tmp, Box(NetworkID_t2759_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2914_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2760_il2cpp_TypeInfo_var;
void NodeID_t2760_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4466);
		NodeID_t2760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2914 * tmp;
		tmp = (DefaultValueAttribute_t2914 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2914_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m9951(tmp, Box(NodeID_t2760_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t84_il2cpp_TypeInfo_var;
void NetworkMatch_t2765_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9952(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9958(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9959(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9961(CustomAttributesCache* cache)
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
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9962(CustomAttributesCache* cache)
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
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var;
void JsonArray_t2766_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2142 * tmp;
		tmp = (EditorBrowsableAttribute_t2142 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7869(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var;
void JsonObject_t2767_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
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
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t2142 * tmp;
		tmp = (EditorBrowsableAttribute_t2142 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7869(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
void SimpleJson_t2770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var;
void SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2918 * tmp;
		tmp = (SuppressMessageAttribute_t2918 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9964(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9965(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var;
void SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2918 * tmp;
		tmp = (SuppressMessageAttribute_t2918 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9964(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var;
void SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_t2770____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2142 * tmp;
		tmp = (EditorBrowsableAttribute_t2142 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2142_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7869(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2768_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2918 * tmp;
		tmp = (SuppressMessageAttribute_t2918 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9964(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9965(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2918 * tmp;
		tmp = (SuppressMessageAttribute_t2918 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9964(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9965(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2918 * tmp;
		tmp = (SuppressMessageAttribute_t2918 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2918_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m9964(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m9965(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var;
void ReflectionUtils_t2782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2917 * tmp;
		tmp = (GeneratedCodeAttribute_t2917 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2917_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m9963(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetConstructorInfo_m9568_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetContructor_m9573_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetConstructorByReflection_m9575_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2919_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2776_CustomAttributesCacheGenerator_ConstructorDelegate_t2776_ConstructorDelegate_Invoke_m9553_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t748_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2776_CustomAttributesCacheGenerator_ConstructorDelegate_t2776_ConstructorDelegate_BeginInvoke_m9554_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t748 * tmp;
		tmp = (ParamArrayAttribute_t748 *)il2cpp_codegen_object_new (ParamArrayAttribute_t748_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m4088(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2777_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2778_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2779_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1055_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void RequireComponent_t1049_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void WritableAttribute_t2790_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2791_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void GUIStateObjects_t2802_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_Achievement_get_id_m9630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_Achievement_set_id_m9631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Achievement_t2805_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2806_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2806_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void AchievementDescription_t2806_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_Score_get_value_m9652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Score_t2807_CustomAttributesCacheGenerator_Score_set_value_m9653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_id_m9661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_id_m9662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_range_m9665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_range_m9666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void PropertyAttribute_t2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void TooltipAttribute_t1058_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void SpaceAttribute_t1056_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void RangeAttribute_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1059_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var;
void StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2911 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2911 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2911_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m9929(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2823_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void ArgumentCache_t2830_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
void PersistentCall_t2834_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void PersistentCall_t2834_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
void PersistentCall_t2834_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void PersistentCall_t2834_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void PersistentCall_t2834_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2836_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var;
void UnityEventBase_t2839_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1047 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1047 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1047_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t749_il2cpp_TypeInfo_var;
void UnityEventBase_t2839_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t749 * tmp;
		tmp = (SerializeField_t749 *)il2cpp_codegen_object_new (SerializeField_t749_il2cpp_TypeInfo_var);
		SerializeField__ctor_m4089(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t1046_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2840_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1824);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t1046 * tmp;
		tmp = (AddComponentMenu_t1046 *)il2cpp_codegen_object_new (AddComponentMenu_t1046_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m5951(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2841_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2842_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1047_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7732(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7731(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t752_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t752 * tmp;
		tmp = (AttributeUsageAttribute_t752 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t752_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m4206(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[813] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2628_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m8411,
	AssetBundleCreateRequest_t2628_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m8412,
	AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m8416,
	AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m8417,
	AssetBundle_t2630_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m8418,
	LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_LayerToName_m8421,
	LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m8422,
	LayerMask_t836_CustomAttributesCacheGenerator_LayerMask_t836_LayerMask_GetMask_m8423_Arg0_ParameterInfo,
	RuntimePlatform_t2634_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2634_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2634_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_operatingSystem_m4066,
	SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m8424,
	SystemInfo_t2635_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m7507,
	Coroutine_t891_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m8427,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m8429,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_t148_ScriptableObject_Internal_CreateScriptableObject_m8429_Arg0_ParameterInfo,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m8430,
	ScriptableObject_t148_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m8432,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m8437,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m8438,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m8439,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m8440,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m8441,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m8442,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m8443,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m8444,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m8445,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m8446,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m8447,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m8448,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m8449,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m8450,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m8451,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m8452,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m8453,
	GameCenterPlatform_t746_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m8455,
	GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m8499,
	GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m8500,
	GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m8501,
	GcLeaderboard_t2647_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m8502,
	MeshFilter_t739_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m3921,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_Internal_Create_m8503,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_t481_Mesh_Internal_Create_m8503_Arg0_ParameterInfo,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_vertices_m3922,
	Mesh_t481_CustomAttributesCacheGenerator_Mesh_set_triangles_m3923,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_set_enabled_m3772,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_material_m3751,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_set_material_m3753,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_bounds_m3781,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5588,
	Renderer_t646_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5589,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_get_width_m3411,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_get_height_m3426,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_get_dpi_m3533,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_get_fullScreen_m3846,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_set_fullScreen_m3847,
	Screen_t2649_CustomAttributesCacheGenerator_Screen_get_orientation_m3425,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m8525,
	Texture_t394_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m8526,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m8530,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Internal_Create_m8530_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5630,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m5705,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m8531,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8531_Arg0_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_t108_Texture2D_Apply_m8531_Arg1_ParameterInfo,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_Apply_m3451,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_ReadPixels_m3450,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m8532,
	Texture2D_t108_CustomAttributesCacheGenerator_Texture2D_EncodeToPNG_m3452,
	RenderTexture_t2650_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m8533,
	RenderTexture_t2650_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m8534,
	GUILayer_t2653_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m8538,
	Gradient_t2656_CustomAttributesCacheGenerator_Gradient_Init_m8542,
	Gradient_t2656_CustomAttributesCacheGenerator_Gradient_Cleanup_m8543,
	GUI_t654_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t654_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m8550,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m8551,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m8552,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m8553,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_changed_m8555,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_enabled_m8556,
	GUI_t654_CustomAttributesCacheGenerator_GUI_set_enabled_m3444,
	GUI_t654_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m8558,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m8561,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m8564,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m8571,
	GUI_t654_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m8578,
	GUI_t654_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m8580,
	GUI_t654_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoModalWindow_m8587,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Label_m3422_Arg1_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Box_m3438_Arg1_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Button_m3420_Arg1_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_TextField_m3423_Arg1_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_TextField_m3859_Arg2_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_Toggle_m3468_Arg2_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_SelectionGrid_m3466_Arg3_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_SelectionGrid_m8594_Arg4_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginHorizontal_m3421_Arg0_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginHorizontal_m8595_Arg2_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginVertical_m3435_Arg0_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginVertical_m8596_Arg2_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginScrollView_m3443_Arg1_ParameterInfo,
	GUILayout_t2659_CustomAttributesCacheGenerator_GUILayout_t2659_GUILayout_BeginScrollView_m8597_Arg6_ParameterInfo,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m8612,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8614,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8615,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8618_Arg2_ParameterInfo,
	GUILayoutUtility_t653_CustomAttributesCacheGenerator_GUILayoutUtility_t653_GUILayoutUtility_GetRect_m8620_Arg3_ParameterInfo,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m8662,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8666,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m8670,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m8671,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m8672,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m8673,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m8674,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m8675,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m8677,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m8679,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m8683,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m8684,
	GUIUtility_t2671_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m8685,
	GUIClip_t2672_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m8687,
	GUIClip_t2672_CustomAttributesCacheGenerator_GUIClip_Pop_m8688,
	GUISettings_t2673_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2673_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2673_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2673_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2673_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t730_CustomAttributesCacheGenerator,
	GUISkin_t730_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t730_CustomAttributesCacheGenerator_m_box,
	GUISkin_t730_CustomAttributesCacheGenerator_m_button,
	GUISkin_t730_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t730_CustomAttributesCacheGenerator_m_label,
	GUISkin_t730_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t730_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t730_CustomAttributesCacheGenerator_m_window,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t730_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t730_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t730_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t732_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Init_m8757,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m8758,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m8759,
	GUIStyleState_t675_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m8760,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Init_m8763,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_Cleanup_m8764,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_left_m5896,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_left_m8765,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_right_m8766,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_right_m8767,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_top_m5897,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_top_m8768,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_bottom_m3870,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_set_bottom_m8769,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5890,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5891,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m8771,
	RectOffset_t649_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m8773,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Init_m8777,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m8778,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m8779,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_name_m8780,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_name_m8781,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m8782,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m8784,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m8785,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m8786,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m3412,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m8787,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3413,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m8788,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m8789,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m8790,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m3417,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m8791,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m3416,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m8792,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m3513,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m3514,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m8795,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Draw_m8798,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_t107_GUIStyle_Draw_m8799_Arg3_ParameterInfo,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m8801,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m8802,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8806,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m8808,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m8810,
	GUIStyle_t107_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m8813,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m8816,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m8818,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5792,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m5793,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg1_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg2_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg3_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg4_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg5_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_t886_TouchScreenKeyboard_Open_m8819_Arg6_ParameterInfo,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m5732,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m5733,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m5791,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m5731,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m5790,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m5743,
	TouchScreenKeyboard_t886_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m5742,
	Event_t733_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t733_CustomAttributesCacheGenerator_Event_Init_m8820,
	Event_t733_CustomAttributesCacheGenerator_Event_Cleanup_m8822,
	Event_t733_CustomAttributesCacheGenerator_Event_get_rawType_m5756,
	Event_t733_CustomAttributesCacheGenerator_Event_get_type_m3867,
	Event_t733_CustomAttributesCacheGenerator_Event_GetTypeForControl_m8823,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m8825,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m8827,
	Event_t733_CustomAttributesCacheGenerator_Event_get_modifiers_m5752,
	Event_t733_CustomAttributesCacheGenerator_Event_get_character_m5754,
	Event_t733_CustomAttributesCacheGenerator_Event_get_commandName_m8828,
	Event_t733_CustomAttributesCacheGenerator_Event_get_keyCode_m5753,
	Event_t733_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m8829,
	Event_t733_CustomAttributesCacheGenerator_Event_Use_m8831,
	Event_t733_CustomAttributesCacheGenerator_Event_PopEvent_m5757,
	EventModifiers_t2682_CustomAttributesCacheGenerator,
	Vector2_t110_CustomAttributesCacheGenerator,
	Vector3_t497_CustomAttributesCacheGenerator,
	Color_t325_CustomAttributesCacheGenerator,
	Color32_t705_CustomAttributesCacheGenerator,
	Quaternion_t734_CustomAttributesCacheGenerator,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m8857,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8860,
	Quaternion_t734_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8862,
	Matrix4x4_t1022_CustomAttributesCacheGenerator,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m8878,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m8880,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m8882,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m8885,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m8897,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m8900,
	Matrix4x4_t1022_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m8901,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m8918,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m8921,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m8924,
	Bounds_t715_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8928,
	Vector4_t983_CustomAttributesCacheGenerator,
	Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5815_Arg4_ParameterInfo,
	Mathf_t677_CustomAttributesCacheGenerator_Mathf_t677_Mathf_SmoothDamp_m5815_Arg5_ParameterInfo,
	DrivenTransformProperties_t2684_CustomAttributesCacheGenerator,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m8959,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m8960,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m8961,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m8962,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m8963,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m8964,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m8965,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m8966,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m8967,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m8968,
	RectTransform_t504_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m8969,
	Resources_t737_CustomAttributesCacheGenerator_Resources_Load_m8975,
	TextAsset_t729_CustomAttributesCacheGenerator_TextAsset_get_text_m3850,
	SerializePrivateVariables_t2688_CustomAttributesCacheGenerator,
	Shader_t2689_CustomAttributesCacheGenerator_Shader_PropertyToID_m8978,
	Material_t482_CustomAttributesCacheGenerator_Material_SetTexture_m8980,
	Material_t482_CustomAttributesCacheGenerator_Material_GetTexture_m8982,
	Material_t482_CustomAttributesCacheGenerator_Material_SetFloat_m8984,
	Material_t482_CustomAttributesCacheGenerator_Material_HasProperty_m8985,
	Material_t482_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m8986,
	Material_t482_CustomAttributesCacheGenerator_Material_t482_Material_Internal_CreateWithMaterial_m8986_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m8989,
	SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m8992,
	SphericalHarmonicsL2_t2690_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m8995,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_rect_m5683,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5679,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_texture_m5676,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5702,
	Sprite_t472_CustomAttributesCacheGenerator_Sprite_get_border_m5677,
	SpriteRenderer_t563_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m9005,
	SpriteRenderer_t563_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m9006,
	DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5690,
	DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5689,
	DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5682,
	DataUtility_t2691_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m9007,
	WWW_t265_CustomAttributesCacheGenerator_WWW_DestroyWWW_m9010,
	WWW_t265_CustomAttributesCacheGenerator_WWW_InitWWW_m9011,
	WWW_t265_CustomAttributesCacheGenerator_WWW_EscapeURL_m3934,
	WWW_t265_CustomAttributesCacheGenerator_WWW_t265_WWW_EscapeURL_m9012_Arg1_ParameterInfo,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m9013,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_bytes_m9016,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_error_m3604,
	WWW_t265_CustomAttributesCacheGenerator_WWW_GetTexture_m9017,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_isDone_m7465,
	WWW_t265_CustomAttributesCacheGenerator_WWW_get_progress_m7471,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddField_m3455,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddField_m9020_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_AddBinaryData_m3454,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9022_Arg2_ParameterInfo,
	WWWForm_t112_CustomAttributesCacheGenerator_WWWForm_t112_WWWForm_AddBinaryData_m9022_Arg3_ParameterInfo,
	WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_URLEncode_m9026_Arg1_ParameterInfo,
	WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_QPEncode_m9028_Arg1_ParameterInfo,
	WWWTranscoder_t2693_CustomAttributesCacheGenerator_WWWTranscoder_t2693_WWWTranscoder_SevenBitClean_m9031_Arg1_ParameterInfo,
	CacheIndex_t2694_CustomAttributesCacheGenerator,
	UnityString_t2695_CustomAttributesCacheGenerator_UnityString_t2695_UnityString_Format_m9033_Arg1_ParameterInfo,
	AsyncOperation_t2629_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m9035,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m3505,
	Application_t1459_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m9042,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_isPlaying_m5795,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_isEditor_m5797,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m3816,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_platform_m3519,
	Application_t1459_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m4028,
	Application_t1459_CustomAttributesCacheGenerator_Application_t1459_Application_ExternalCall_m3817_Arg1_ParameterInfo,
	Application_t1459_CustomAttributesCacheGenerator_Application_t1459_Application_BuildInvocationForArguments_m9044_Arg1_ParameterInfo,
	Application_t1459_CustomAttributesCacheGenerator_Application_Internal_ExternalCall_m9045,
	Application_t1459_CustomAttributesCacheGenerator_Application_OpenURL_m3710,
	Application_t1459_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m9047,
	Application_t1459_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m381,
	Application_t1459_CustomAttributesCacheGenerator_Application_t1459____persistentDataPath_PropertyInfo,
	Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_get_enabled_m4002,
	Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_set_enabled_m5765,
	Behaviour_t1032_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5526,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5579,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5578,
	Camera_t531_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4046,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_depth_m5491,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5592,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_eventMask_m9054,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m9055,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m9056,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m9057,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_targetTexture_m9059,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_clearFlags_m9060,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m9061,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m9062,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m9063,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m9064,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_main_m3757,
	Camera_t531_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m9065,
	Camera_t531_CustomAttributesCacheGenerator_Camera_GetAllCameras_m9066,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m9071,
	Camera_t531_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m9073,
	CameraCallback_t2696_CustomAttributesCacheGenerator,
	Debug_t2697_CustomAttributesCacheGenerator_Debug_Internal_Log_m9074,
	Debug_t2697_CustomAttributesCacheGenerator_Debug_t2697_Debug_Internal_Log_m9074_Arg2_ParameterInfo,
	Debug_t2697_CustomAttributesCacheGenerator_Debug_Internal_LogException_m9075,
	Debug_t2697_CustomAttributesCacheGenerator_Debug_t2697_Debug_Internal_LogException_m9075_Arg1_ParameterInfo,
	Debug_t2697_CustomAttributesCacheGenerator_Debug_get_isDebugBuild_m3815,
	Display_t2700_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m9100,
	Display_t2700_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m9101,
	Display_t2700_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m9102,
	Display_t2700_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m9103,
	Display_t2700_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m9104,
	Display_t2700_CustomAttributesCacheGenerator_Display_SetParamsImpl_m9105,
	Display_t2700_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m9106,
	Display_t2700_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m9107,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m3765,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m3764,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m9108,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9109,
	MonoBehaviour_t13_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m9110,
	Input_t656_CustomAttributesCacheGenerator_Input_GetAxis_m4058,
	Input_t656_CustomAttributesCacheGenerator_Input_GetAxisRaw_m5570,
	Input_t656_CustomAttributesCacheGenerator_Input_GetButtonDown_m5569,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButton_m3966,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3760,
	Input_t656_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3965,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mousePosition_m3758,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5543,
	Input_t656_CustomAttributesCacheGenerator_Input_get_mousePresent_m5568,
	Input_t656_CustomAttributesCacheGenerator_Input_GetTouch_m3440,
	Input_t656_CustomAttributesCacheGenerator_Input_get_touchCount_m3439,
	Input_t656_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m5794,
	Input_t656_CustomAttributesCacheGenerator_Input_get_compositionString_m5734,
	Input_t656_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m9112,
	HideFlags_t2703_CustomAttributesCacheGenerator,
	Object_t652_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m9114,
	Object_t652_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m9116,
	Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m9117,
	Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_Destroy_m9117_Arg1_ParameterInfo,
	Object_t652_CustomAttributesCacheGenerator_Object_Destroy_m3650,
	Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m9118,
	Object_t652_CustomAttributesCacheGenerator_Object_t652_Object_DestroyImmediate_m9118_Arg1_ParameterInfo,
	Object_t652_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5796,
	Object_t652_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m9119,
	Object_t652_CustomAttributesCacheGenerator_Object_get_name_m3507,
	Object_t652_CustomAttributesCacheGenerator_Object_set_name_m5857,
	Object_t652_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m385,
	Object_t652_CustomAttributesCacheGenerator_Object_set_hideFlags_m5768,
	Object_t652_CustomAttributesCacheGenerator_Object_ToString_m525,
	Object_t652_CustomAttributesCacheGenerator_Object_Instantiate_m3891,
	Object_t652_CustomAttributesCacheGenerator_Object_FindObjectOfType_m9125,
	Component_t711_CustomAttributesCacheGenerator_Component_get_transform_m3786,
	Component_t711_CustomAttributesCacheGenerator_Component_get_gameObject_m3506,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m5903,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m9127,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponent_m9936,
	Component_t711_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m9128,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9130,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m9131,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponent_m9940,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m9132,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m9133,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_transform_m3789,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_layer_m5770,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_set_layer_m5771,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SetActive_m3706,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m5527,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_get_tag_m4061,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m3961,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_SendMessage_m9134,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9134_Arg1_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_SendMessage_m9134_Arg2_ParameterInfo,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m9135,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_AddComponent_m9136,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m9137,
	GameObject_t352_CustomAttributesCacheGenerator_GameObject_t352_GameObject_Internal_CreateGameObject_m9137_Arg0_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m9142,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m9143,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m9144,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m9145,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m9146,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m9147,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m9148,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m9149,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m9150,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m9151,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_parentInternal_m9152,
	Transform_t406_CustomAttributesCacheGenerator_Transform_set_parentInternal_m9153,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetParent_m3892,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m9154,
	Transform_t406_CustomAttributesCacheGenerator_Transform_Rotate_m4036,
	Transform_t406_CustomAttributesCacheGenerator_Transform_t406_Transform_Rotate_m9155_Arg1_ParameterInfo,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m9156,
	Transform_t406_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m9157,
	Transform_t406_CustomAttributesCacheGenerator_Transform_get_childCount_m4041,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m5769,
	Transform_t406_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3893,
	Transform_t406_CustomAttributesCacheGenerator_Transform_GetChild_m4040,
	Time_t2705_CustomAttributesCacheGenerator_Time_get_time_m3913,
	Time_t2705_CustomAttributesCacheGenerator_Time_get_deltaTime_m3935,
	Time_t2705_CustomAttributesCacheGenerator_Time_get_unscaledTime_m5572,
	Time_t2705_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5604,
	Time_t2705_CustomAttributesCacheGenerator_Time_set_timeScale_m3711,
	Random_t2706_CustomAttributesCacheGenerator_Random_set_seed_m3988,
	Random_t2706_CustomAttributesCacheGenerator_Random_Range_m3933,
	Random_t2706_CustomAttributesCacheGenerator_Random_RandomRangeInt_m9159,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m9162,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m7460,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_t2708_PlayerPrefs_GetString_m7460_Arg1_ParameterInfo,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3670,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m3669,
	PlayerPrefs_t2708_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7463,
	LocalNotification_t2709_CustomAttributesCacheGenerator_LocalNotification_Destroy_m9164,
	RemoteNotification_t2710_CustomAttributesCacheGenerator_RemoteNotification_Destroy_m9166,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_localNotificationCount_m9169,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_GetLocalNotification_m9170,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ScheduleLocalNotification_m9172,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_PresentLocalNotificationNow_m9173,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_CancelLocalNotification_m9174,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_CancelAllLocalNotifications_m9175,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_scheduledLocalNotifications_m9176,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_remoteNotificationCount_m9177,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_GetRemoteNotification_m9178,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ClearLocalNotifications_m9180,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_ClearRemoteNotifications_m9181,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_RegisterForNotifications_m9183,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_UnregisterForRemoteNotifications_m9184,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_enabledNotificationTypes_m9185,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_deviceToken_m9186,
	NotificationServices_t2712_CustomAttributesCacheGenerator_NotificationServices_get_registrationError_m9187,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m9205,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m9206_Arg3_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m9206_Arg4_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_Raycast_m3761,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m5656_Arg2_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_Raycast_m5656_Arg3_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m5594_Arg1_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m5594_Arg2_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m9207_Arg2_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_t2714_Physics_RaycastAll_m9207_Arg3_ParameterInfo,
	Physics_t2714_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m9208,
	Collider_t714_CustomAttributesCacheGenerator_Collider_set_enabled_m3773,
	Collider_t714_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m9209,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_IgnoreLayerCollision_m3949,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_IgnoreLayerCollision_m3949_Arg2_ParameterInfo,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m9213,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_Raycast_m5657,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg2_ParameterInfo,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg3_ParameterInfo,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg4_ParameterInfo,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_t741_Physics2D_Raycast_m9214_Arg5_ParameterInfo,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m5582,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m9215,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_OverlapPoint_m3960,
	Physics2D_t741_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapPoint_m9216,
	Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_set_isTrigger_m4025,
	Collider2D_t577_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m9218,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_set_clip_m3749,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m9234,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_Play_m9234_Arg0_ParameterInfo,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Play_m4021,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m4039,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_Stop_m3750,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m4022,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m9235,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_t569_AudioSource_PlayOneShot_m9235_Arg1_ParameterInfo,
	AudioSource_t569_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3763,
	AnimationEvent_t2725_CustomAttributesCacheGenerator_AnimationEvent_t2725____data_PropertyInfo,
	AnimationCurve_t2729_CustomAttributesCacheGenerator,
	AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_t2729_AnimationCurve__ctor_m9261_Arg0_ParameterInfo,
	AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m9263,
	AnimationCurve_t2729_CustomAttributesCacheGenerator_AnimationCurve_Init_m9265,
	AnimatorStateInfo_t2726_CustomAttributesCacheGenerator_AnimatorStateInfo_t2726____nameHash_PropertyInfo,
	Animator_t619_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5849,
	Animator_t619_CustomAttributesCacheGenerator_Animator_StringToHash_m9284,
	Animator_t619_CustomAttributesCacheGenerator_Animator_SetIntegerString_m9285,
	Animator_t619_CustomAttributesCacheGenerator_Animator_SetTriggerString_m9286,
	Animator_t619_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m9287,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_get_text_m3755,
	TextMesh_t403_CustomAttributesCacheGenerator_TextMesh_set_text_m3756,
	CharacterInfo_t2735_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2735_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2735_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2735_CustomAttributesCacheGenerator_flipped,
	Font_t851_CustomAttributesCacheGenerator_Font_get_material_m5861,
	Font_t851_CustomAttributesCacheGenerator_Font_HasCharacter_m5755,
	Font_t851_CustomAttributesCacheGenerator_Font_get_dynamic_m5863,
	Font_t851_CustomAttributesCacheGenerator_Font_get_fontSize_m5864,
	FontTextureRebuildCallback_t2736_CustomAttributesCacheGenerator,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_Init_m9315,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m9316,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9319,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m5767,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m9320,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m9321,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m9322,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m9323,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m9324,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m9325,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m5748,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m9326,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m9327,
	TextGenerator_t889_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m5783,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_renderMode_m5653,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5878,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m3944,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_INTERNAL_get_pixelRect_m9338,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m3909,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5881,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5680,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5882,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5640,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5655,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5654,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5661,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5627,
	Canvas_t458_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5860,
	CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m4042,
	CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5841,
	CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m9340,
	CanvasGroup_t599_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5639,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m9343,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5643,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5913,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m5635,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m9344,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m9345,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5631,
	CanvasRenderer_t856_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5628,
	RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9347,
	RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9349,
	RectTransformUtility_t1006_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5642,
	Request_t2740_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2740_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2740_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2740_CustomAttributesCacheGenerator_Request_get_sourceId_m9354,
	Request_t2740_CustomAttributesCacheGenerator_Request_get_appId_m9355,
	Request_t2740_CustomAttributesCacheGenerator_Request_get_domain_m9356,
	Response_t2742_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2742_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2742_CustomAttributesCacheGenerator_Response_get_success_m9365,
	Response_t2742_CustomAttributesCacheGenerator_Response_set_success_m9366,
	Response_t2742_CustomAttributesCacheGenerator_Response_get_extendedInfo_m9367,
	Response_t2742_CustomAttributesCacheGenerator_Response_set_extendedInfo_m9368,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m9373,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m9374,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m9375,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m9376,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m9377,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m9378,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m9379,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m9380,
	CreateMatchRequest_t2745_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m9381,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m9384,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m9385,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m9386,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m9387,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m9388,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m9389,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m9390,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m9391,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m9392,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m9393,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m9394,
	CreateMatchResponse_t2746_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m9395,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m9399,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m9400,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m9401,
	JoinMatchRequest_t2747_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m9402,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m9405,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m9406,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m9407,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m9408,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m9409,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m9410,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m9411,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m9412,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m9413,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m9414,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m9415,
	JoinMatchResponse_t2748_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m9416,
	DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m9420,
	DestroyMatchRequest_t2749_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m9421,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m9424,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m9425,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m9426,
	DropConnectionRequest_t2750_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m9427,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m9430,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m9431,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m9432,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m9433,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m9434,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m9435,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m9436,
	ListMatchRequest_t2751_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m9437,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m9440,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m9441,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m9442,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m9443,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m9444,
	MatchDirectConnectInfo_t2752_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m9445,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m9449,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m9450,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_name_m9451,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_name_m9452,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m9453,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m9454,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m9455,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m9456,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m9457,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m9458,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m9459,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m9460,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m9461,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m9462,
	MatchDesc_t2754_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m9463,
	ListMatchResponse_t2756_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2756_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m9467,
	ListMatchResponse_t2756_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m9468,
	AppID_t2757_CustomAttributesCacheGenerator,
	SourceID_t2758_CustomAttributesCacheGenerator,
	NetworkID_t2759_CustomAttributesCacheGenerator,
	NodeID_t2760_CustomAttributesCacheGenerator,
	NetworkMatch_t2765_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m9952,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9958,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m9959,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m9961,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2916_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m9962,
	JsonArray_t2766_CustomAttributesCacheGenerator,
	JsonObject_t2767_CustomAttributesCacheGenerator,
	SimpleJson_t2770_CustomAttributesCacheGenerator,
	SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m9513,
	SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_NextToken_m9525,
	SimpleJson_t2770_CustomAttributesCacheGenerator_SimpleJson_t2770____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2768_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2768_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9966,
	PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9542,
	PocoJsonSerializerStrategy_t2769_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9543,
	ReflectionUtils_t2782_CustomAttributesCacheGenerator,
	ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetConstructorInfo_m9568_Arg1_ParameterInfo,
	ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetContructor_m9573_Arg1_ParameterInfo,
	ReflectionUtils_t2782_CustomAttributesCacheGenerator_ReflectionUtils_t2782_ReflectionUtils_GetConstructorByReflection_m9575_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2919_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2776_CustomAttributesCacheGenerator_ConstructorDelegate_t2776_ConstructorDelegate_Invoke_m9553_Arg0_ParameterInfo,
	ConstructorDelegate_t2776_CustomAttributesCacheGenerator_ConstructorDelegate_t2776_ConstructorDelegate_BeginInvoke_m9554_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2777_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2778_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2779_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2780_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2781_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2784_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1055_CustomAttributesCacheGenerator,
	RequireComponent_t1049_CustomAttributesCacheGenerator,
	WritableAttribute_t2790_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2791_CustomAttributesCacheGenerator,
	GUIStateObjects_t2802_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m9608,
	Achievement_t2805_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2805_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2805_CustomAttributesCacheGenerator_Achievement_get_id_m9630,
	Achievement_t2805_CustomAttributesCacheGenerator_Achievement_set_id_m9631,
	Achievement_t2805_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m9632,
	Achievement_t2805_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m9633,
	AchievementDescription_t2806_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2806_CustomAttributesCacheGenerator_AchievementDescription_get_id_m9640,
	AchievementDescription_t2806_CustomAttributesCacheGenerator_AchievementDescription_set_id_m9641,
	Score_t2807_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2807_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2807_CustomAttributesCacheGenerator_Score_get_leaderboardID_m9650,
	Score_t2807_CustomAttributesCacheGenerator_Score_set_leaderboardID_m9651,
	Score_t2807_CustomAttributesCacheGenerator_Score_get_value_m9652,
	Score_t2807_CustomAttributesCacheGenerator_Score_set_value_m9653,
	Leaderboard_t2646_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2646_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2646_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2646_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_id_m9661,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_id_m9662,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m9663,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m9664,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_range_m9665,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_range_m9666,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m9667,
	Leaderboard_t2646_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m9668,
	PropertyAttribute_t2_CustomAttributesCacheGenerator,
	TooltipAttribute_t1058_CustomAttributesCacheGenerator,
	SpaceAttribute_t1056_CustomAttributesCacheGenerator,
	RangeAttribute_t1053_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1059_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1057_CustomAttributesCacheGenerator,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m383,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m9712,
	StackTraceUtility_t55_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m9714,
	SharedBetweenAnimatorsAttribute_t2823_CustomAttributesCacheGenerator,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2830_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2834_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2834_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2834_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2834_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2834_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2836_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2839_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2839_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2840_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2841_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2842_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1047_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2844_CustomAttributesCacheGenerator,
};
