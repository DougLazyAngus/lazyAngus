#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2788;
struct GcAchievementData_t2788_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2799;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2799 * GcAchievementData_ToAchievement_m9552 (GcAchievementData_t2788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2788_marshal(const GcAchievementData_t2788& unmarshaled, GcAchievementData_t2788_marshaled& marshaled);
void GcAchievementData_t2788_marshal_back(const GcAchievementData_t2788_marshaled& marshaled, GcAchievementData_t2788& unmarshaled);
void GcAchievementData_t2788_marshal_cleanup(GcAchievementData_t2788_marshaled& marshaled);
