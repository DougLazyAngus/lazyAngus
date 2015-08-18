#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t5786;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m28010_gshared (DefaultComparer_t5786 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28010(__this, method) (( void (*) (DefaultComparer_t5786 *, const MethodInfo*))DefaultComparer__ctor_m28010_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28011_gshared (DefaultComparer_t5786 * __this, RaycastResult_t880  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28011(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5786 *, RaycastResult_t880 , const MethodInfo*))DefaultComparer_GetHashCode_m28011_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28012_gshared (DefaultComparer_t5786 * __this, RaycastResult_t880  ___x, RaycastResult_t880  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28012(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5786 *, RaycastResult_t880 , RaycastResult_t880 , const MethodInfo*))DefaultComparer_Equals_m28012_gshared)(__this, ___x, ___y, method)
