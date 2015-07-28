#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2787;
struct GcAchievementData_t2787_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2798;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2798 * GcAchievementData_ToAchievement_m9552 (GcAchievementData_t2787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2787_marshal(const GcAchievementData_t2787& unmarshaled, GcAchievementData_t2787_marshaled& marshaled);
void GcAchievementData_t2787_marshal_back(const GcAchievementData_t2787_marshaled& marshaled, GcAchievementData_t2787& unmarshaled);
void GcAchievementData_t2787_marshal_cleanup(GcAchievementData_t2787_marshaled& marshaled);
