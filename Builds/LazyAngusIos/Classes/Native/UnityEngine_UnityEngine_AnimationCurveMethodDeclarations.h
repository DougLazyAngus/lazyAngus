#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2798;
struct AnimationCurve_t2798_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2925;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9691 (AnimationCurve_t2798 * __this, KeyframeU5BU5D_t2925* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9692 (AnimationCurve_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9693 (AnimationCurve_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9694 (AnimationCurve_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9695 (AnimationCurve_t2798 * __this, KeyframeU5BU5D_t2925* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2798_marshal(const AnimationCurve_t2798& unmarshaled, AnimationCurve_t2798_marshaled& marshaled);
void AnimationCurve_t2798_marshal_back(const AnimationCurve_t2798_marshaled& marshaled, AnimationCurve_t2798& unmarshaled);
void AnimationCurve_t2798_marshal_cleanup(AnimationCurve_t2798_marshaled& marshaled);
