#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1155;
struct AnimationCurve_t1155_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1284;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6585 (AnimationCurve_t1155 * __this, KeyframeU5BU5D_t1284* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6586 (AnimationCurve_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6587 (AnimationCurve_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6588 (AnimationCurve_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6589 (AnimationCurve_t1155 * __this, KeyframeU5BU5D_t1284* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1155_marshal(const AnimationCurve_t1155& unmarshaled, AnimationCurve_t1155_marshaled& marshaled);
void AnimationCurve_t1155_marshal_back(const AnimationCurve_t1155_marshaled& marshaled, AnimationCurve_t1155& unmarshaled);
void AnimationCurve_t1155_marshal_cleanup(AnimationCurve_t1155_marshaled& marshaled);
