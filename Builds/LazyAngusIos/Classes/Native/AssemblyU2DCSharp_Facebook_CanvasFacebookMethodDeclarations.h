﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.CanvasFacebook
struct CanvasFacebook_t394;
// Facebook.InitDelegate
struct InitDelegate_t377;
// System.String
struct String_t;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t378;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// Facebook.OGActionType
struct OGActionType_t390;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t583;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t270;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.CanvasFacebook::.ctor()
extern "C" void CanvasFacebook__ctor_m2088 (CanvasFacebook_t394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnAwake()
extern "C" void CanvasFacebook_OnAwake_m2089 (CanvasFacebook_t394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m2090 (CanvasFacebook_t394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m2091 (CanvasFacebook_t394 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void CanvasFacebook_Init_m2092 (CanvasFacebook_t394 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Login_m2093 (CanvasFacebook_t394 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Logout()
extern "C" void CanvasFacebook_Logout_m2094 (CanvasFacebook_t394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_AppRequest_m2095 (CanvasFacebook_t394 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m2096 (CanvasFacebook_t394 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern "C" void CanvasFacebook_ActivateApp_m2097 (CanvasFacebook_t394 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_FeedRequest_m2098 (CanvasFacebook_t394 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Pay_m2099 (CanvasFacebook_t394 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupCreate_m2100 (CanvasFacebook_t394 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupJoin_m2101 (CanvasFacebook_t394 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_UI_m2102 (CanvasFacebook_t394 * __this, String_t* ___method, Dictionary_2_t270 * ___paramsDict, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GetDeepLink_m2103 (CanvasFacebook_t394 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogEvent_m2104 (CanvasFacebook_t394 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogPurchase_m2105 (CanvasFacebook_t394 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m2106 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m2107 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookUiResponse_m2108 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m2109 (CanvasFacebook_t394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m2110 (CanvasFacebook_t394 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern "C" String_t* CanvasFacebook_StringFromFile_m2111 (CanvasFacebook_t394 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
