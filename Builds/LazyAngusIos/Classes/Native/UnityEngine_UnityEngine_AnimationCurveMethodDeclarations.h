#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2779;
struct AnimationCurve_t2779_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2906;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9527 (AnimationCurve_t2779 * __this, KeyframeU5BU5D_t2906* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9528 (AnimationCurve_t2779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9529 (AnimationCurve_t2779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9530 (AnimationCurve_t2779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9531 (AnimationCurve_t2779 * __this, KeyframeU5BU5D_t2906* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2779_marshal(const AnimationCurve_t2779& unmarshaled, AnimationCurve_t2779_marshaled& marshaled);
void AnimationCurve_t2779_marshal_back(const AnimationCurve_t2779_marshaled& marshaled, AnimationCurve_t2779& unmarshaled);
void AnimationCurve_t2779_marshal_cleanup(AnimationCurve_t2779_marshaled& marshaled);
