#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.IOSFacebook
struct IOSFacebook_t444;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t75;
// Facebook.InitDelegate
struct InitDelegate_t419;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t420;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// Facebook.OGActionType
struct OGActionType_t432;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t628;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// Facebook.IOSFacebook/NativeDict
struct NativeDict_t442;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.IOSFacebook::.ctor()
extern "C" void IOSFacebook__ctor_m2421 (IOSFacebook_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" void IOSFacebook_iosInit_m2422 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
extern "C" void IOSFacebook_iosLogin_m2423 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogout()
extern "C" void IOSFacebook_iosLogout_m2424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
extern "C" void IOSFacebook_iosSetShareDialogMode_m2425 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void IOSFacebook_iosFeedRequest_m2426 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C" void IOSFacebook_iosAppRequest_m2427 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t75* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C" void IOSFacebook_iosCreateGameGroup_m2428 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
extern "C" void IOSFacebook_iosJoinGameGroup_m2429 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
extern "C" void IOSFacebook_iosFBSettingsPublishInstall_m2430 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
extern "C" void IOSFacebook_iosFBSettingsActivateApp_m2431 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C" void IOSFacebook_iosFBAppEventsLogEvent_m2432 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t75* ___paramKeys, StringU5BU5D_t75* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C" void IOSFacebook_iosFBAppEventsLogPurchase_m2433 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t75* ___paramKeys, StringU5BU5D_t75* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m2434 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
extern "C" void IOSFacebook_iosGetDeepLink_m2435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
extern "C" int32_t IOSFacebook_get_DialogMode_m2436 (IOSFacebook_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C" void IOSFacebook_set_DialogMode_m2437 (IOSFacebook_t444 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C" bool IOSFacebook_get_LimitEventUsage_m2438 (IOSFacebook_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_set_LimitEventUsage_m2439 (IOSFacebook_t444 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C" void IOSFacebook_OnAwake_m2440 (IOSFacebook_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void IOSFacebook_Init_m2441 (IOSFacebook_t444 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Login_m2442 (IOSFacebook_t444 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Logout()
extern "C" void IOSFacebook_Logout_m2443 (IOSFacebook_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_AppRequest_m2444 (IOSFacebook_t444 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t628 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t634  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_FeedRequest_m2445 (IOSFacebook_t444 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Pay_m2446 (IOSFacebook_t444 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t634  ___quantityMin, Nullable_1_t634  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GameGroupCreate_m2447 (IOSFacebook_t444 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GameGroupJoin_m2448 (IOSFacebook_t444 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GetDeepLink_m2449 (IOSFacebook_t444 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern "C" void IOSFacebook_OnGetDeepLinkComplete_m2450 (IOSFacebook_t444 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_AppEventsLogEvent_m2451 (IOSFacebook_t444 * __this, String_t* ___logEvent, Nullable_1_t635  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_AppEventsLogPurchase_m2452 (IOSFacebook_t444 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_PublishInstall_m2453 (IOSFacebook_t444 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C" void IOSFacebook_ActivateApp_m2454 (IOSFacebook_t444 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" NativeDict_t442 * IOSFacebook_MarshallDict_m2455 (IOSFacebook_t444 * __this, Dictionary_2_t312 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" NativeDict_t442 * IOSFacebook_MarshallDict_m2456 (IOSFacebook_t444 * __this, Dictionary_2_t122 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern "C" void IOSFacebook_OnInitComplete_m2457 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern "C" void IOSFacebook_OnLogin_m2458 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_ParseLoginDict_m2459 (IOSFacebook_t444 * __this, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern "C" void IOSFacebook_OnAccessTokenRefresh_m2460 (IOSFacebook_t444 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t287  IOSFacebook_FromTimestamp_m2461 (IOSFacebook_t444 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C" void IOSFacebook_OnLogout_m2462 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern "C" void IOSFacebook_OnRequestComplete_m2463 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
