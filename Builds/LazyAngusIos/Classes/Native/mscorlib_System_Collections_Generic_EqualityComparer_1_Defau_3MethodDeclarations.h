#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t6422;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m33907_gshared (DefaultComparer_t6422 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m33907(__this, method) (( void (*) (DefaultComparer_t6422 *, const MethodInfo*))DefaultComparer__ctor_m33907_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m33908_gshared (DefaultComparer_t6422 * __this, UIVertex_t966  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m33908(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6422 *, UIVertex_t966 , const MethodInfo*))DefaultComparer_GetHashCode_m33908_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m33909_gshared (DefaultComparer_t6422 * __this, UIVertex_t966  ___x, UIVertex_t966  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m33909(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6422 *, UIVertex_t966 , UIVertex_t966 , const MethodInfo*))DefaultComparer_Equals_m33909_gshared)(__this, ___x, ___y, method)
