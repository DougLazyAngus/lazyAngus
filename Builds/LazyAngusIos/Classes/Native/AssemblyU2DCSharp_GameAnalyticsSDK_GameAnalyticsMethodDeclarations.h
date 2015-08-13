#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GameAnalytics
struct GameAnalytics_t479;
// GameAnalyticsSDK.Settings
struct Settings_t478;
// System.String
struct String_t;
// GameAnalyticsSDK.GA_Progression/GAProgressionStatus
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression_GAProgress.h"
// GameAnalyticsSDK.GA_Resource/GAResourceFlowType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Resource_GAResourceFlo.h"
// GameAnalyticsSDK.GA_Error/GAErrorSeverity
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error_GAErrorSeverity.h"
// GameAnalyticsSDK.GA_Setup/GAGender
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Setup_GAGender.h"
// GameAnalyticsSDK.GAPlatform
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatform.h"

// System.Void GameAnalyticsSDK.GameAnalytics::.ctor()
extern "C" void GameAnalytics__ctor_m2646 (GameAnalytics_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameAnalyticsSDK.Settings GameAnalyticsSDK.GameAnalytics::get_SettingsGA()
extern "C" Settings_t478 * GameAnalytics_get_SettingsGA_m2647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::set_SettingsGA(GameAnalyticsSDK.Settings)
extern "C" void GameAnalytics_set_SettingsGA_m2648 (Object_t * __this /* static, unused */, Settings_t478 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::Awake()
extern "C" void GameAnalytics_Awake_m2649 (GameAnalytics_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::OnDestroy()
extern "C" void GameAnalytics_OnDestroy_m2650 (GameAnalytics_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::OnApplicationPause(System.Boolean)
extern "C" void GameAnalytics_OnApplicationPause_m2651 (GameAnalytics_t479 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::OnApplicationQuit()
extern "C" void GameAnalytics_OnApplicationQuit_m2652 (GameAnalytics_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::InitAPI()
extern "C" void GameAnalytics_InitAPI_m2653 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::Initialize()
extern "C" void GameAnalytics_Initialize_m2654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEvent(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEvent_m2655 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEventIOS(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEventIOS_m2656 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEventIOSAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEventIOSAutoFetchReceipt_m2657 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String)
extern "C" void GameAnalytics_NewDesignEvent_m2658 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String,System.Single)
extern "C" void GameAnalytics_NewDesignEvent_m2659 (Object_t * __this /* static, unused */, String_t* ___eventName, float ___eventValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2660 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2661 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2662 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2663 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2664 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2665 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewResourceEvent(GameAnalyticsSDK.GA_Resource/GAResourceFlowType,System.String,System.Single,System.String,System.String)
extern "C" void GameAnalytics_NewResourceEvent_m2666 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::NewErrorEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GameAnalytics_NewErrorEvent_m2667 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetFacebookId(System.String)
extern "C" void GameAnalytics_SetFacebookId_m2668 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetGender(GameAnalyticsSDK.GA_Setup/GAGender)
extern "C" void GameAnalytics_SetGender_m2669 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetBirthYear(System.Int32)
extern "C" void GameAnalytics_SetBirthYear_m2670 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension01(System.String)
extern "C" void GameAnalytics_SetCustomDimension01_m2671 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension02(System.String)
extern "C" void GameAnalytics_SetCustomDimension02_m2672 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension03(System.String)
extern "C" void GameAnalytics_SetCustomDimension03_m2673 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.GameAnalytics::GetUnityVersion()
extern "C" String_t* GameAnalytics_GetUnityVersion_m2674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameAnalyticsSDK.GAPlatform GameAnalyticsSDK.GameAnalytics::GetPlatform()
extern "C" int32_t GameAnalytics_GetPlatform_m2675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
