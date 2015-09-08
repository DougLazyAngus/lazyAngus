#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2867;
struct GcAchievementData_t2867_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2878;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2878 * GcAchievementData_ToAchievement_m10043 (GcAchievementData_t2867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2867_marshal(const GcAchievementData_t2867& unmarshaled, GcAchievementData_t2867_marshaled& marshaled);
void GcAchievementData_t2867_marshal_back(const GcAchievementData_t2867_marshaled& marshaled, GcAchievementData_t2867& unmarshaled);
void GcAchievementData_t2867_marshal_cleanup(GcAchievementData_t2867_marshaled& marshaled);
