#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2733;
struct AnimationCurve_t2733_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2860;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9292 (AnimationCurve_t2733 * __this, KeyframeU5BU5D_t2860* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9293 (AnimationCurve_t2733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9294 (AnimationCurve_t2733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9295 (AnimationCurve_t2733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9296 (AnimationCurve_t2733 * __this, KeyframeU5BU5D_t2860* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2733_marshal(const AnimationCurve_t2733& unmarshaled, AnimationCurve_t2733_marshaled& marshaled);
void AnimationCurve_t2733_marshal_back(const AnimationCurve_t2733_marshaled& marshaled, AnimationCurve_t2733& unmarshaled);
void AnimationCurve_t2733_marshal_cleanup(AnimationCurve_t2733_marshaled& marshaled);
