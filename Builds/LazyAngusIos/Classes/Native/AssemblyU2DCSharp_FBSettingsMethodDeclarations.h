#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBSettings
struct FBSettings_t430;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;

// System.Void FBSettings::.ctor()
extern "C" void FBSettings__ctor_m2298 (FBSettings_t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBSettings FBSettings::get_Instance()
extern "C" FBSettings_t430 * FBSettings_get_Instance_m2299 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m2300 (FBSettings_t430 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m2301 (FBSettings_t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern "C" void FBSettings_SetAppId_m2302 (FBSettings_t430 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t75* FBSettings_get_AppIds_m2303 (FBSettings_t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m2304 (FBSettings_t430 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern "C" void FBSettings_SetAppLabel_m2305 (FBSettings_t430 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t75* FBSettings_get_AppLabels_m2306 (FBSettings_t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m2307 (FBSettings_t430 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t75* FBSettings_get_AllAppIds_m2308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m2309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m2310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Cookie()
extern "C" bool FBSettings_get_Cookie_m2311 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m2312 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m2313 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m2314 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m2315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m2316 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m2317 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m2318 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m2319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern "C" void FBSettings_set_IosURLSuffix_m2320 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m2321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m2322 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m2323 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m2324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
