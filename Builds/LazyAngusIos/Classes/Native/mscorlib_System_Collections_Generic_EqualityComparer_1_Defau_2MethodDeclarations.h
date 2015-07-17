#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3727;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m23237_gshared (DefaultComparer_t3727 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23237(__this, method) (( void (*) (DefaultComparer_t3727 *, const MethodInfo*))DefaultComparer__ctor_m23237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23238_gshared (DefaultComparer_t3727 * __this, RaycastResult_t768  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23238(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3727 *, RaycastResult_t768 , const MethodInfo*))DefaultComparer_GetHashCode_m23238_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23239_gshared (DefaultComparer_t3727 * __this, RaycastResult_t768  ___x, RaycastResult_t768  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23239(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3727 *, RaycastResult_t768 , RaycastResult_t768 , const MethodInfo*))DefaultComparer_Equals_m23239_gshared)(__this, ___x, ___y, method)
