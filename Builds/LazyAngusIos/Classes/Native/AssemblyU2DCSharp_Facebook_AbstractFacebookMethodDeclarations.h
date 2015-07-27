#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AbstractFacebook
struct AbstractFacebook_t372;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t377;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t378;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t583;
// Facebook.OGActionType
struct OGActionType_t390;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// Facebook.HttpMethod
struct HttpMethod_t406;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// UnityEngine.WWWForm
struct WWWForm_t70;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t270;
// FBResult
struct FBResult_t239;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void Facebook.AbstractFacebook::.ctor()
extern "C" void AbstractFacebook__ctor_m1946 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::Awake()
extern "C" void AbstractFacebook_Awake_m1947 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C" bool AbstractFacebook_get_IsInitialized_m1948 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C" bool AbstractFacebook_get_IsLoggedIn_m1949 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C" String_t* AbstractFacebook_get_UserId_m1950 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C" void AbstractFacebook_set_UserId_m1951 (AbstractFacebook_t372 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C" String_t* AbstractFacebook_get_AccessToken_m1952 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C" void AbstractFacebook_set_AccessToken_m1953 (AbstractFacebook_t372 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C" DateTime_t245  AbstractFacebook_get_AccessTokenExpiresAt_m1954 (AbstractFacebook_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_GetAuthResponse_m1955 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AppRequest_m1956 (AbstractFacebook_t372 * __this, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m1957 (AbstractFacebook_t372 * __this, String_t* ___query, HttpMethod_t406 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_API_m1958 (AbstractFacebook_t372 * __this, String_t* ___query, HttpMethod_t406 * ___method, WWWForm_t70 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AddAuthDelegate_m1959 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern "C" void AbstractFacebook_OnAuthResponse_m1960 (AbstractFacebook_t372 * __this, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C" String_t* AbstractFacebook_AddFacebookDelegate_m1961 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C" void AbstractFacebook_OnFacebookResponse_m1962 (AbstractFacebook_t372 * __this, String_t* ___uniqueId, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" Dictionary_2_t80 * AbstractFacebook_CopyByValue_m1963 (AbstractFacebook_t372 * __this, Dictionary_2_t80 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern "C" String_t* AbstractFacebook_GetGraphUrl_m1964 (AbstractFacebook_t372 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
