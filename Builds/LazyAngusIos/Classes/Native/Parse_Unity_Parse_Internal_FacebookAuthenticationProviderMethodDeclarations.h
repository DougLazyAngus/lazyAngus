#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1105;
// System.Uri
struct Uri_t700;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t651;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t1109;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t637;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1314;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
extern "C" void FacebookAuthenticationProvider__ctor_m6077 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
extern "C" Uri_t700 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m6078 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m6079 (FacebookAuthenticationProvider_t1105 * __this, Uri_t700 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
extern "C" Uri_t700 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m6080 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
extern "C" void FacebookAuthenticationProvider_set_ResponseUrlOverride_m6081 (FacebookAuthenticationProvider_t1105 * __this, Uri_t700 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
extern "C" Object_t* FacebookAuthenticationProvider_get_Permissions_m6082 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void FacebookAuthenticationProvider_set_Permissions_m6083 (FacebookAuthenticationProvider_t1105 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
extern "C" String_t* FacebookAuthenticationProvider_get_AppId_m6084 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
extern "C" void FacebookAuthenticationProvider_set_AppId_m6085 (FacebookAuthenticationProvider_t1105 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
extern "C" String_t* FacebookAuthenticationProvider_get_AccessToken_m6086 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
extern "C" void FacebookAuthenticationProvider_set_AccessToken_m6087 (FacebookAuthenticationProvider_t1105 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_add_Navigate_m6088 (FacebookAuthenticationProvider_t1105 * __this, Action_1_t1109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
extern "C" void FacebookAuthenticationProvider_remove_Navigate_m6089 (FacebookAuthenticationProvider_t1105 * __this, Action_1_t1109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
extern "C" bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m6090 (FacebookAuthenticationProvider_t1105 * __this, Uri_t700 * ___uri, Object_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
extern "C" Object_t* FacebookAuthenticationProvider_GetAuthData_m6091 (FacebookAuthenticationProvider_t1105 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
extern "C" bool FacebookAuthenticationProvider_HandleNavigation_m6092 (FacebookAuthenticationProvider_t1105 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1314 * FacebookAuthenticationProvider_AuthenticateAsync_m6093 (FacebookAuthenticationProvider_t1105 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
extern "C" void FacebookAuthenticationProvider_Deauthenticate_m6094 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" bool FacebookAuthenticationProvider_RestoreAuthentication_m6095 (FacebookAuthenticationProvider_t1105 * __this, Object_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
extern "C" String_t* FacebookAuthenticationProvider_get_AuthType_m6096 (FacebookAuthenticationProvider_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
extern "C" void FacebookAuthenticationProvider__cctor_m6097 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
