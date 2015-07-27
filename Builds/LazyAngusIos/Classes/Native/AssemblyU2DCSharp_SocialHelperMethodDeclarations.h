#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SocialHelper
struct SocialHelper_t552;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t237;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m2910 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" bool SocialHelper_CustomReportAchievement_m2911 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" bool SocialHelper_CustomClearAchivements_m2912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Awake()
extern "C" void SocialHelper_Awake_m2913 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern "C" void SocialHelper_Authenticate_m2914 (SocialHelper_t552 * __this, Action_1_t237 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m2915 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m2916 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ReportScore(System.Int32)
extern "C" void SocialHelper_ReportScore_m2917 (SocialHelper_t552 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::RecordAchievement(System.String)
extern "C" void SocialHelper_RecordAchievement_m2918 (SocialHelper_t552 * __this, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m2919 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowLeaderBoard()
extern "C" void SocialHelper_ShowLeaderBoard_m2920 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowAchievements()
extern "C" void SocialHelper_ShowAchievements_m2921 (SocialHelper_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ReportScore>m__4F(System.Boolean)
extern "C" void SocialHelper_U3CReportScoreU3Em__4F_m2922 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowLeaderBoard>m__51(System.Boolean)
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__51_m2923 (SocialHelper_t552 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowAchievements>m__52(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__52_m2924 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
