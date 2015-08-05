#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t5710;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m27313_gshared (DefaultComparer_t5710 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27313(__this, method) (( void (*) (DefaultComparer_t5710 *, const MethodInfo*))DefaultComparer__ctor_m27313_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27314_gshared (DefaultComparer_t5710 * __this, RaycastResult_t821  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27314(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5710 *, RaycastResult_t821 , const MethodInfo*))DefaultComparer_GetHashCode_m27314_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27315_gshared (DefaultComparer_t5710 * __this, RaycastResult_t821  ___x, RaycastResult_t821  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27315(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5710 *, RaycastResult_t821 , RaycastResult_t821 , const MethodInfo*))DefaultComparer_Equals_m27315_gshared)(__this, ___x, ___y, method)
