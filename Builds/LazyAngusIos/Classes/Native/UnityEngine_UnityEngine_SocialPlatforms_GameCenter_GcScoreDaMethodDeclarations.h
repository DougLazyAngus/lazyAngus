#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2868;
struct GcScoreData_t2868_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2880;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2880 * GcScoreData_ToScore_m10044 (GcScoreData_t2868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2868_marshal(const GcScoreData_t2868& unmarshaled, GcScoreData_t2868_marshaled& marshaled);
void GcScoreData_t2868_marshal_back(const GcScoreData_t2868_marshaled& marshaled, GcScoreData_t2868& unmarshaled);
void GcScoreData_t2868_marshal_cleanup(GcScoreData_t2868_marshaled& marshaled);
