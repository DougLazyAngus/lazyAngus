#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_Wrapper
struct GA_Wrapper_t456;
// System.String
struct String_t;
// GameAnalyticsSDK.GA_Resource/GAResourceFlowType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Resource_GAResourceFlo.h"
// GameAnalyticsSDK.GA_Progression/GAProgressionStatus
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression_GAProgress.h"
// GameAnalyticsSDK.GA_Error/GAErrorSeverity
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error_GAErrorSeverity.h"

// System.Void GameAnalyticsSDK.GA_Wrapper::.ctor()
extern "C" void GA_Wrapper__ctor_m2515 (GA_Wrapper_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions01(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions01_m2516 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions02(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions02_m2517 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions03(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions03_m2518 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableResourceCurrencies(System.String)
extern "C" void GA_Wrapper_SetAvailableResourceCurrencies_m2519 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableResourceItemTypes(System.String)
extern "C" void GA_Wrapper_SetAvailableResourceItemTypes_m2520 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetUnitySdkVersion(System.String)
extern "C" void GA_Wrapper_SetUnitySdkVersion_m2521 (Object_t * __this /* static, unused */, String_t* ___unitySdkVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetUnityEngineVersion(System.String)
extern "C" void GA_Wrapper_SetUnityEngineVersion_m2522 (Object_t * __this /* static, unused */, String_t* ___unityEngineVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetBuild(System.String)
extern "C" void GA_Wrapper_SetBuild_m2523 (Object_t * __this /* static, unused */, String_t* ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::Initialize(System.String,System.String)
extern "C" void GA_Wrapper_Initialize_m2524 (Object_t * __this /* static, unused */, String_t* ___gamekey, String_t* ___gamesecret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension01(System.String)
extern "C" void GA_Wrapper_SetCustomDimension01_m2525 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension02(System.String)
extern "C" void GA_Wrapper_SetCustomDimension02_m2526 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension03(System.String)
extern "C" void GA_Wrapper_SetCustomDimension03_m2527 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddBusinessEvent(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddBusinessEvent_m2528 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddBusinessEventAndAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddBusinessEventAndAutoFetchReceipt_m2529 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddResourceEvent(GameAnalyticsSDK.GA_Resource/GAResourceFlowType,System.String,System.Single,System.String,System.String)
extern "C" void GA_Wrapper_AddResourceEvent_m2530 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddProgressionEvent_m2531 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddProgressionEventWithScore(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Int32)
extern "C" void GA_Wrapper_AddProgressionEventWithScore_m2532 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddDesignEvent(System.String,System.Single)
extern "C" void GA_Wrapper_AddDesignEvent_m2533 (Object_t * __this /* static, unused */, String_t* ___eventID, float ___eventValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddDesignEvent(System.String)
extern "C" void GA_Wrapper_AddDesignEvent_m2534 (Object_t * __this /* static, unused */, String_t* ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::AddErrorEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Wrapper_AddErrorEvent_m2535 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetInfoLog(System.Boolean)
extern "C" void GA_Wrapper_SetInfoLog_m2536 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetVerboseLog(System.Boolean)
extern "C" void GA_Wrapper_SetVerboseLog_m2537 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetFacebookId(System.String)
extern "C" void GA_Wrapper_SetFacebookId_m2538 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetGender(System.String)
extern "C" void GA_Wrapper_SetGender_m2539 (Object_t * __this /* static, unused */, String_t* ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::SetBirthYear(System.Int32)
extern "C" void GA_Wrapper_SetBirthYear_m2540 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions01(System.String)
extern "C" void GA_Wrapper_configureAvailableCustomDimensions01_m2541 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions02(System.String)
extern "C" void GA_Wrapper_configureAvailableCustomDimensions02_m2542 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions03(System.String)
extern "C" void GA_Wrapper_configureAvailableCustomDimensions03_m2543 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableResourceCurrencies(System.String)
extern "C" void GA_Wrapper_configureAvailableResourceCurrencies_m2544 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableResourceItemTypes(System.String)
extern "C" void GA_Wrapper_configureAvailableResourceItemTypes_m2545 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureUnitySdkVersion(System.String)
extern "C" void GA_Wrapper_configureUnitySdkVersion_m2546 (Object_t * __this /* static, unused */, String_t* ___unitySdkVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureUnityEngineVersion(System.String)
extern "C" void GA_Wrapper_configureUnityEngineVersion_m2547 (Object_t * __this /* static, unused */, String_t* ___unityEngineVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::configureBuild(System.String)
extern "C" void GA_Wrapper_configureBuild_m2548 (Object_t * __this /* static, unused */, String_t* ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::initialize(System.String,System.String)
extern "C" void GA_Wrapper_initialize_m2549 (Object_t * __this /* static, unused */, String_t* ___gamekey, String_t* ___gamesecret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension01(System.String)
extern "C" void GA_Wrapper_setCustomDimension01_m2550 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension02(System.String)
extern "C" void GA_Wrapper_setCustomDimension02_m2551 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension03(System.String)
extern "C" void GA_Wrapper_setCustomDimension03_m2552 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addBusinessEvent(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" void GA_Wrapper_addBusinessEvent_m2553 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addBusinessEventAndAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GA_Wrapper_addBusinessEventAndAutoFetchReceipt_m2554 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addResourceEvent(System.Int32,System.String,System.Single,System.String,System.String)
extern "C" void GA_Wrapper_addResourceEvent_m2555 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addProgressionEvent(System.Int32,System.String,System.String,System.String)
extern "C" void GA_Wrapper_addProgressionEvent_m2556 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addProgressionEventWithScore(System.Int32,System.String,System.String,System.String,System.Int32)
extern "C" void GA_Wrapper_addProgressionEventWithScore_m2557 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addDesignEvent(System.String)
extern "C" void GA_Wrapper_addDesignEvent_m2558 (Object_t * __this /* static, unused */, String_t* ___eventId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addDesignEventWithValue(System.String,System.Single)
extern "C" void GA_Wrapper_addDesignEventWithValue_m2559 (Object_t * __this /* static, unused */, String_t* ___eventId, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::addErrorEvent(System.Int32,System.String)
extern "C" void GA_Wrapper_addErrorEvent_m2560 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setEnabledInfoLog(System.Boolean)
extern "C" void GA_Wrapper_setEnabledInfoLog_m2561 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setEnabledVerboseLog(System.Boolean)
extern "C" void GA_Wrapper_setEnabledVerboseLog_m2562 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setFacebookId(System.String)
extern "C" void GA_Wrapper_setFacebookId_m2563 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setGender(System.String)
extern "C" void GA_Wrapper_setGender_m2564 (Object_t * __this /* static, unused */, String_t* ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Wrapper::setBirthYear(System.Int32)
extern "C" void GA_Wrapper_setBirthYear_m2565 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
