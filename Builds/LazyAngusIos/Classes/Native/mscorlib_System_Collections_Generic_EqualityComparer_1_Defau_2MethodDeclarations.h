#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3729;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m23252_gshared (DefaultComparer_t3729 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23252(__this, method) (( void (*) (DefaultComparer_t3729 *, const MethodInfo*))DefaultComparer__ctor_m23252_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23253_gshared (DefaultComparer_t3729 * __this, RaycastResult_t770  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23253(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3729 *, RaycastResult_t770 , const MethodInfo*))DefaultComparer_GetHashCode_m23253_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23254_gshared (DefaultComparer_t3729 * __this, RaycastResult_t770  ___x, RaycastResult_t770  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23254(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3729 *, RaycastResult_t770 , RaycastResult_t770 , const MethodInfo*))DefaultComparer_Equals_m23254_gshared)(__this, ___x, ___y, method)
