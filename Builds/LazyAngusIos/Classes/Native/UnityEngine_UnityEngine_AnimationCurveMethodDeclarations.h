#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1098;
struct AnimationCurve_t1098_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1228;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5970 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1228* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5971 (AnimationCurve_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5972 (AnimationCurve_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5973 (AnimationCurve_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5974 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1228* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1098_marshal(const AnimationCurve_t1098& unmarshaled, AnimationCurve_t1098_marshaled& marshaled);
void AnimationCurve_t1098_marshal_back(const AnimationCurve_t1098_marshaled& marshaled, AnimationCurve_t1098& unmarshaled);
void AnimationCurve_t1098_marshal_cleanup(AnimationCurve_t1098_marshaled& marshaled);
