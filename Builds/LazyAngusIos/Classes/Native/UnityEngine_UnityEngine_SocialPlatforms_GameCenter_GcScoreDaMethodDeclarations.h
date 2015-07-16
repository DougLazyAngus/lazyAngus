#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1176;
struct GcScoreData_t1176_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1189;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1189 * GcScoreData_ToScore_m6370 (GcScoreData_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t1176_marshal(const GcScoreData_t1176& unmarshaled, GcScoreData_t1176_marshaled& marshaled);
void GcScoreData_t1176_marshal_back(const GcScoreData_t1176_marshaled& marshaled, GcScoreData_t1176& unmarshaled);
void GcScoreData_t1176_marshal_cleanup(GcScoreData_t1176_marshaled& marshaled);
