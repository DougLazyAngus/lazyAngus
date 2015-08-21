#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2845;
struct GcScoreData_t2845_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2857;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2857 * GcScoreData_ToScore_m9864 (GcScoreData_t2845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2845_marshal(const GcScoreData_t2845& unmarshaled, GcScoreData_t2845_marshaled& marshaled);
void GcScoreData_t2845_marshal_back(const GcScoreData_t2845_marshaled& marshaled, GcScoreData_t2845& unmarshaled);
void GcScoreData_t2845_marshal_cleanup(GcScoreData_t2845_marshaled& marshaled);
