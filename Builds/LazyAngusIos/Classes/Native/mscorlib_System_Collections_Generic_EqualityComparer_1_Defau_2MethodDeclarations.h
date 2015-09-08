#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t6361;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m32708_gshared (DefaultComparer_t6361 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m32708(__this, method) (( void (*) (DefaultComparer_t6361 *, const MethodInfo*))DefaultComparer__ctor_m32708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32709_gshared (DefaultComparer_t6361 * __this, RaycastResult_t898  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m32709(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6361 *, RaycastResult_t898 , const MethodInfo*))DefaultComparer_GetHashCode_m32709_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32710_gshared (DefaultComparer_t6361 * __this, RaycastResult_t898  ___x, RaycastResult_t898  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m32710(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6361 *, RaycastResult_t898 , RaycastResult_t898 , const MethodInfo*))DefaultComparer_Equals_m32710_gshared)(__this, ___x, ___y, method)
