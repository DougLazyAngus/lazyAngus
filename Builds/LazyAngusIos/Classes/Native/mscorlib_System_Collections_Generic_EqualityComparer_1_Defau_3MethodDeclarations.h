#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3634;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m22118_gshared (DefaultComparer_t3634 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22118(__this, method) (( void (*) (DefaultComparer_t3634 *, const MethodInfo*))DefaultComparer__ctor_m22118_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22119_gshared (DefaultComparer_t3634 * __this, RaycastResult_t689  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22119(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3634 *, RaycastResult_t689 , const MethodInfo*))DefaultComparer_GetHashCode_m22119_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22120_gshared (DefaultComparer_t3634 * __this, RaycastResult_t689  ___x, RaycastResult_t689  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22120(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3634 *, RaycastResult_t689 , RaycastResult_t689 , const MethodInfo*))DefaultComparer_Equals_m22120_gshared)(__this, ___x, ___y, method)
