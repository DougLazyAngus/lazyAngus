#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.IOSFacebook
struct IOSFacebook_t361;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t337;
// Facebook.FacebookDelegate
struct FacebookDelegate_t350;
// Facebook.OGActionType
struct OGActionType_t349;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t535;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// Facebook.IOSFacebook/NativeDict
struct NativeDict_t359;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.IOSFacebook::.ctor()
extern "C" void IOSFacebook__ctor_m1683 (IOSFacebook_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" void IOSFacebook_iosInit_m1684 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
extern "C" void IOSFacebook_iosLogin_m1685 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogout()
extern "C" void IOSFacebook_iosLogout_m1686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
extern "C" void IOSFacebook_iosSetShareDialogMode_m1687 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void IOSFacebook_iosFeedRequest_m1688 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C" void IOSFacebook_iosAppRequest_m1689 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t45* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C" void IOSFacebook_iosCreateGameGroup_m1690 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
extern "C" void IOSFacebook_iosJoinGameGroup_m1691 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
extern "C" void IOSFacebook_iosFBSettingsPublishInstall_m1692 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
extern "C" void IOSFacebook_iosFBSettingsActivateApp_m1693 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C" void IOSFacebook_iosFBAppEventsLogEvent_m1694 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C" void IOSFacebook_iosFBAppEventsLogPurchase_m1695 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m1696 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
extern "C" void IOSFacebook_iosGetDeepLink_m1697 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
extern "C" int32_t IOSFacebook_get_DialogMode_m1698 (IOSFacebook_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C" void IOSFacebook_set_DialogMode_m1699 (IOSFacebook_t361 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C" bool IOSFacebook_get_LimitEventUsage_m1700 (IOSFacebook_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_set_LimitEventUsage_m1701 (IOSFacebook_t361 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C" void IOSFacebook_OnAwake_m1702 (IOSFacebook_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void IOSFacebook_Init_m1703 (IOSFacebook_t361 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Login_m1704 (IOSFacebook_t361 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Logout()
extern "C" void IOSFacebook_Logout_m1705 (IOSFacebook_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_AppRequest_m1706 (IOSFacebook_t361 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t535 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t541  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_FeedRequest_m1707 (IOSFacebook_t361 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Pay_m1708 (IOSFacebook_t361 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t541  ___quantityMin, Nullable_1_t541  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GameGroupCreate_m1709 (IOSFacebook_t361 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GameGroupJoin_m1710 (IOSFacebook_t361 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GetDeepLink_m1711 (IOSFacebook_t361 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern "C" void IOSFacebook_OnGetDeepLinkComplete_m1712 (IOSFacebook_t361 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_AppEventsLogEvent_m1713 (IOSFacebook_t361 * __this, String_t* ___logEvent, Nullable_1_t542  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_AppEventsLogPurchase_m1714 (IOSFacebook_t361 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_PublishInstall_m1715 (IOSFacebook_t361 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C" void IOSFacebook_ActivateApp_m1716 (IOSFacebook_t361 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" NativeDict_t359 * IOSFacebook_MarshallDict_m1717 (IOSFacebook_t361 * __this, Dictionary_2_t244 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" NativeDict_t359 * IOSFacebook_MarshallDict_m1718 (IOSFacebook_t361 * __this, Dictionary_2_t80 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern "C" void IOSFacebook_OnInitComplete_m1719 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern "C" void IOSFacebook_OnLogin_m1720 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void IOSFacebook_ParseLoginDict_m1721 (IOSFacebook_t361 * __this, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern "C" void IOSFacebook_OnAccessTokenRefresh_m1722 (IOSFacebook_t361 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t219  IOSFacebook_FromTimestamp_m1723 (IOSFacebook_t361 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C" void IOSFacebook_OnLogout_m1724 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern "C" void IOSFacebook_OnRequestComplete_m1725 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
