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
extern "C" void DefaultComparer__ctor_m27310_gshared (DefaultComparer_t5710 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27310(__this, method) (( void (*) (DefaultComparer_t5710 *, const MethodInfo*))DefaultComparer__ctor_m27310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27311_gshared (DefaultComparer_t5710 * __this, RaycastResult_t820  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27311(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5710 *, RaycastResult_t820 , const MethodInfo*))DefaultComparer_GetHashCode_m27311_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27312_gshared (DefaultComparer_t5710 * __this, RaycastResult_t820  ___x, RaycastResult_t820  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27312(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5710 *, RaycastResult_t820 , RaycastResult_t820 , const MethodInfo*))DefaultComparer_Equals_m27312_gshared)(__this, ___x, ___y, method)
