#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1153;
struct AnimationCurve_t1153_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1282;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6574 (AnimationCurve_t1153 * __this, KeyframeU5BU5D_t1282* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6575 (AnimationCurve_t1153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6576 (AnimationCurve_t1153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6577 (AnimationCurve_t1153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6578 (AnimationCurve_t1153 * __this, KeyframeU5BU5D_t1282* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1153_marshal(const AnimationCurve_t1153& unmarshaled, AnimationCurve_t1153_marshaled& marshaled);
void AnimationCurve_t1153_marshal_back(const AnimationCurve_t1153_marshaled& marshaled, AnimationCurve_t1153& unmarshaled);
void AnimationCurve_t1153_marshal_cleanup(AnimationCurve_t1153_marshaled& marshaled);
