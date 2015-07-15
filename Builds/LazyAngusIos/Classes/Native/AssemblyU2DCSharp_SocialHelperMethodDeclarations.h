#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SocialHelper
struct SocialHelper_t504;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t209;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m2399 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" bool SocialHelper_CustomReportAchievement_m2400 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" bool SocialHelper_CustomClearAchivements_m2401 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Awake()
extern "C" void SocialHelper_Awake_m2402 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern "C" void SocialHelper_Authenticate_m2403 (SocialHelper_t504 * __this, Action_1_t209 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m2404 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m2405 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ReportScore(System.Int32)
extern "C" void SocialHelper_ReportScore_m2406 (SocialHelper_t504 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::RecordAchievement(System.String)
extern "C" void SocialHelper_RecordAchievement_m2407 (SocialHelper_t504 * __this, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m2408 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowLeaderBoard()
extern "C" void SocialHelper_ShowLeaderBoard_m2409 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowAchievements()
extern "C" void SocialHelper_ShowAchievements_m2410 (SocialHelper_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ReportScore>m__27(System.Boolean)
extern "C" void SocialHelper_U3CReportScoreU3Em__27_m2411 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowLeaderBoard>m__29(System.Boolean)
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__29_m2412 (SocialHelper_t504 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowAchievements>m__2A(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__2A_m2413 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
