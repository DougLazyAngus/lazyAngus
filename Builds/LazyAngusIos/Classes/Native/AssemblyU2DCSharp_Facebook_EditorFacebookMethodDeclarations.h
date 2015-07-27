#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.EditorFacebook
struct EditorFacebook_t397;
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
// FBResult
struct FBResult_t239;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.EditorFacebook::.ctor()
extern "C" void EditorFacebook__ctor_m2122 (EditorFacebook_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C" bool EditorFacebook_get_LimitEventUsage_m2123 (EditorFacebook_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void EditorFacebook_set_LimitEventUsage_m2124 (EditorFacebook_t397 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C" void EditorFacebook_OnAwake_m2125 (EditorFacebook_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void EditorFacebook_Init_m2126 (EditorFacebook_t397 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Login_m2127 (EditorFacebook_t397 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Logout()
extern "C" void EditorFacebook_Logout_m2128 (EditorFacebook_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_AppRequest_m2129 (EditorFacebook_t397 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_FeedRequest_m2130 (EditorFacebook_t397 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Pay_m2131 (EditorFacebook_t397 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GameGroupCreate_m2132 (EditorFacebook_t397 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GameGroupJoin_m2133 (EditorFacebook_t397 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_PublishInstall_m2134 (EditorFacebook_t397 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C" void EditorFacebook_ActivateApp_m2135 (EditorFacebook_t397 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void EditorFacebook_GetDeepLink_m2136 (EditorFacebook_t397 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogEvent_m2137 (EditorFacebook_t397 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogPurchase_m2138 (EditorFacebook_t397 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern "C" void EditorFacebook_MockLoginCallback_m2139 (EditorFacebook_t397 * __this, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern "C" void EditorFacebook_MockCancelledLoginCallback_m2140 (EditorFacebook_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern "C" void EditorFacebook_BadAccessToken_m2141 (EditorFacebook_t397 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
