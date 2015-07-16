#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1175;
struct GcAchievementData_t1175_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1187;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1187 * GcAchievementData_ToAchievement_m6369 (GcAchievementData_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1175_marshal(const GcAchievementData_t1175& unmarshaled, GcAchievementData_t1175_marshaled& marshaled);
void GcAchievementData_t1175_marshal_back(const GcAchievementData_t1175_marshaled& marshaled, GcAchievementData_t1175& unmarshaled);
void GcAchievementData_t1175_marshal_cleanup(GcAchievementData_t1175_marshaled& marshaled);
