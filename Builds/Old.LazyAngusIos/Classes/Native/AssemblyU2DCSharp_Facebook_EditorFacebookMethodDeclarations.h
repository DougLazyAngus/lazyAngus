﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.EditorFacebook
struct EditorFacebook_t356;
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
struct List_1_t535;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// FBResult
struct FBResult_t213;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.EditorFacebook::.ctor()
extern "C" void EditorFacebook__ctor_m1657 (EditorFacebook_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C" bool EditorFacebook_get_LimitEventUsage_m1658 (EditorFacebook_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void EditorFacebook_set_LimitEventUsage_m1659 (EditorFacebook_t356 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C" void EditorFacebook_OnAwake_m1660 (EditorFacebook_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void EditorFacebook_Init_m1661 (EditorFacebook_t356 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Login_m1662 (EditorFacebook_t356 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Logout()
extern "C" void EditorFacebook_Logout_m1663 (EditorFacebook_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_AppRequest_m1664 (EditorFacebook_t356 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t535 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t541  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_FeedRequest_m1665 (EditorFacebook_t356 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Pay_m1666 (EditorFacebook_t356 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t541  ___quantityMin, Nullable_1_t541  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GameGroupCreate_m1667 (EditorFacebook_t356 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GameGroupJoin_m1668 (EditorFacebook_t356 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_PublishInstall_m1669 (EditorFacebook_t356 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C" void EditorFacebook_ActivateApp_m1670 (EditorFacebook_t356 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GetDeepLink_m1671 (EditorFacebook_t356 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogEvent_m1672 (EditorFacebook_t356 * __this, String_t* ___logEvent, Nullable_1_t542  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogPurchase_m1673 (EditorFacebook_t356 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern "C" void EditorFacebook_MockLoginCallback_m1674 (EditorFacebook_t356 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern "C" void EditorFacebook_MockCancelledLoginCallback_m1675 (EditorFacebook_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern "C" void EditorFacebook_BadAccessToken_m1676 (EditorFacebook_t356 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;