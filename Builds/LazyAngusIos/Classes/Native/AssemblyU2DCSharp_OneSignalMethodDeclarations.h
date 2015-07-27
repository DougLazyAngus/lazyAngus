#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal
struct OneSignal_t337;
// System.String
struct String_t;
// OneSignal/NotificationReceived
struct NotificationReceived_t345;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t591;
// OneSignal/TagsReceived
struct TagsReceived_t347;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t592;
// OneSignal/IdsAvailable
struct IdsAvailable_t334;
// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"

// System.Void OneSignal::.ctor()
extern "C" void OneSignal__ctor_m1845 (OneSignal_t337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::.cctor()
extern "C" void OneSignal__cctor_m1846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived,System.Boolean)
extern "C" void OneSignal_Init_m1847 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t345 * ___inNotificationDelegate, bool ___autoRegister, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived)
extern "C" void OneSignal_Init_m1848 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t345 * ___inNotificationDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String)
extern "C" void OneSignal_Init_m1849 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String)
extern "C" void OneSignal_Init_m1850 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern "C" void OneSignal_SetLogLevel_m1851 (Object_t * __this /* static, unused */, int32_t ___inLogLevel, int32_t ___inVisualLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTag(System.String,System.String)
extern "C" void OneSignal_SendTag_m1852 (Object_t * __this /* static, unused */, String_t* ___tagName, String_t* ___tagValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C" void OneSignal_SendTags_m1853 (Object_t * __this /* static, unused */, Object_t* ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern "C" void OneSignal_GetTags_m1854 (Object_t * __this /* static, unused */, TagsReceived_t347 * ___inTagsReceivedDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags()
extern "C" void OneSignal_GetTags_m1855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTag(System.String)
extern "C" void OneSignal_DeleteTag_m1856 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern "C" void OneSignal_DeleteTags_m1857 (Object_t * __this /* static, unused */, Object_t* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendPurchase(System.Double)
extern "C" void OneSignal_SendPurchase_m1858 (Object_t * __this /* static, unused */, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::RegisterForPushNotifications()
extern "C" void OneSignal_RegisterForPushNotifications_m1859 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable(OneSignal/IdsAvailable)
extern "C" void OneSignal_GetIdsAvailable_m1860 (Object_t * __this /* static, unused */, IdsAvailable_t334 * ___inIdsAvailableDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable()
extern "C" void OneSignal_GetIdsAvailable_m1861 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableVibrate(System.Boolean)
extern "C" void OneSignal_EnableVibrate_m1862 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableSound(System.Boolean)
extern "C" void OneSignal_EnableSound_m1863 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onPushNotificationReceived(System.String)
extern "C" void OneSignal_onPushNotificationReceived_m1864 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onIdsAvailable(System.String)
extern "C" void OneSignal_onIdsAvailable_m1865 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onTagsReceived(System.String)
extern "C" void OneSignal_onTagsReceived_m1866 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::OnApplicationPause(System.Boolean)
extern "C" void OneSignal_OnApplicationPause_m1867 (OneSignal_t337 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
