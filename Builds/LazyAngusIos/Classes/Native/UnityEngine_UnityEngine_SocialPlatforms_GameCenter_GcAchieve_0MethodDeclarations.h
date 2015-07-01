#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1120;
struct GcAchievementData_t1120_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1132;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1132 * GcAchievementData_ToAchievement_m6016 (GcAchievementData_t1120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1120_marshal(const GcAchievementData_t1120& unmarshaled, GcAchievementData_t1120_marshaled& marshaled);
void GcAchievementData_t1120_marshal_back(const GcAchievementData_t1120_marshaled& marshaled, GcAchievementData_t1120& unmarshaled);
void GcAchievementData_t1120_marshal_cleanup(GcAchievementData_t1120_marshaled& marshaled);
