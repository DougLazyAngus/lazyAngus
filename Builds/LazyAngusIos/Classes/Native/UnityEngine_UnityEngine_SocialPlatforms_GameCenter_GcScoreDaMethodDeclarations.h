#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2875;
struct GcScoreData_t2875_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2887;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2887 * GcScoreData_ToScore_m10101 (GcScoreData_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2875_marshal(const GcScoreData_t2875& unmarshaled, GcScoreData_t2875_marshaled& marshaled);
void GcScoreData_t2875_marshal_back(const GcScoreData_t2875_marshaled& marshaled, GcScoreData_t2875& unmarshaled);
void GcScoreData_t2875_marshal_cleanup(GcScoreData_t2875_marshaled& marshaled);
