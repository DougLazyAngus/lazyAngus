#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2798;
struct GcAchievementData_t2798_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2809;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2809 * GcAchievementData_ToAchievement_m9629 (GcAchievementData_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2798_marshal(const GcAchievementData_t2798& unmarshaled, GcAchievementData_t2798_marshaled& marshaled);
void GcAchievementData_t2798_marshal_back(const GcAchievementData_t2798_marshaled& marshaled, GcAchievementData_t2798& unmarshaled);
void GcAchievementData_t2798_marshal_cleanup(GcAchievementData_t2798_marshaled& marshaled);
