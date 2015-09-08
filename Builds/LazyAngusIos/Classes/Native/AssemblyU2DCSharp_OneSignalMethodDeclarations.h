#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal
struct OneSignal_t379;
// System.String
struct String_t;
// OneSignal/NotificationReceived
struct NotificationReceived_t387;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t710;
// OneSignal/TagsReceived
struct TagsReceived_t389;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t711;
// OneSignal/IdsAvailable
struct IdsAvailable_t376;
// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"

// System.Void OneSignal::.ctor()
extern "C" void OneSignal__ctor_m2120 (OneSignal_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::.cctor()
extern "C" void OneSignal__cctor_m2121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived,System.Boolean)
extern "C" void OneSignal_Init_m2122 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t387 * ___inNotificationDelegate, bool ___autoRegister, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived)
extern "C" void OneSignal_Init_m2123 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t387 * ___inNotificationDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String)
extern "C" void OneSignal_Init_m2124 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String)
extern "C" void OneSignal_Init_m2125 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern "C" void OneSignal_SetLogLevel_m2126 (Object_t * __this /* static, unused */, int32_t ___inLogLevel, int32_t ___inVisualLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTag(System.String,System.String)
extern "C" void OneSignal_SendTag_m2127 (Object_t * __this /* static, unused */, String_t* ___tagName, String_t* ___tagValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C" void OneSignal_SendTags_m2128 (Object_t * __this /* static, unused */, Object_t* ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern "C" void OneSignal_GetTags_m2129 (Object_t * __this /* static, unused */, TagsReceived_t389 * ___inTagsReceivedDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags()
extern "C" void OneSignal_GetTags_m2130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTag(System.String)
extern "C" void OneSignal_DeleteTag_m2131 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern "C" void OneSignal_DeleteTags_m2132 (Object_t * __this /* static, unused */, Object_t* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendPurchase(System.Double)
extern "C" void OneSignal_SendPurchase_m2133 (Object_t * __this /* static, unused */, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::RegisterForPushNotifications()
extern "C" void OneSignal_RegisterForPushNotifications_m2134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable(OneSignal/IdsAvailable)
extern "C" void OneSignal_GetIdsAvailable_m2135 (Object_t * __this /* static, unused */, IdsAvailable_t376 * ___inIdsAvailableDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable()
extern "C" void OneSignal_GetIdsAvailable_m2136 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableVibrate(System.Boolean)
extern "C" void OneSignal_EnableVibrate_m2137 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableSound(System.Boolean)
extern "C" void OneSignal_EnableSound_m2138 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onPushNotificationReceived(System.String)
extern "C" void OneSignal_onPushNotificationReceived_m2139 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onIdsAvailable(System.String)
extern "C" void OneSignal_onIdsAvailable_m2140 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onTagsReceived(System.String)
extern "C" void OneSignal_onTagsReceived_m2141 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::OnApplicationPause(System.Boolean)
extern "C" void OneSignal_OnApplicationPause_m2142 (OneSignal_t379 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
