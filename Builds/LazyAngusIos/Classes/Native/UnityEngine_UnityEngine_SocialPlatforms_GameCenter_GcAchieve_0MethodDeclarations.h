#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2794;
struct GcAchievementData_t2794_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2805;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2805 * GcAchievementData_ToAchievement_m9598 (GcAchievementData_t2794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2794_marshal(const GcAchievementData_t2794& unmarshaled, GcAchievementData_t2794_marshaled& marshaled);
void GcAchievementData_t2794_marshal_back(const GcAchievementData_t2794_marshaled& marshaled, GcAchievementData_t2794& unmarshaled);
void GcAchievementData_t2794_marshal_cleanup(GcAchievementData_t2794_marshaled& marshaled);
