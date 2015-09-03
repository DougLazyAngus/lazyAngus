#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.Settings
struct Settings_t478;
// System.String[]
struct StringU5BU5D_t75;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.String
struct String_t;

// System.Void GameAnalyticsSDK.Settings::.ctor()
extern "C" void Settings__ctor_m2678 (Settings_t478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::.cctor()
extern "C" void Settings__cctor_m2679 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GameAnalyticsSDK.Settings::CreateStringArrayWithEmptyStrings(System.Int32)
extern "C" StringU5BU5D_t75* Settings_CreateStringArrayWithEmptyStrings_m2680 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GameAnalyticsSDK.Settings::CreateStringArrayWithPlatformStrings(System.Int32)
extern "C" StringU5BU5D_t75* Settings_CreateStringArrayWithPlatformStrings_m2681 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] GameAnalyticsSDK.Settings::CreateIntArrayWithIDs(System.Int32,System.Int32)
extern "C" Int32U5BU5D_t484* Settings_CreateIntArrayWithIDs_m2682 (Object_t * __this /* static, unused */, int32_t ___size, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::SetCustomUserID(System.String)
extern "C" void Settings_SetCustomUserID_m2683 (Settings_t478 * __this, String_t* ___customID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.Settings::IsGameKeyValid(System.Int32,System.String)
extern "C" bool Settings_IsGameKeyValid_m2684 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.Settings::IsSecretKeyValid(System.Int32,System.String)
extern "C" bool Settings_IsSecretKeyValid_m2685 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::UpdateGameKey(System.Int32,System.String)
extern "C" void Settings_UpdateGameKey_m2686 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::UpdateSecretKey(System.Int32,System.String)
extern "C" void Settings_UpdateSecretKey_m2687 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Settings::GetGameKey(System.Int32)
extern "C" String_t* Settings_GetGameKey_m2688 (Settings_t478 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Settings::GetSecretKey(System.Int32)
extern "C" String_t* Settings_GetSecretKey_m2689 (Settings_t478 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::SetCustomArea(System.String)
extern "C" void Settings_SetCustomArea_m2690 (Settings_t478 * __this, String_t* ___customArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Settings::SetKeys(System.String,System.String)
extern "C" void Settings_SetKeys_m2691 (Settings_t478 * __this, String_t* ___gamekey, String_t* ___secretkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
