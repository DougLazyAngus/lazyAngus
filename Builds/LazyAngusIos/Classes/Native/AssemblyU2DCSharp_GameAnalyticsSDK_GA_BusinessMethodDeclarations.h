#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_Business
struct GA_Business_t457;
// System.String
struct String_t;

// System.Void GameAnalyticsSDK.GA_Business::NewEvent(System.String,System.Int32,System.String,System.String,System.String,System.String,System.Boolean)
extern "C" void GA_Business_NewEvent_m2566 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, bool ___autoFetchReceipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Business::NewEvent(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GA_Business_NewEvent_m2567 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
