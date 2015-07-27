#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1222;
struct GcAchievementData_t1222_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1233;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1233 * GcAchievementData_ToAchievement_m6921 (GcAchievementData_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1222_marshal(const GcAchievementData_t1222& unmarshaled, GcAchievementData_t1222_marshaled& marshaled);
void GcAchievementData_t1222_marshal_back(const GcAchievementData_t1222_marshaled& marshaled, GcAchievementData_t1222& unmarshaled);
void GcAchievementData_t1222_marshal_cleanup(GcAchievementData_t1222_marshaled& marshaled);
