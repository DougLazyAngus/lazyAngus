#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterDataCash
struct TwitterDataCash_t276;
// TweetTemplate
struct TweetTemplate_t281;
// System.String
struct String_t;
// TwitterUserInfo
struct TwitterUserInfo_t266;

// System.Void TwitterDataCash::.cctor()
extern "C" void TwitterDataCash__cctor_m1403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterDataCash::AddTweet(TweetTemplate)
extern "C" void TwitterDataCash_AddTweet_m1404 (Object_t * __this /* static, unused */, TweetTemplate_t281 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweetTemplate TwitterDataCash::GetTweetsById(System.String)
extern "C" TweetTemplate_t281 * TwitterDataCash_GetTweetsById_m1405 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterDataCash::AddUser(TwitterUserInfo)
extern "C" void TwitterDataCash_AddUser_m1406 (Object_t * __this /* static, unused */, TwitterUserInfo_t266 * ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo TwitterDataCash::GetUserById(System.String)
extern "C" TwitterUserInfo_t266 * TwitterDataCash_GetUserById_m1407 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
