﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SocialHelper
struct SocialHelper_t596;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t277;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m3206 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" bool SocialHelper_CustomReportAchievement_m3207 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" bool SocialHelper_CustomClearAchivements_m3208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Awake()
extern "C" void SocialHelper_Awake_m3209 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern "C" void SocialHelper_Authenticate_m3210 (SocialHelper_t596 * __this, Action_1_t277 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3211 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3212 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ReportScore(System.Int32)
extern "C" void SocialHelper_ReportScore_m3213 (SocialHelper_t596 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::RecordAchievement(System.String)
extern "C" void SocialHelper_RecordAchievement_m3214 (SocialHelper_t596 * __this, String_t* ___achievementID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3215 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowLeaderBoard()
extern "C" void SocialHelper_ShowLeaderBoard_m3216 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::ShowAchievements()
extern "C" void SocialHelper_ShowAchievements_m3217 (SocialHelper_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ReportScore>m__4F(System.Boolean)
extern "C" void SocialHelper_U3CReportScoreU3Em__4F_m3218 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowLeaderBoard>m__51(System.Boolean)
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__51_m3219 (SocialHelper_t596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocialHelper::<ShowAchievements>m__52(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__52_m3220 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;