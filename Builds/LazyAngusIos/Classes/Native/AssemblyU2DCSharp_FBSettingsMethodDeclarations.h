#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBSettings
struct FBSettings_t388;
// System.String[]
struct StringU5BU5D_t45;
// System.String
struct String_t;

// System.Void FBSettings::.ctor()
extern "C" void FBSettings__ctor_m2025 (FBSettings_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBSettings FBSettings::get_Instance()
extern "C" FBSettings_t388 * FBSettings_get_Instance_m2026 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m2027 (FBSettings_t388 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m2028 (FBSettings_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern "C" void FBSettings_SetAppId_m2029 (FBSettings_t388 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AppIds_m2030 (FBSettings_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m2031 (FBSettings_t388 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern "C" void FBSettings_SetAppLabel_m2032 (FBSettings_t388 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t45* FBSettings_get_AppLabels_m2033 (FBSettings_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m2034 (FBSettings_t388 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AllAppIds_m2035 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m2036 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m2037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Cookie()
extern "C" bool FBSettings_get_Cookie_m2038 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m2039 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m2040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m2041 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m2042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m2043 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m2044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m2045 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m2046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern "C" void FBSettings_set_IosURLSuffix_m2047 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m2048 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m2049 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m2050 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m2051 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
