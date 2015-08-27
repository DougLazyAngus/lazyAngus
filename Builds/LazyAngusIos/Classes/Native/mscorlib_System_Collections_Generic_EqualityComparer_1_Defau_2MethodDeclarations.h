﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t5793;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m28134_gshared (DefaultComparer_t5793 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28134(__this, method) (( void (*) (DefaultComparer_t5793 *, const MethodInfo*))DefaultComparer__ctor_m28134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28135_gshared (DefaultComparer_t5793 * __this, RaycastResult_t881  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28135(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5793 *, RaycastResult_t881 , const MethodInfo*))DefaultComparer_GetHashCode_m28135_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28136_gshared (DefaultComparer_t5793 * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28136(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5793 *, RaycastResult_t881 , RaycastResult_t881 , const MethodInfo*))DefaultComparer_Equals_m28136_gshared)(__this, ___x, ___y, method)
