#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t5856;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m29309_gshared (DefaultComparer_t5856 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29309(__this, method) (( void (*) (DefaultComparer_t5856 *, const MethodInfo*))DefaultComparer__ctor_m29309_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29310_gshared (DefaultComparer_t5856 * __this, UIVertex_t947  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29310(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5856 *, UIVertex_t947 , const MethodInfo*))DefaultComparer_GetHashCode_m29310_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29311_gshared (DefaultComparer_t5856 * __this, UIVertex_t947  ___x, UIVertex_t947  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29311(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5856 *, UIVertex_t947 , UIVertex_t947 , const MethodInfo*))DefaultComparer_Equals_m29311_gshared)(__this, ___x, ___y, method)
