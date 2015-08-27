#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2782;
struct AnimationCurve_t2782_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2909;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9559 (AnimationCurve_t2782 * __this, KeyframeU5BU5D_t2909* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9560 (AnimationCurve_t2782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9561 (AnimationCurve_t2782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9562 (AnimationCurve_t2782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9563 (AnimationCurve_t2782 * __this, KeyframeU5BU5D_t2909* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2782_marshal(const AnimationCurve_t2782& unmarshaled, AnimationCurve_t2782_marshaled& marshaled);
void AnimationCurve_t2782_marshal_back(const AnimationCurve_t2782_marshaled& marshaled, AnimationCurve_t2782& unmarshaled);
void AnimationCurve_t2782_marshal_cleanup(AnimationCurve_t2782_marshaled& marshaled);
