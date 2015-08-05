#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AbstractFacebook
struct AbstractFacebook_t414;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t419;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t420;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t640;
// Facebook.OGActionType
struct OGActionType_t432;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// Facebook.HttpMethod
struct HttpMethod_t448;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// UnityEngine.WWWForm
struct WWWForm_t112;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// FBResult
struct FBResult_t281;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.AbstractFacebook::.ctor()
extern "C" void AbstractFacebook__ctor_m2219 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::Awake()
extern "C" void AbstractFacebook_Awake_m2220 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C" bool AbstractFacebook_get_IsInitialized_m2221 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C" bool AbstractFacebook_get_IsLoggedIn_m2222 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C" String_t* AbstractFacebook_get_UserId_m2223 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C" void AbstractFacebook_set_UserId_m2224 (AbstractFacebook_t414 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C" String_t* AbstractFacebook_get_AccessToken_m2225 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C" void AbstractFacebook_set_AccessToken_m2226 (AbstractFacebook_t414 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C" DateTime_t287  AbstractFacebook_get_AccessTokenExpiresAt_m2227 (AbstractFacebook_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_GetAuthResponse_m2228 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AppRequest_m2229 (AbstractFacebook_t414 * __this, String_t* ___message, StringU5BU5D_t75* ___to, List_1_t640 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t646  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m2230 (AbstractFacebook_t414 * __this, String_t* ___query, HttpMethod_t448 * ___method, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m2231 (AbstractFacebook_t414 * __this, String_t* ___query, HttpMethod_t448 * ___method, WWWForm_t112 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AddAuthDelegate_m2232 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern "C" void AbstractFacebook_OnAuthResponse_m2233 (AbstractFacebook_t414 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C" String_t* AbstractFacebook_AddFacebookDelegate_m2234 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C" void AbstractFacebook_OnFacebookResponse_m2235 (AbstractFacebook_t414 * __this, String_t* ___uniqueId, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" Dictionary_2_t122 * AbstractFacebook_CopyByValue_m2236 (AbstractFacebook_t414 * __this, Dictionary_2_t122 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern "C" String_t* AbstractFacebook_GetGraphUrl_m2237 (AbstractFacebook_t414 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
