#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2796;
struct GcAchievementData_t2796_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2807;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2807 * GcAchievementData_ToAchievement_m9614 (GcAchievementData_t2796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2796_marshal(const GcAchievementData_t2796& unmarshaled, GcAchievementData_t2796_marshaled& marshaled);
void GcAchievementData_t2796_marshal_back(const GcAchievementData_t2796_marshaled& marshaled, GcAchievementData_t2796& unmarshaled);
void GcAchievementData_t2796_marshal_cleanup(GcAchievementData_t2796_marshaled& marshaled);
