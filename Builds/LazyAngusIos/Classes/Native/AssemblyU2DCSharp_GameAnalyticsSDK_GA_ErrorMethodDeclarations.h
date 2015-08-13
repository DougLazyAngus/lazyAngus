#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_Error
struct GA_Error_t464;
// System.String
struct String_t;
// GameAnalyticsSDK.GA_Error/GAErrorSeverity
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error_GAErrorSeverity.h"

// System.Void GameAnalyticsSDK.GA_Error::NewEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Error_NewEvent_m2580 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Error::CreateNewEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Error_CreateNewEvent_m2581 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
