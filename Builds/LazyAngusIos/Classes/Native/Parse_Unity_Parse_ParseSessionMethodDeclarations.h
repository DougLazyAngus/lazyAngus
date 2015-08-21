#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseSession
struct ParseSession_t1301;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1406;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1405;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Boolean Parse.ParseSession::IsKeyMutable(System.String)
extern "C" bool ParseSession_IsKeyMutable_m7002 (ParseSession_t1301 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseSession::get_SessionToken()
extern "C" String_t* ParseSession_get_SessionToken_m7003 (ParseSession_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseSession> Parse.ParseSession::get_Query()
extern "C" ParseQuery_1_t1406 * ParseSession_get_Query_m7004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync()
extern "C" Task_1_t1405 * ParseSession_GetCurrentSessionAsync_m7005 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1405 * ParseSession_GetCurrentSessionAsync_m7006 (Object_t * __this /* static, unused */, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.ctor()
extern "C" void ParseSession__ctor_m7007 (ParseSession_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.cctor()
extern "C" void ParseSession__cctor_m7008 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
