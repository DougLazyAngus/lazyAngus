#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFacebookUtils
struct ParseFacebookUtils_t1238;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1388;
// System.Threading.Tasks.Task
struct Task_t1208;
// Parse.ParseUser
struct ParseUser_t1303;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.ParseFacebookUtils::get_AccessToken()
extern "C" String_t* ParseFacebookUtils_get_AccessToken_m6700 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::Initialize()
extern "C" void ParseFacebookUtils_Initialize_m6701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C" Task_1_t1388 * ParseFacebookUtils_LogInAsync_m6702 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime)
extern "C" Task_1_t1388 * ParseFacebookUtils_LogInAsync_m6703 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C" Task_t1208 * ParseFacebookUtils_LinkAsync_m6704 (Object_t * __this /* static, unused */, ParseUser_t1303 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime)
extern "C" Task_t1208 * ParseFacebookUtils_LinkAsync_m6705 (Object_t * __this /* static, unused */, ParseUser_t1303 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t287  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFacebookUtils::IsLinked(Parse.ParseUser)
extern "C" bool ParseFacebookUtils_IsLinked_m6706 (Object_t * __this /* static, unused */, ParseUser_t1303 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t1208 * ParseFacebookUtils_UnlinkAsync_m6707 (Object_t * __this /* static, unused */, ParseUser_t1303 * ___user, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser)
extern "C" Task_t1208 * ParseFacebookUtils_UnlinkAsync_m6708 (Object_t * __this /* static, unused */, ParseUser_t1303 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::.cctor()
extern "C" void ParseFacebookUtils__cctor_m6709 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
