#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AndroidFacebook
struct AndroidFacebook_t392;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t377;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t378;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// Facebook.OGActionType
struct OGActionType_t390;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t582;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t270;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.AndroidFacebook::.ctor()
extern "C" void AndroidFacebook__ctor_m2055 (AndroidFacebook_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C" String_t* AndroidFacebook_get_KeyHash_m2056 (AndroidFacebook_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C" bool AndroidFacebook_get_LimitEventUsage_m2057 (AndroidFacebook_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void AndroidFacebook_set_LimitEventUsage_m2058 (AndroidFacebook_t392 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C" void AndroidFacebook_CallFB_m2059 (AndroidFacebook_t392 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAwake()
extern "C" void AndroidFacebook_OnAwake_m2060 (AndroidFacebook_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
extern "C" bool AndroidFacebook_IsErrorResponse_m2061 (AndroidFacebook_t392 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void AndroidFacebook_Init_m2062 (AndroidFacebook_t392 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C" void AndroidFacebook_OnInitComplete_m2063 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_Login_m2064 (AndroidFacebook_t392 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern "C" void AndroidFacebook_OnLoginComplete_m2065 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern "C" void AndroidFacebook_OnGroupCreateComplete_m2066 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern "C" void AndroidFacebook_OnAccessTokenRefresh_m2067 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Logout()
extern "C" void AndroidFacebook_Logout_m2068 (AndroidFacebook_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern "C" void AndroidFacebook_OnLogoutComplete_m2069 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_AppRequest_m2070 (AndroidFacebook_t392 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t582 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t588  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern "C" void AndroidFacebook_OnAppRequestsComplete_m2071 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_FeedRequest_m2072 (AndroidFacebook_t392 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern "C" void AndroidFacebook_OnFeedRequestComplete_m2073 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_Pay_m2074 (AndroidFacebook_t392 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t588  ___quantityMin, Nullable_1_t588  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GameGroupCreate_m2075 (AndroidFacebook_t392 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GameGroupJoin_m2076 (AndroidFacebook_t392 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_GetDeepLink_m2077 (AndroidFacebook_t392 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern "C" void AndroidFacebook_OnGetDeepLinkComplete_m2078 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AndroidFacebook_AppEventsLogEvent_m2079 (AndroidFacebook_t392 * __this, String_t* ___logEvent, Nullable_1_t589  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AndroidFacebook_AppEventsLogPurchase_m2080 (AndroidFacebook_t392 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void AndroidFacebook_PublishInstall_m2081 (AndroidFacebook_t392 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern "C" void AndroidFacebook_OnPublishInstallComplete_m2082 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern "C" void AndroidFacebook_ActivateApp_m2083 (AndroidFacebook_t392 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Dictionary_2_t80 * AndroidFacebook_ToStringDict_m2084 (AndroidFacebook_t392 * __this, Dictionary_2_t270 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t245  AndroidFacebook_FromTimestamp_m2085 (AndroidFacebook_t392 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
