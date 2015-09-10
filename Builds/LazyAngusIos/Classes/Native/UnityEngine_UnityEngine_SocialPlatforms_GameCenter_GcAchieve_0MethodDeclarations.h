#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2874;
struct GcAchievementData_t2874_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2885;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2885 * GcAchievementData_ToAchievement_m10100 (GcAchievementData_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2874_marshal(const GcAchievementData_t2874& unmarshaled, GcAchievementData_t2874_marshaled& marshaled);
void GcAchievementData_t2874_marshal_back(const GcAchievementData_t2874_marshaled& marshaled, GcAchievementData_t2874& unmarshaled);
void GcAchievementData_t2874_marshal_cleanup(GcAchievementData_t2874_marshaled& marshaled);
