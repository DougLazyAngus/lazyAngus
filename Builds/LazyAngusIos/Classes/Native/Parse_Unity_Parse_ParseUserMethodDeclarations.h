#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseUser
struct ParseUser_t1333;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1437;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1438;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1418;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1422;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1439;
// Parse.ParseObject
struct ParseObject_t1249;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1415;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
extern "C" void ParseUser__ctor_m7275 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
extern "C" bool ParseUser_get_IsAuthenticated_m7276 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
extern "C" void ParseUser_Remove_m7277 (ParseUser_t1333 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
extern "C" bool ParseUser_IsKeyMutable_m7278 (ParseUser_t1333 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeMagicFields_m7279 (ParseUser_t1333 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterSave_m7280 (ParseUser_t1333 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterFetch_m7281 (ParseUser_t1333 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
extern "C" String_t* ParseUser_get_SessionToken_m7282 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
extern "C" Task_t1238 * ParseUser_SetSessionTokenAsync_m7283 (ParseUser_t1333 * __this, String_t* ___newSessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_SetSessionTokenAsync_m7284 (ParseUser_t1333 * __this, String_t* ___newSessionToken, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
extern "C" String_t* ParseUser_get_Username_m7285 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
extern "C" void ParseUser_set_Username_m7286 (ParseUser_t1333 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
extern "C" String_t* ParseUser_get_Password_m7287 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
extern "C" void ParseUser_set_Password_m7288 (ParseUser_t1333 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
extern "C" String_t* ParseUser_get_Email_m7289 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
extern "C" void ParseUser_set_Email_m7290 (ParseUser_t1333 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_SignUpAsync_m7291 (ParseUser_t1333 * __this, Task_t1238 * ___toAwait, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
extern "C" Task_t1238 * ParseUser_SignUpAsync_m7292 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_SignUpAsync_m7293 (ParseUser_t1333 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
extern "C" Task_1_t1418 * ParseUser_LogInAsync_m7294 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1418 * ParseUser_LogInAsync_m7295 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
extern "C" Task_1_t1418 * ParseUser_BecomeAsync_m7296 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1418 * ParseUser_BecomeAsync_m7297 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_SaveAsync_m7298 (ParseUser_t1333 * __this, Task_t1238 * ___toAwait, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1422 * ParseUser_FetchAsyncInternal_m7299 (ParseUser_t1333 * __this, Task_t1238 * ___toAwait, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
extern "C" void ParseUser_LogOut_m7300 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
extern "C" Task_t1238 * ParseUser_LogOutAsync_m7301 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_LogOutAsync_m7302 (Object_t * __this /* static, unused */, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
extern "C" String_t* ParseUser_get_CurrentSessionToken_m7303 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
extern "C" ParseUser_t1333 * ParseUser_get_CurrentUser_m7304 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
extern "C" Task_1_t1418 * ParseUser_GetCurrentUserAsync_m7305 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1418 * ParseUser_GetCurrentUserAsync_m7306 (Object_t * __this /* static, unused */, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
extern "C" void ParseUser_SaveCurrentUser_m7307 (Object_t * __this /* static, unused */, ParseUser_t1333 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
extern "C" Task_t1238 * ParseUser_SaveCurrentUserAsync_m7308 (Object_t * __this /* static, unused */, ParseUser_t1333 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_SaveCurrentUserAsync_m7309 (Object_t * __this /* static, unused */, ParseUser_t1333 * ___user, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
extern "C" void ParseUser_ClearInMemoryUser_m7310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
extern "C" bool ParseUser_get_IsCurrentUser_m7311 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
extern "C" ParseQuery_1_t1437 * ParseUser_get_Query_m7312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
extern "C" Task_t1238 * ParseUser_EnableRevocableSessionAsync_m7313 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_EnableRevocableSessionAsync_m7314 (Object_t * __this /* static, unused */, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
extern "C" void ParseUser_DisableRevocableSession_m7315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
extern "C" bool ParseUser_get_IsRevocableSessionEnabled_m7316 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
extern "C" bool ParseUser_IsRevocableSessionToken_m7317 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
extern "C" Task_t1238 * ParseUser_UpgradeToRevocableSessionAsync_m7318 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_UpgradeToRevocableSessionAsync_m7319 (ParseUser_t1333 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_UpgradeToRevocableSessionAsync_m7320 (ParseUser_t1333 * __this, Task_t1238 * ___toAwait, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
extern "C" Task_t1238 * ParseUser_RequestPasswordResetAsync_m7321 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_RequestPasswordResetAsync_m7322 (Object_t * __this /* static, unused */, String_t* ___email, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
extern "C" Object_t* ParseUser_get_AuthData_m7323 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void ParseUser_set_AuthData_m7324 (ParseUser_t1333 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
extern "C" Object_t * ParseUser_GetProvider_m7325 (Object_t * __this /* static, unused */, String_t* ___providerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
extern "C" void ParseUser_CleanupAuthData_m7326 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
extern "C" void ParseUser_SynchronizeAllAuthData_m7327 (ParseUser_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_SynchronizeAuthData_m7328 (ParseUser_t1333 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_LinkWithAsync_m7329 (ParseUser_t1333 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_LinkWithAsync_m7330 (ParseUser_t1333 * __this, String_t* ___authType, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseUser_UnlinkFromAsync_m7331 (ParseUser_t1333 * __this, String_t* ___authType, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
extern "C" bool ParseUser_IsLinked_m7332 (ParseUser_t1333 * __this, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
extern "C" void ParseUser_LogOutWithProviders_m7333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1418 * ParseUser_LogInWithAsync_m7334 (Object_t * __this /* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1418 * ParseUser_LogInWithAsync_m7335 (Object_t * __this /* static, unused */, String_t* ___authType, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_RegisterProvider_m7336 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSignUpAsyncU3Eb__0_m7337 (ParseUser_t1333 * __this, Task_t1238 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSaveAsyncU3Eb__c_m7338 (ParseUser_t1333 * __this, Task_t1238 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
extern "C" ParseObject_t1249 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m7339 (ParseUser_t1333 * __this, Task_1_t1422 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
extern "C" ParseUser_t1333 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m7340 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Task_t1238 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m7341 (ParseUser_t1333 * __this, Task_1_t1415 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
extern "C" void ParseUser__cctor_m7342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
