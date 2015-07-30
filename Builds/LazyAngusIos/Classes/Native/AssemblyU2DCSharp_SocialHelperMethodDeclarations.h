#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SocialHelper
struct SocialHelper_t605;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t277;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m3244 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" bool SocialHelper_CustomReportAchievement_m3245 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" bool SocialHelper_CustomClearAchivements_m3246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Awake()
extern "C" void SocialHelper_Awake_m3247 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern "C" void SocialHelper_Authenticate_m3248 (SocialHelper_t605 * __this, Action_1_t277 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3249 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3250 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ReportScore(System.Int32)
extern "C" void SocialHelper_ReportScore_m3251 (SocialHelper_t605 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::RecordAchievement(System.String)
extern "C" void SocialHelper_RecordAchievement_m3252 (SocialHelper_t605 * __this, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3253 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowLeaderBoard()
extern "C" void SocialHelper_ShowLeaderBoard_m3254 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowAchievements()
extern "C" void SocialHelper_ShowAchievements_m3255 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ReportScore>m__4F(System.Boolean)
extern "C" void SocialHelper_U3CReportScoreU3Em__4F_m3256 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowLeaderBoard>m__51(System.Boolean)
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__51_m3257 (SocialHelper_t605 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowAchievements>m__52(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__52_m3258 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
