#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_Design
struct GA_Design_t462;
// System.String
struct String_t;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void GameAnalyticsSDK.GA_Design::NewEvent(System.String,System.Single)
extern "C" void GA_Design_NewEvent_m2577 (Object_t * __this /* static, unused */, String_t* ___eventName, float ___eventValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Design::NewEvent(System.String)
extern "C" void GA_Design_NewEvent_m2578 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Design::CreateNewEvent(System.String,System.Nullable`1<System.Single>)
extern "C" void GA_Design_CreateNewEvent_m2579 (Object_t * __this /* static, unused */, String_t* ___eventName, Nullable_1_t705  ___eventValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
