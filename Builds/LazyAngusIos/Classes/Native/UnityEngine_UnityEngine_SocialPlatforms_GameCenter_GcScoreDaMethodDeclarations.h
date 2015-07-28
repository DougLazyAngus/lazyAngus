#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2789;
struct GcScoreData_t2789_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2801;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2801 * GcScoreData_ToScore_m9553 (GcScoreData_t2789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2789_marshal(const GcScoreData_t2789& unmarshaled, GcScoreData_t2789_marshaled& marshaled);
void GcScoreData_t2789_marshal_back(const GcScoreData_t2789_marshaled& marshaled, GcScoreData_t2789& unmarshaled);
void GcScoreData_t2789_marshal_cleanup(GcScoreData_t2789_marshaled& marshaled);
