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
extern "C" void SocialHelper__ctor_m3261 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" bool SocialHelper_CustomReportAchievement_m3262 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" bool SocialHelper_CustomClearAchivements_m3263 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Awake()
extern "C" void SocialHelper_Awake_m3264 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern "C" void SocialHelper_Authenticate_m3265 (SocialHelper_t605 * __this, Action_1_t277 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3266 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3267 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ReportScore(System.Int32)
extern "C" void SocialHelper_ReportScore_m3268 (SocialHelper_t605 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::RecordAchievement(System.String)
extern "C" void SocialHelper_RecordAchievement_m3269 (SocialHelper_t605 * __this, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3270 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowLeaderBoard()
extern "C" void SocialHelper_ShowLeaderBoard_m3271 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowAchievements()
extern "C" void SocialHelper_ShowAchievements_m3272 (SocialHelper_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ReportScore>m__4F(System.Boolean)
extern "C" void SocialHelper_U3CReportScoreU3Em__4F_m3273 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowLeaderBoard>m__51(System.Boolean)
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__51_m3274 (SocialHelper_t605 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowAchievements>m__52(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__52_m3275 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
