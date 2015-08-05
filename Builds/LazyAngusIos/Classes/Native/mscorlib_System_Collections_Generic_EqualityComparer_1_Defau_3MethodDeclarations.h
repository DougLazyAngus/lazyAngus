#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t5778;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m28532_gshared (DefaultComparer_t5778 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28532(__this, method) (( void (*) (DefaultComparer_t5778 *, const MethodInfo*))DefaultComparer__ctor_m28532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28533_gshared (DefaultComparer_t5778 * __this, UIVertex_t892  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28533(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5778 *, UIVertex_t892 , const MethodInfo*))DefaultComparer_GetHashCode_m28533_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28534_gshared (DefaultComparer_t5778 * __this, UIVertex_t892  ___x, UIVertex_t892  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28534(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5778 *, UIVertex_t892 , UIVertex_t892 , const MethodInfo*))DefaultComparer_Equals_m28534_gshared)(__this, ___x, ___y, method)
