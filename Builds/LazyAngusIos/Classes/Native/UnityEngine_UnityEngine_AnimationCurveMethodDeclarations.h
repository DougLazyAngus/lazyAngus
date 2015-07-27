#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1154;
struct AnimationCurve_t1154_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1283;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6582 (AnimationCurve_t1154 * __this, KeyframeU5BU5D_t1283* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6583 (AnimationCurve_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6584 (AnimationCurve_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6585 (AnimationCurve_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6586 (AnimationCurve_t1154 * __this, KeyframeU5BU5D_t1283* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1154_marshal(const AnimationCurve_t1154& unmarshaled, AnimationCurve_t1154_marshaled& marshaled);
void AnimationCurve_t1154_marshal_back(const AnimationCurve_t1154_marshaled& marshaled, AnimationCurve_t1154& unmarshaled);
void AnimationCurve_t1154_marshal_cleanup(AnimationCurve_t1154_marshaled& marshaled);
