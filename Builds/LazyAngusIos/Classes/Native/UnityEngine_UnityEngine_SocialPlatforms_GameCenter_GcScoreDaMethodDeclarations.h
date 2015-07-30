#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2795;
struct GcScoreData_t2795_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2807;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2807 * GcScoreData_ToScore_m9599 (GcScoreData_t2795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2795_marshal(const GcScoreData_t2795& unmarshaled, GcScoreData_t2795_marshaled& marshaled);
void GcScoreData_t2795_marshal_back(const GcScoreData_t2795_marshaled& marshaled, GcScoreData_t2795& unmarshaled);
void GcScoreData_t2795_marshal_cleanup(GcScoreData_t2795_marshaled& marshaled);
