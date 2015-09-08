#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseUser
struct ParseUser_t1326;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1430;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1431;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1411;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1415;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1432;
// Parse.ParseObject
struct ParseObject_t1242;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1408;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
extern "C" void ParseUser__ctor_m7217 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
extern "C" bool ParseUser_get_IsAuthenticated_m7218 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
extern "C" void ParseUser_Remove_m7219 (ParseUser_t1326 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
extern "C" bool ParseUser_IsKeyMutable_m7220 (ParseUser_t1326 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeMagicFields_m7221 (ParseUser_t1326 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterSave_m7222 (ParseUser_t1326 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterFetch_m7223 (ParseUser_t1326 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
extern "C" String_t* ParseUser_get_SessionToken_m7224 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
extern "C" Task_t1231 * ParseUser_SetSessionTokenAsync_m7225 (ParseUser_t1326 * __this, String_t* ___newSessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_SetSessionTokenAsync_m7226 (ParseUser_t1326 * __this, String_t* ___newSessionToken, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
extern "C" String_t* ParseUser_get_Username_m7227 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
extern "C" void ParseUser_set_Username_m7228 (ParseUser_t1326 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
extern "C" String_t* ParseUser_get_Password_m7229 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
extern "C" void ParseUser_set_Password_m7230 (ParseUser_t1326 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
extern "C" String_t* ParseUser_get_Email_m7231 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
extern "C" void ParseUser_set_Email_m7232 (ParseUser_t1326 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_SignUpAsync_m7233 (ParseUser_t1326 * __this, Task_t1231 * ___toAwait, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
extern "C" Task_t1231 * ParseUser_SignUpAsync_m7234 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_SignUpAsync_m7235 (ParseUser_t1326 * __this, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
extern "C" Task_1_t1411 * ParseUser_LogInAsync_m7236 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseUser_LogInAsync_m7237 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
extern "C" Task_1_t1411 * ParseUser_BecomeAsync_m7238 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseUser_BecomeAsync_m7239 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_SaveAsync_m7240 (ParseUser_t1326 * __this, Task_t1231 * ___toAwait, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1415 * ParseUser_FetchAsyncInternal_m7241 (ParseUser_t1326 * __this, Task_t1231 * ___toAwait, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
extern "C" void ParseUser_LogOut_m7242 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
extern "C" Task_t1231 * ParseUser_LogOutAsync_m7243 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_LogOutAsync_m7244 (Object_t * __this /* static, unused */, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
extern "C" String_t* ParseUser_get_CurrentSessionToken_m7245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
extern "C" ParseUser_t1326 * ParseUser_get_CurrentUser_m7246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
extern "C" Task_1_t1411 * ParseUser_GetCurrentUserAsync_m7247 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseUser_GetCurrentUserAsync_m7248 (Object_t * __this /* static, unused */, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
extern "C" void ParseUser_SaveCurrentUser_m7249 (Object_t * __this /* static, unused */, ParseUser_t1326 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
extern "C" Task_t1231 * ParseUser_SaveCurrentUserAsync_m7250 (Object_t * __this /* static, unused */, ParseUser_t1326 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_SaveCurrentUserAsync_m7251 (Object_t * __this /* static, unused */, ParseUser_t1326 * ___user, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
extern "C" void ParseUser_ClearInMemoryUser_m7252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
extern "C" bool ParseUser_get_IsCurrentUser_m7253 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
extern "C" ParseQuery_1_t1430 * ParseUser_get_Query_m7254 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
extern "C" Task_t1231 * ParseUser_EnableRevocableSessionAsync_m7255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_EnableRevocableSessionAsync_m7256 (Object_t * __this /* static, unused */, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
extern "C" void ParseUser_DisableRevocableSession_m7257 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
extern "C" bool ParseUser_get_IsRevocableSessionEnabled_m7258 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
extern "C" bool ParseUser_IsRevocableSessionToken_m7259 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
extern "C" Task_t1231 * ParseUser_UpgradeToRevocableSessionAsync_m7260 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_UpgradeToRevocableSessionAsync_m7261 (ParseUser_t1326 * __this, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_UpgradeToRevocableSessionAsync_m7262 (ParseUser_t1326 * __this, Task_t1231 * ___toAwait, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
extern "C" Task_t1231 * ParseUser_RequestPasswordResetAsync_m7263 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_RequestPasswordResetAsync_m7264 (Object_t * __this /* static, unused */, String_t* ___email, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
extern "C" Object_t* ParseUser_get_AuthData_m7265 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void ParseUser_set_AuthData_m7266 (ParseUser_t1326 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
extern "C" Object_t * ParseUser_GetProvider_m7267 (Object_t * __this /* static, unused */, String_t* ___providerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
extern "C" void ParseUser_CleanupAuthData_m7268 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
extern "C" void ParseUser_SynchronizeAllAuthData_m7269 (ParseUser_t1326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_SynchronizeAuthData_m7270 (ParseUser_t1326 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_LinkWithAsync_m7271 (ParseUser_t1326 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_LinkWithAsync_m7272 (ParseUser_t1326 * __this, String_t* ___authType, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParseUser_UnlinkFromAsync_m7273 (ParseUser_t1326 * __this, String_t* ___authType, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
extern "C" bool ParseUser_IsLinked_m7274 (ParseUser_t1326 * __this, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
extern "C" void ParseUser_LogOutWithProviders_m7275 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseUser_LogInWithAsync_m7276 (Object_t * __this /* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseUser_LogInWithAsync_m7277 (Object_t * __this /* static, unused */, String_t* ___authType, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_RegisterProvider_m7278 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSignUpAsyncU3Eb__0_m7279 (ParseUser_t1326 * __this, Task_t1231 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSaveAsyncU3Eb__c_m7280 (ParseUser_t1326 * __this, Task_t1231 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
extern "C" ParseObject_t1242 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m7281 (ParseUser_t1326 * __this, Task_1_t1415 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
extern "C" ParseUser_t1326 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m7282 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Task_t1231 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m7283 (ParseUser_t1326 * __this, Task_1_t1408 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
extern "C" void ParseUser__cctor_m7284 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
