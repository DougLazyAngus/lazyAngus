#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t6355;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m32683_gshared (DefaultComparer_t6355 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m32683(__this, method) (( void (*) (DefaultComparer_t6355 *, const MethodInfo*))DefaultComparer__ctor_m32683_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32684_gshared (DefaultComparer_t6355 * __this, RaycastResult_t894  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m32684(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6355 *, RaycastResult_t894 , const MethodInfo*))DefaultComparer_GetHashCode_m32684_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32685_gshared (DefaultComparer_t6355 * __this, RaycastResult_t894  ___x, RaycastResult_t894  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m32685(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6355 *, RaycastResult_t894 , RaycastResult_t894 , const MethodInfo*))DefaultComparer_Equals_m32685_gshared)(__this, ___x, ___y, method)
