#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AndroidFacebook
struct AndroidFacebook_t351;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t337;
// Facebook.FacebookDelegate
struct FacebookDelegate_t350;
// Facebook.OGActionType
struct OGActionType_t349;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t511;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.AndroidFacebook::.ctor()
extern "C" void AndroidFacebook__ctor_m1590 (AndroidFacebook_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C" String_t* AndroidFacebook_get_KeyHash_m1591 (AndroidFacebook_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C" bool AndroidFacebook_get_LimitEventUsage_m1592 (AndroidFacebook_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void AndroidFacebook_set_LimitEventUsage_m1593 (AndroidFacebook_t351 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C" void AndroidFacebook_CallFB_m1594 (AndroidFacebook_t351 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAwake()
extern "C" void AndroidFacebook_OnAwake_m1595 (AndroidFacebook_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
extern "C" bool AndroidFacebook_IsErrorResponse_m1596 (AndroidFacebook_t351 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void AndroidFacebook_Init_m1597 (AndroidFacebook_t351 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C" void AndroidFacebook_OnInitComplete_m1598 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_Login_m1599 (AndroidFacebook_t351 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern "C" void AndroidFacebook_OnLoginComplete_m1600 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern "C" void AndroidFacebook_OnGroupCreateComplete_m1601 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern "C" void AndroidFacebook_OnAccessTokenRefresh_m1602 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Logout()
extern "C" void AndroidFacebook_Logout_m1603 (AndroidFacebook_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern "C" void AndroidFacebook_OnLogoutComplete_m1604 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_AppRequest_m1605 (AndroidFacebook_t351 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t511 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t517  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern "C" void AndroidFacebook_OnAppRequestsComplete_m1606 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_FeedRequest_m1607 (AndroidFacebook_t351 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern "C" void AndroidFacebook_OnFeedRequestComplete_m1608 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_Pay_m1609 (AndroidFacebook_t351 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t517  ___quantityMin, Nullable_1_t517  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GameGroupCreate_m1610 (AndroidFacebook_t351 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GameGroupJoin_m1611 (AndroidFacebook_t351 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GetDeepLink_m1612 (AndroidFacebook_t351 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern "C" void AndroidFacebook_OnGetDeepLinkComplete_m1613 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AndroidFacebook_AppEventsLogEvent_m1614 (AndroidFacebook_t351 * __this, String_t* ___logEvent, Nullable_1_t518  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AndroidFacebook_AppEventsLogPurchase_m1615 (AndroidFacebook_t351 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_PublishInstall_m1616 (AndroidFacebook_t351 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern "C" void AndroidFacebook_OnPublishInstallComplete_m1617 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern "C" void AndroidFacebook_ActivateApp_m1618 (AndroidFacebook_t351 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Dictionary_2_t80 * AndroidFacebook_ToStringDict_m1619 (AndroidFacebook_t351 * __this, Dictionary_2_t244 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t219  AndroidFacebook_FromTimestamp_m1620 (AndroidFacebook_t351 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
