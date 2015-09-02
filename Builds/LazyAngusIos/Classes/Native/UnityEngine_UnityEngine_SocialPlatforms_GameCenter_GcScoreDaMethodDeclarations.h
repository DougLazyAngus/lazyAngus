#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2864;
struct GcScoreData_t2864_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2876;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2876 * GcScoreData_ToScore_m10028 (GcScoreData_t2864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2864_marshal(const GcScoreData_t2864& unmarshaled, GcScoreData_t2864_marshaled& marshaled);
void GcScoreData_t2864_marshal_back(const GcScoreData_t2864_marshaled& marshaled, GcScoreData_t2864& unmarshaled);
void GcScoreData_t2864_marshal_cleanup(GcScoreData_t2864_marshaled& marshaled);
