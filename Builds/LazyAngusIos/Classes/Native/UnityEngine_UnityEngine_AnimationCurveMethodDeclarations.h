﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1075;
struct AnimationCurve_t1075_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1203;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5828 (AnimationCurve_t1075 * __this, KeyframeU5BU5D_t1203* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5829 (AnimationCurve_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5830 (AnimationCurve_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5831 (AnimationCurve_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5832 (AnimationCurve_t1075 * __this, KeyframeU5BU5D_t1203* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1075_marshal(const AnimationCurve_t1075& unmarshaled, AnimationCurve_t1075_marshaled& marshaled);
void AnimationCurve_t1075_marshal_back(const AnimationCurve_t1075_marshaled& marshaled, AnimationCurve_t1075& unmarshaled);
void AnimationCurve_t1075_marshal_cleanup(AnimationCurve_t1075_marshaled& marshaled);
