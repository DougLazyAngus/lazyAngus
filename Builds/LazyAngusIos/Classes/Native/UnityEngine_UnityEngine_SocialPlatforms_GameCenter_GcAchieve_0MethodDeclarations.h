#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1220;
struct GcAchievementData_t1220_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1231;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1231 * GcAchievementData_ToAchievement_m6910 (GcAchievementData_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1220_marshal(const GcAchievementData_t1220& unmarshaled, GcAchievementData_t1220_marshaled& marshaled);
void GcAchievementData_t1220_marshal_back(const GcAchievementData_t1220_marshaled& marshaled, GcAchievementData_t1220& unmarshaled);
void GcAchievementData_t1220_marshal_cleanup(GcAchievementData_t1220_marshaled& marshaled);
