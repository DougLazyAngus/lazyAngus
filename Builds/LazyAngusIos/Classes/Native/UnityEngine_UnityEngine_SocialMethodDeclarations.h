#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Social
struct Social_t1187;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t1188;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t633;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t209;

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m6383 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C" Object_t * Social_get_localUser_m3007 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C" void Social_ReportProgress_m3099 (Object_t * __this /* static, unused */, String_t* ___achievementID, double ___progress, Action_1_t209 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C" void Social_ReportScore_m3098 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t209 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowAchievementsUI()
extern "C" void Social_ShowAchievementsUI_m3101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
