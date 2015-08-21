#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB
struct FB_t421;
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
// Facebook.OGActionType
struct OGActionType_t432;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t682;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// Facebook.HttpMethod
struct HttpMethod_t448;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// UnityEngine.WWWForm
struct WWWForm_t112;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void FB::.ctor()
extern "C" void FB__ctor_m2249 (FB_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::.cctor()
extern "C" void FB__cctor_m2250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AbstractFacebook FB::get_FacebookImpl()
extern "C" AbstractFacebook_t414 * FB_get_FacebookImpl_m2251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AppId()
extern "C" String_t* FB_get_AppId_m2252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_UserId()
extern "C" String_t* FB_get_UserId_m2253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AccessToken()
extern "C" String_t* FB_get_AccessToken_m2254 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime FB::get_AccessTokenExpiresAt()
extern "C" DateTime_t287  FB_get_AccessTokenExpiresAt_m2255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsLoggedIn()
extern "C" bool FB_get_IsLoggedIn_m2256 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsInitialized()
extern "C" bool FB_get_IsInitialized_m2257 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,Facebook.HideUnityDelegate,System.String)
extern "C" void FB_Init_m2258 (Object_t * __this /* static, unused */, InitDelegate_t419 * ___onInitComplete, HideUnityDelegate_t420 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
extern "C" void FB_Init_m2259 (Object_t * __this /* static, unused */, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::OnDllLoaded()
extern "C" void FB_OnDllLoaded_m2260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
extern "C" void FB_Login_m2261 (Object_t * __this /* static, unused */, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Logout()
extern "C" void FB_Logout_m2262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
extern "C" void FB_AppRequest_m2263 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void FB_AppRequest_m2264 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, List_1_t682 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t688  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void FB_AppRequest_m2265 (Object_t * __this /* static, unused */, String_t* ___message, StringU5BU5D_t75* ___to, List_1_t682 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t688  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void FB_Feed_m2266 (Object_t * __this /* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void FB_API_m2267 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t448 * ___method, FacebookDelegate_t433 * ___callback, Dictionary_2_t122 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
extern "C" void FB_API_m2268 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t448 * ___method, FacebookDelegate_t433 * ___callback, WWWForm_t112 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
extern "C" void FB_PublishInstall_m2269 (Object_t * __this /* static, unused */, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::ActivateApp()
extern "C" void FB_ActivateApp_m2270 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void FB_GetDeepLink_m2271 (Object_t * __this /* static, unused */, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void FB_GameGroupCreate_m2272 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C" void FB_GameGroupJoin_m2273 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
