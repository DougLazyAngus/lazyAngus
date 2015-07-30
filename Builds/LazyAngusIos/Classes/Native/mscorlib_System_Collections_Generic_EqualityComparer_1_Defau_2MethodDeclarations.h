#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t5706;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m27282_gshared (DefaultComparer_t5706 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27282(__this, method) (( void (*) (DefaultComparer_t5706 *, const MethodInfo*))DefaultComparer__ctor_m27282_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27283_gshared (DefaultComparer_t5706 * __this, RaycastResult_t817  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27283(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5706 *, RaycastResult_t817 , const MethodInfo*))DefaultComparer_GetHashCode_m27283_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27284_gshared (DefaultComparer_t5706 * __this, RaycastResult_t817  ___x, RaycastResult_t817  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27284(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5706 *, RaycastResult_t817 , RaycastResult_t817 , const MethodInfo*))DefaultComparer_Equals_m27284_gshared)(__this, ___x, ___y, method)
