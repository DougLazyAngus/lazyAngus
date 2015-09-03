#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t6421;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m33894_gshared (DefaultComparer_t6421 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m33894(__this, method) (( void (*) (DefaultComparer_t6421 *, const MethodInfo*))DefaultComparer__ctor_m33894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m33895_gshared (DefaultComparer_t6421 * __this, UIVertex_t965  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m33895(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6421 *, UIVertex_t965 , const MethodInfo*))DefaultComparer_GetHashCode_m33895_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m33896_gshared (DefaultComparer_t6421 * __this, UIVertex_t965  ___x, UIVertex_t965  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m33896(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6421 *, UIVertex_t965 , UIVertex_t965 , const MethodInfo*))DefaultComparer_Equals_m33896_gshared)(__this, ___x, ___y, method)
