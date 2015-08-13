#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.CanvasFacebook
struct CanvasFacebook_t436;
// Facebook.InitDelegate
struct InitDelegate_t419;
// System.String
struct String_t;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t420;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// Facebook.OGActionType
struct OGActionType_t432;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t684;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.CanvasFacebook::.ctor()
extern "C" void CanvasFacebook__ctor_m2361 (CanvasFacebook_t436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnAwake()
extern "C" void CanvasFacebook_OnAwake_m2362 (CanvasFacebook_t436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m2363 (CanvasFacebook_t436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m2364 (CanvasFacebook_t436 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void CanvasFacebook_Init_m2365 (CanvasFacebook_t436 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Login_m2366 (CanvasFacebook_t436 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Logout()
extern "C" void CanvasFacebook_Logout_m2367 (CanvasFacebook_t436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_AppRequest_m2368 (CanvasFacebook_t436 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m2369 (CanvasFacebook_t436 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern "C" void CanvasFacebook_ActivateApp_m2370 (CanvasFacebook_t436 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_FeedRequest_m2371 (CanvasFacebook_t436 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Pay_m2372 (CanvasFacebook_t436 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupCreate_m2373 (CanvasFacebook_t436 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupJoin_m2374 (CanvasFacebook_t436 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_UI_m2375 (CanvasFacebook_t436 * __this, String_t* ___method, Dictionary_2_t312 * ___paramsDict, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GetDeepLink_m2376 (CanvasFacebook_t436 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogEvent_m2377 (CanvasFacebook_t436 * __this, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogPurchase_m2378 (CanvasFacebook_t436 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m2379 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m2380 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookUiResponse_m2381 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m2382 (CanvasFacebook_t436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m2383 (CanvasFacebook_t436 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern "C" String_t* CanvasFacebook_StringFromFile_m2384 (CanvasFacebook_t436 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
