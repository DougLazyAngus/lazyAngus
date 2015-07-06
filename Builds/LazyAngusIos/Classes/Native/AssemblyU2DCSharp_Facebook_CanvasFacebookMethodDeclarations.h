#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.CanvasFacebook
struct CanvasFacebook_t353;
// Facebook.InitDelegate
struct InitDelegate_t336;
// System.String
struct String_t;
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
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.CanvasFacebook::.ctor()
extern "C" void CanvasFacebook__ctor_m1623 (CanvasFacebook_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnAwake()
extern "C" void CanvasFacebook_OnAwake_m1624 (CanvasFacebook_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m1625 (CanvasFacebook_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m1626 (CanvasFacebook_t353 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void CanvasFacebook_Init_m1627 (CanvasFacebook_t353 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Login_m1628 (CanvasFacebook_t353 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Logout()
extern "C" void CanvasFacebook_Logout_m1629 (CanvasFacebook_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_AppRequest_m1630 (CanvasFacebook_t353 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t511 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t517  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m1631 (CanvasFacebook_t353 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern "C" void CanvasFacebook_ActivateApp_m1632 (CanvasFacebook_t353 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_FeedRequest_m1633 (CanvasFacebook_t353 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_Pay_m1634 (CanvasFacebook_t353 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t517  ___quantityMin, Nullable_1_t517  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupCreate_m1635 (CanvasFacebook_t353 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GameGroupJoin_m1636 (CanvasFacebook_t353 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_UI_m1637 (CanvasFacebook_t353 * __this, String_t* ___method, Dictionary_2_t244 * ___paramsDict, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_GetDeepLink_m1638 (CanvasFacebook_t353 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogEvent_m1639 (CanvasFacebook_t353 * __this, String_t* ___logEvent, Nullable_1_t518  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void CanvasFacebook_AppEventsLogPurchase_m1640 (CanvasFacebook_t353 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m1641 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m1642 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern "C" void CanvasFacebook_OnFacebookUiResponse_m1643 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m1644 (CanvasFacebook_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m1645 (CanvasFacebook_t353 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern "C" String_t* CanvasFacebook_StringFromFile_m1646 (CanvasFacebook_t353 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
