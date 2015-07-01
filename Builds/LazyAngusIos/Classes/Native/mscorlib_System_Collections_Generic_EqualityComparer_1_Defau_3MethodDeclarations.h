#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3610;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m21960_gshared (DefaultComparer_t3610 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21960(__this, method) (( void (*) (DefaultComparer_t3610 *, const MethodInfo*))DefaultComparer__ctor_m21960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21961_gshared (DefaultComparer_t3610 * __this, RaycastResult_t666  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21961(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3610 *, RaycastResult_t666 , const MethodInfo*))DefaultComparer_GetHashCode_m21961_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21962_gshared (DefaultComparer_t3610 * __this, RaycastResult_t666  ___x, RaycastResult_t666  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21962(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3610 *, RaycastResult_t666 , RaycastResult_t666 , const MethodInfo*))DefaultComparer_Equals_m21962_gshared)(__this, ___x, ___y, method)
