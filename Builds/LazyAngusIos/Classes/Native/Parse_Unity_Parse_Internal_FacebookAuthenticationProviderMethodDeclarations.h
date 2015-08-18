#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1167;
// System.Uri
struct Uri_t757;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t1171;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t692;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1373;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
extern "C" void FacebookAuthenticationProvider__ctor_m6396 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
extern "C" Uri_t757 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m6397 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m6398 (FacebookAuthenticationProvider_t1167 * __this, Uri_t757 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
extern "C" Uri_t757 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m6399 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_ResponseUrlOverride_m6400 (FacebookAuthenticationProvider_t1167 * __this, Uri_t757 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
extern "C" Object_t* FacebookAuthenticationProvider_get_Permissions_m6401 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void FacebookAuthenticationProvider_set_Permissions_m6402 (FacebookAuthenticationProvider_t1167 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
extern "C" String_t* FacebookAuthenticationProvider_get_AppId_m6403 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
extern "C" void FacebookAuthenticationProvider_set_AppId_m6404 (FacebookAuthenticationProvider_t1167 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
extern "C" String_t* FacebookAuthenticationProvider_get_AccessToken_m6405 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
extern "C" void FacebookAuthenticationProvider_set_AccessToken_m6406 (FacebookAuthenticationProvider_t1167 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_add_Navigate_m6407 (FacebookAuthenticationProvider_t1167 * __this, Action_1_t1171 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_remove_Navigate_m6408 (FacebookAuthenticationProvider_t1167 * __this, Action_1_t1171 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
extern "C" bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m6409 (FacebookAuthenticationProvider_t1167 * __this, Uri_t757 * ___uri, Object_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
extern "C" Object_t* FacebookAuthenticationProvider_GetAuthData_m6410 (FacebookAuthenticationProvider_t1167 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
extern "C" bool FacebookAuthenticationProvider_HandleNavigation_m6411 (FacebookAuthenticationProvider_t1167 * __this, Uri_t757 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1373 * FacebookAuthenticationProvider_AuthenticateAsync_m6412 (FacebookAuthenticationProvider_t1167 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
extern "C" void FacebookAuthenticationProvider_Deauthenticate_m6413 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" bool FacebookAuthenticationProvider_RestoreAuthentication_m6414 (FacebookAuthenticationProvider_t1167 * __this, Object_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
extern "C" String_t* FacebookAuthenticationProvider_get_AuthType_m6415 (FacebookAuthenticationProvider_t1167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
extern "C" void FacebookAuthenticationProvider__cctor_m6416 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
