#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFacebookUtils
struct ParseFacebookUtils_t1241;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1391;
// System.Threading.Tasks.Task
struct Task_t1211;
// Parse.ParseUser
struct ParseUser_t1306;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.ParseFacebookUtils::get_AccessToken()
extern "C" String_t* ParseFacebookUtils_get_AccessToken_m6732 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::Initialize()
extern "C" void ParseFacebookUtils_Initialize_m6733 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C" Task_1_t1391 * ParseFacebookUtils_LogInAsync_m6734 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime)
extern "C" Task_1_t1391 * ParseFacebookUtils_LogInAsync_m6735 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseFacebookUtils_LinkAsync_m6736 (Object_t * __this /* static, unused */, ParseUser_t1306 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime)
extern "C" Task_t1211 * ParseFacebookUtils_LinkAsync_m6737 (Object_t * __this /* static, unused */, ParseUser_t1306 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFacebookUtils::IsLinked(Parse.ParseUser)
extern "C" bool ParseFacebookUtils_IsLinked_m6738 (Object_t * __this /* static, unused */, ParseUser_t1306 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseFacebookUtils_UnlinkAsync_m6739 (Object_t * __this /* static, unused */, ParseUser_t1306 * ___user, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser)
extern "C" Task_t1211 * ParseFacebookUtils_UnlinkAsync_m6740 (Object_t * __this /* static, unused */, ParseUser_t1306 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::.cctor()
extern "C" void ParseFacebookUtils__cctor_m6741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
