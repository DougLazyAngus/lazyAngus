#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1168;
// System.Uri
struct Uri_t758;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t1172;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t693;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1374;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
extern "C" void FacebookAuthenticationProvider__ctor_m6418 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
extern "C" Uri_t758 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m6419 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m6420 (FacebookAuthenticationProvider_t1168 * __this, Uri_t758 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
extern "C" Uri_t758 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m6421 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_ResponseUrlOverride_m6422 (FacebookAuthenticationProvider_t1168 * __this, Uri_t758 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
extern "C" Object_t* FacebookAuthenticationProvider_get_Permissions_m6423 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void FacebookAuthenticationProvider_set_Permissions_m6424 (FacebookAuthenticationProvider_t1168 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
extern "C" String_t* FacebookAuthenticationProvider_get_AppId_m6425 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
extern "C" void FacebookAuthenticationProvider_set_AppId_m6426 (FacebookAuthenticationProvider_t1168 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
extern "C" String_t* FacebookAuthenticationProvider_get_AccessToken_m6427 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
extern "C" void FacebookAuthenticationProvider_set_AccessToken_m6428 (FacebookAuthenticationProvider_t1168 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_add_Navigate_m6429 (FacebookAuthenticationProvider_t1168 * __this, Action_1_t1172 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_remove_Navigate_m6430 (FacebookAuthenticationProvider_t1168 * __this, Action_1_t1172 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
extern "C" bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m6431 (FacebookAuthenticationProvider_t1168 * __this, Uri_t758 * ___uri, Object_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
extern "C" Object_t* FacebookAuthenticationProvider_GetAuthData_m6432 (FacebookAuthenticationProvider_t1168 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
extern "C" bool FacebookAuthenticationProvider_HandleNavigation_m6433 (FacebookAuthenticationProvider_t1168 * __this, Uri_t758 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1374 * FacebookAuthenticationProvider_AuthenticateAsync_m6434 (FacebookAuthenticationProvider_t1168 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
extern "C" void FacebookAuthenticationProvider_Deauthenticate_m6435 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" bool FacebookAuthenticationProvider_RestoreAuthentication_m6436 (FacebookAuthenticationProvider_t1168 * __this, Object_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
extern "C" String_t* FacebookAuthenticationProvider_get_AuthType_m6437 (FacebookAuthenticationProvider_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
extern "C" void FacebookAuthenticationProvider__cctor_m6438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
