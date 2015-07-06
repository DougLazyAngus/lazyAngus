#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1143;
struct GcScoreData_t1143_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1156;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1156 * GcScoreData_ToScore_m6165 (GcScoreData_t1143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t1143_marshal(const GcScoreData_t1143& unmarshaled, GcScoreData_t1143_marshaled& marshaled);
void GcScoreData_t1143_marshal_back(const GcScoreData_t1143_marshaled& marshaled, GcScoreData_t1143& unmarshaled);
void GcScoreData_t1143_marshal_cleanup(GcScoreData_t1143_marshaled& marshaled);
