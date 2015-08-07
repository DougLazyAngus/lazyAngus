#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseUser
struct ParseUser_t1253;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1358;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1359;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1339;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1343;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1360;
// Parse.ParseObject
struct ParseObject_t1168;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1336;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
extern "C" void ParseUser__ctor_m6788 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
extern "C" bool ParseUser_get_IsAuthenticated_m6789 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
extern "C" void ParseUser_Remove_m6790 (ParseUser_t1253 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
extern "C" bool ParseUser_IsKeyMutable_m6791 (ParseUser_t1253 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeMagicFields_m6792 (ParseUser_t1253 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterSave_m6793 (ParseUser_t1253 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterFetch_m6794 (ParseUser_t1253 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
extern "C" String_t* ParseUser_get_SessionToken_m6795 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
extern "C" Task_t1157 * ParseUser_SetSessionTokenAsync_m6796 (ParseUser_t1253 * __this, String_t* ___newSessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_SetSessionTokenAsync_m6797 (ParseUser_t1253 * __this, String_t* ___newSessionToken, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
extern "C" String_t* ParseUser_get_Username_m6798 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
extern "C" void ParseUser_set_Username_m6799 (ParseUser_t1253 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
extern "C" String_t* ParseUser_get_Password_m6800 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
extern "C" void ParseUser_set_Password_m6801 (ParseUser_t1253 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
extern "C" String_t* ParseUser_get_Email_m6802 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
extern "C" void ParseUser_set_Email_m6803 (ParseUser_t1253 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_SignUpAsync_m6804 (ParseUser_t1253 * __this, Task_t1157 * ___toAwait, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
extern "C" Task_t1157 * ParseUser_SignUpAsync_m6805 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_SignUpAsync_m6806 (ParseUser_t1253 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
extern "C" Task_1_t1339 * ParseUser_LogInAsync_m6807 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1339 * ParseUser_LogInAsync_m6808 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
extern "C" Task_1_t1339 * ParseUser_BecomeAsync_m6809 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1339 * ParseUser_BecomeAsync_m6810 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_SaveAsync_m6811 (ParseUser_t1253 * __this, Task_t1157 * ___toAwait, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1343 * ParseUser_FetchAsyncInternal_m6812 (ParseUser_t1253 * __this, Task_t1157 * ___toAwait, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
extern "C" void ParseUser_LogOut_m6813 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
extern "C" Task_t1157 * ParseUser_LogOutAsync_m6814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_LogOutAsync_m6815 (Object_t * __this /* static, unused */, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
extern "C" String_t* ParseUser_get_CurrentSessionToken_m6816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
extern "C" ParseUser_t1253 * ParseUser_get_CurrentUser_m6817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
extern "C" Task_1_t1339 * ParseUser_GetCurrentUserAsync_m6818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1339 * ParseUser_GetCurrentUserAsync_m6819 (Object_t * __this /* static, unused */, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
extern "C" void ParseUser_SaveCurrentUser_m6820 (Object_t * __this /* static, unused */, ParseUser_t1253 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
extern "C" Task_t1157 * ParseUser_SaveCurrentUserAsync_m6821 (Object_t * __this /* static, unused */, ParseUser_t1253 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_SaveCurrentUserAsync_m6822 (Object_t * __this /* static, unused */, ParseUser_t1253 * ___user, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
extern "C" void ParseUser_ClearInMemoryUser_m6823 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
extern "C" bool ParseUser_get_IsCurrentUser_m6824 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
extern "C" ParseQuery_1_t1358 * ParseUser_get_Query_m6825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
extern "C" Task_t1157 * ParseUser_EnableRevocableSessionAsync_m6826 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_EnableRevocableSessionAsync_m6827 (Object_t * __this /* static, unused */, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
extern "C" void ParseUser_DisableRevocableSession_m6828 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
extern "C" bool ParseUser_get_IsRevocableSessionEnabled_m6829 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
extern "C" bool ParseUser_IsRevocableSessionToken_m6830 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
extern "C" Task_t1157 * ParseUser_UpgradeToRevocableSessionAsync_m6831 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_UpgradeToRevocableSessionAsync_m6832 (ParseUser_t1253 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_UpgradeToRevocableSessionAsync_m6833 (ParseUser_t1253 * __this, Task_t1157 * ___toAwait, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
extern "C" Task_t1157 * ParseUser_RequestPasswordResetAsync_m6834 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_RequestPasswordResetAsync_m6835 (Object_t * __this /* static, unused */, String_t* ___email, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
extern "C" Object_t* ParseUser_get_AuthData_m6836 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void ParseUser_set_AuthData_m6837 (ParseUser_t1253 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
extern "C" Object_t * ParseUser_GetProvider_m6838 (Object_t * __this /* static, unused */, String_t* ___providerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
extern "C" void ParseUser_CleanupAuthData_m6839 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
extern "C" void ParseUser_SynchronizeAllAuthData_m6840 (ParseUser_t1253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_SynchronizeAuthData_m6841 (ParseUser_t1253 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_LinkWithAsync_m6842 (ParseUser_t1253 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_LinkWithAsync_m6843 (ParseUser_t1253 * __this, String_t* ___authType, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParseUser_UnlinkFromAsync_m6844 (ParseUser_t1253 * __this, String_t* ___authType, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
extern "C" bool ParseUser_IsLinked_m6845 (ParseUser_t1253 * __this, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
extern "C" void ParseUser_LogOutWithProviders_m6846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1339 * ParseUser_LogInWithAsync_m6847 (Object_t * __this /* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1339 * ParseUser_LogInWithAsync_m6848 (Object_t * __this /* static, unused */, String_t* ___authType, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_RegisterProvider_m6849 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSignUpAsyncU3Eb__0_m6850 (ParseUser_t1253 * __this, Task_t1157 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSaveAsyncU3Eb__c_m6851 (ParseUser_t1253 * __this, Task_t1157 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
extern "C" ParseObject_t1168 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m6852 (ParseUser_t1253 * __this, Task_1_t1343 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
extern "C" ParseUser_t1253 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m6853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Task_t1157 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m6854 (ParseUser_t1253 * __this, Task_1_t1336 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
extern "C" void ParseUser__cctor_m6855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
