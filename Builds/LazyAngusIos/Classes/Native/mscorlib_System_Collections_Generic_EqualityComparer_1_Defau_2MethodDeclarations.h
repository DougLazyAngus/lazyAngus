#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t6356;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m32696_gshared (DefaultComparer_t6356 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m32696(__this, method) (( void (*) (DefaultComparer_t6356 *, const MethodInfo*))DefaultComparer__ctor_m32696_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32697_gshared (DefaultComparer_t6356 * __this, RaycastResult_t895  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m32697(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6356 *, RaycastResult_t895 , const MethodInfo*))DefaultComparer_GetHashCode_m32697_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32698_gshared (DefaultComparer_t6356 * __this, RaycastResult_t895  ___x, RaycastResult_t895  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m32698(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6356 *, RaycastResult_t895 , RaycastResult_t895 , const MethodInfo*))DefaultComparer_Equals_m32698_gshared)(__this, ___x, ___y, method)
