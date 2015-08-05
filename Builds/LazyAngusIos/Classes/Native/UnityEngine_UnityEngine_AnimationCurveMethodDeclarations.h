#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2732;
struct AnimationCurve_t2732_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2859;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9284 (AnimationCurve_t2732 * __this, KeyframeU5BU5D_t2859* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9285 (AnimationCurve_t2732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9286 (AnimationCurve_t2732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9287 (AnimationCurve_t2732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9288 (AnimationCurve_t2732 * __this, KeyframeU5BU5D_t2859* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2732_marshal(const AnimationCurve_t2732& unmarshaled, AnimationCurve_t2732_marshaled& marshaled);
void AnimationCurve_t2732_marshal_back(const AnimationCurve_t2732_marshaled& marshaled, AnimationCurve_t2732& unmarshaled);
void AnimationCurve_t2732_marshal_cleanup(AnimationCurve_t2732_marshaled& marshaled);
