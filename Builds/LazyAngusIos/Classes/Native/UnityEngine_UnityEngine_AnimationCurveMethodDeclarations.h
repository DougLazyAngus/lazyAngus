#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2809;
struct AnimationCurve_t2809_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2936;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9764 (AnimationCurve_t2809 * __this, KeyframeU5BU5D_t2936* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9765 (AnimationCurve_t2809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9766 (AnimationCurve_t2809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9767 (AnimationCurve_t2809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9768 (AnimationCurve_t2809 * __this, KeyframeU5BU5D_t2936* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2809_marshal(const AnimationCurve_t2809& unmarshaled, AnimationCurve_t2809_marshaled& marshaled);
void AnimationCurve_t2809_marshal_back(const AnimationCurve_t2809_marshaled& marshaled, AnimationCurve_t2809& unmarshaled);
void AnimationCurve_t2809_marshal_cleanup(AnimationCurve_t2809_marshaled& marshaled);
