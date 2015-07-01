#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1121;
struct GcScoreData_t1121_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1134;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1134 * GcScoreData_ToScore_m6017 (GcScoreData_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t1121_marshal(const GcScoreData_t1121& unmarshaled, GcScoreData_t1121_marshaled& marshaled);
void GcScoreData_t1121_marshal_back(const GcScoreData_t1121_marshaled& marshaled, GcScoreData_t1121& unmarshaled);
void GcScoreData_t1121_marshal_cleanup(GcScoreData_t1121_marshaled& marshaled);
