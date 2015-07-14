#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1165;
struct GcAchievementData_t1165_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1177;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1177 * GcAchievementData_ToAchievement_m6306 (GcAchievementData_t1165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1165_marshal(const GcAchievementData_t1165& unmarshaled, GcAchievementData_t1165_marshaled& marshaled);
void GcAchievementData_t1165_marshal_back(const GcAchievementData_t1165_marshaled& marshaled, GcAchievementData_t1165& unmarshaled);
void GcAchievementData_t1165_marshal_cleanup(GcAchievementData_t1165_marshaled& marshaled);
