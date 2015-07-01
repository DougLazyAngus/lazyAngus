#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1053;
struct AnimationCurve_t1053_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1181;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5681 (AnimationCurve_t1053 * __this, KeyframeU5BU5D_t1181* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5682 (AnimationCurve_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5683 (AnimationCurve_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5684 (AnimationCurve_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5685 (AnimationCurve_t1053 * __this, KeyframeU5BU5D_t1181* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1053_marshal(const AnimationCurve_t1053& unmarshaled, AnimationCurve_t1053_marshaled& marshaled);
void AnimationCurve_t1053_marshal_back(const AnimationCurve_t1053_marshaled& marshaled, AnimationCurve_t1053& unmarshaled);
void AnimationCurve_t1053_marshal_cleanup(AnimationCurve_t1053_marshaled& marshaled);
