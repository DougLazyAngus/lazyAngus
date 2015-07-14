#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AbstractFacebook
struct AbstractFacebook_t331;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t337;
// Facebook.FacebookDelegate
struct FacebookDelegate_t350;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t533;
// Facebook.OGActionType
struct OGActionType_t349;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// Facebook.HttpMethod
struct HttpMethod_t365;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// UnityEngine.WWWForm
struct WWWForm_t70;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// FBResult
struct FBResult_t213;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.AbstractFacebook::.ctor()
extern "C" void AbstractFacebook__ctor_m1481 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::Awake()
extern "C" void AbstractFacebook_Awake_m1482 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C" bool AbstractFacebook_get_IsInitialized_m1483 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C" bool AbstractFacebook_get_IsLoggedIn_m1484 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C" String_t* AbstractFacebook_get_UserId_m1485 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C" void AbstractFacebook_set_UserId_m1486 (AbstractFacebook_t331 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C" String_t* AbstractFacebook_get_AccessToken_m1487 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C" void AbstractFacebook_set_AccessToken_m1488 (AbstractFacebook_t331 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C" DateTime_t219  AbstractFacebook_get_AccessTokenExpiresAt_m1489 (AbstractFacebook_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_GetAuthResponse_m1490 (AbstractFacebook_t331 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AppRequest_m1491 (AbstractFacebook_t331 * __this, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t533 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t539  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m1492 (AbstractFacebook_t331 * __this, String_t* ___query, HttpMethod_t365 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m1493 (AbstractFacebook_t331 * __this, String_t* ___query, HttpMethod_t365 * ___method, WWWForm_t70 * ___formData, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AddAuthDelegate_m1494 (AbstractFacebook_t331 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern "C" void AbstractFacebook_OnAuthResponse_m1495 (AbstractFacebook_t331 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C" String_t* AbstractFacebook_AddFacebookDelegate_m1496 (AbstractFacebook_t331 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C" void AbstractFacebook_OnFacebookResponse_m1497 (AbstractFacebook_t331 * __this, String_t* ___uniqueId, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" Dictionary_2_t80 * AbstractFacebook_CopyByValue_m1498 (AbstractFacebook_t331 * __this, Dictionary_2_t80 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern "C" String_t* AbstractFacebook_GetGraphUrl_m1499 (AbstractFacebook_t331 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
