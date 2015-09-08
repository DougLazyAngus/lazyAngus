#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2864;
struct GcAchievementData_t2864_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2875;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2875 * GcAchievementData_ToAchievement_m10043 (GcAchievementData_t2864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2864_marshal(const GcAchievementData_t2864& unmarshaled, GcAchievementData_t2864_marshaled& marshaled);
void GcAchievementData_t2864_marshal_back(const GcAchievementData_t2864_marshaled& marshaled, GcAchievementData_t2864& unmarshaled);
void GcAchievementData_t2864_marshal_cleanup(GcAchievementData_t2864_marshaled& marshaled);
