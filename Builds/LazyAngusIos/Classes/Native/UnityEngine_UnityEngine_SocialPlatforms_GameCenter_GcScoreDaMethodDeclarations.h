#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1222;
struct GcScoreData_t1222_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1234;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1234 * GcScoreData_ToScore_m6919 (GcScoreData_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t1222_marshal(const GcScoreData_t1222& unmarshaled, GcScoreData_t1222_marshaled& marshaled);
void GcScoreData_t1222_marshal_back(const GcScoreData_t1222_marshaled& marshaled, GcScoreData_t1222& unmarshaled);
void GcScoreData_t1222_marshal_cleanup(GcScoreData_t1222_marshaled& marshaled);
