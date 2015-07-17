#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1221;
struct GcScoreData_t1221_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1233;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1233 * GcScoreData_ToScore_m6911 (GcScoreData_t1221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t1221_marshal(const GcScoreData_t1221& unmarshaled, GcScoreData_t1221_marshaled& marshaled);
void GcScoreData_t1221_marshal_back(const GcScoreData_t1221_marshaled& marshaled, GcScoreData_t1221& unmarshaled);
void GcScoreData_t1221_marshal_cleanup(GcScoreData_t1221_marshaled& marshaled);
