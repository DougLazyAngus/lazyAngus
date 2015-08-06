#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2797;
struct GcScoreData_t2797_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2809;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2809 * GcScoreData_ToScore_m9615 (GcScoreData_t2797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2797_marshal(const GcScoreData_t2797& unmarshaled, GcScoreData_t2797_marshaled& marshaled);
void GcScoreData_t2797_marshal_back(const GcScoreData_t2797_marshaled& marshaled, GcScoreData_t2797& unmarshaled);
void GcScoreData_t2797_marshal_cleanup(GcScoreData_t2797_marshaled& marshaled);
