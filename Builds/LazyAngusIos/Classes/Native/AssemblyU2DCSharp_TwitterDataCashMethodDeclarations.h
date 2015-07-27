#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterDataCash
struct TwitterDataCash_t278;
// TweetTemplate
struct TweetTemplate_t283;
// System.String
struct String_t;
// TwitterUserInfo
struct TwitterUserInfo_t268;

// System.Void TwitterDataCash::.cctor()
extern "C" void TwitterDataCash__cctor_m1405 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterDataCash::AddTweet(TweetTemplate)
extern "C" void TwitterDataCash_AddTweet_m1406 (Object_t * __this /* static, unused */, TweetTemplate_t283 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweetTemplate TwitterDataCash::GetTweetsById(System.String)
extern "C" TweetTemplate_t283 * TwitterDataCash_GetTweetsById_m1407 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterDataCash::AddUser(TwitterUserInfo)
extern "C" void TwitterDataCash_AddUser_m1408 (Object_t * __this /* static, unused */, TwitterUserInfo_t268 * ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo TwitterDataCash::GetUserById(System.String)
extern "C" TwitterUserInfo_t268 * TwitterDataCash_GetUserById_m1409 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
