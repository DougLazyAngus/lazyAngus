﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t2723;
struct AnimationCurve_t2723_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2850;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9215 (AnimationCurve_t2723 * __this, KeyframeU5BU5D_t2850* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9216 (AnimationCurve_t2723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9217 (AnimationCurve_t2723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9218 (AnimationCurve_t2723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9219 (AnimationCurve_t2723 * __this, KeyframeU5BU5D_t2850* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t2723_marshal(const AnimationCurve_t2723& unmarshaled, AnimationCurve_t2723_marshaled& marshaled);
void AnimationCurve_t2723_marshal_back(const AnimationCurve_t2723_marshaled& marshaled, AnimationCurve_t2723& unmarshaled);
void AnimationCurve_t2723_marshal_cleanup(AnimationCurve_t2723_marshaled& marshaled);
