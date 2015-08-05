#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2797;
struct GcAchievementData_t2797_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2808;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2808 * GcAchievementData_ToAchievement_m9621 (GcAchievementData_t2797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2797_marshal(const GcAchievementData_t2797& unmarshaled, GcAchievementData_t2797_marshaled& marshaled);
void GcAchievementData_t2797_marshal_back(const GcAchievementData_t2797_marshaled& marshaled, GcAchievementData_t2797& unmarshaled);
void GcAchievementData_t2797_marshal_cleanup(GcAchievementData_t2797_marshaled& marshaled);
