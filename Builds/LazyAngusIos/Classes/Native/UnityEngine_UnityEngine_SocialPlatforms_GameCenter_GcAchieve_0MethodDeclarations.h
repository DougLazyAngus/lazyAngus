#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1142;
struct GcAchievementData_t1142_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1154;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1154 * GcAchievementData_ToAchievement_m6164 (GcAchievementData_t1142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1142_marshal(const GcAchievementData_t1142& unmarshaled, GcAchievementData_t1142_marshaled& marshaled);
void GcAchievementData_t1142_marshal_back(const GcAchievementData_t1142_marshaled& marshaled, GcAchievementData_t1142& unmarshaled);
void GcAchievementData_t1142_marshal_cleanup(GcAchievementData_t1142_marshaled& marshaled);
