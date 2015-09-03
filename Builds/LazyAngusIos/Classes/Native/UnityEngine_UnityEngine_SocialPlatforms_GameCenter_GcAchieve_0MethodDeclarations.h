#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2863;
struct GcAchievementData_t2863_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2874;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2874 * GcAchievementData_ToAchievement_m10030 (GcAchievementData_t2863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2863_marshal(const GcAchievementData_t2863& unmarshaled, GcAchievementData_t2863_marshaled& marshaled);
void GcAchievementData_t2863_marshal_back(const GcAchievementData_t2863_marshaled& marshaled, GcAchievementData_t2863& unmarshaled);
void GcAchievementData_t2863_marshal_cleanup(GcAchievementData_t2863_marshaled& marshaled);
