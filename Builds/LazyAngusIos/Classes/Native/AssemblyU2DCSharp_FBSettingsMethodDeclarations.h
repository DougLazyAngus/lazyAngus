#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBSettings
struct FBSettings_t347;
// System.String[]
struct StringU5BU5D_t45;
// System.String
struct String_t;

// System.Void FBSettings::.ctor()
extern "C" void FBSettings__ctor_m1560 (FBSettings_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBSettings FBSettings::get_Instance()
extern "C" FBSettings_t347 * FBSettings_get_Instance_m1561 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m1562 (FBSettings_t347 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m1563 (FBSettings_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern "C" void FBSettings_SetAppId_m1564 (FBSettings_t347 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AppIds_m1565 (FBSettings_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m1566 (FBSettings_t347 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern "C" void FBSettings_SetAppLabel_m1567 (FBSettings_t347 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t45* FBSettings_get_AppLabels_m1568 (FBSettings_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m1569 (FBSettings_t347 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AllAppIds_m1570 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m1571 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m1572 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Cookie()
extern "C" bool FBSettings_get_Cookie_m1573 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m1574 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m1575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m1576 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m1577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m1578 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m1579 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m1580 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m1581 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern "C" void FBSettings_set_IosURLSuffix_m1582 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m1583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m1584 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m1585 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m1586 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
