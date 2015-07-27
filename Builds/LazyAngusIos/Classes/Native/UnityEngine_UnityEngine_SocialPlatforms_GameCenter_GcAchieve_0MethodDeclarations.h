#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1221;
struct GcAchievementData_t1221_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1232;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1232 * GcAchievementData_ToAchievement_m6918 (GcAchievementData_t1221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1221_marshal(const GcAchievementData_t1221& unmarshaled, GcAchievementData_t1221_marshaled& marshaled);
void GcAchievementData_t1221_marshal_back(const GcAchievementData_t1221_marshaled& marshaled, GcAchievementData_t1221& unmarshaled);
void GcAchievementData_t1221_marshal_cleanup(GcAchievementData_t1221_marshaled& marshaled);
