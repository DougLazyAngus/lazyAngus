#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t5709;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m27305_gshared (DefaultComparer_t5709 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27305(__this, method) (( void (*) (DefaultComparer_t5709 *, const MethodInfo*))DefaultComparer__ctor_m27305_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27306_gshared (DefaultComparer_t5709 * __this, RaycastResult_t819  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27306(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5709 *, RaycastResult_t819 , const MethodInfo*))DefaultComparer_GetHashCode_m27306_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27307_gshared (DefaultComparer_t5709 * __this, RaycastResult_t819  ___x, RaycastResult_t819  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27307(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5709 *, RaycastResult_t819 , RaycastResult_t819 , const MethodInfo*))DefaultComparer_Equals_m27307_gshared)(__this, ___x, ___y, method)
