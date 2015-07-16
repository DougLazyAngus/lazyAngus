#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3730;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m23364_gshared (DefaultComparer_t3730 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23364(__this, method) (( void (*) (DefaultComparer_t3730 *, const MethodInfo*))DefaultComparer__ctor_m23364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23365_gshared (DefaultComparer_t3730 * __this, UIVertex_t793  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23365(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3730 *, UIVertex_t793 , const MethodInfo*))DefaultComparer_GetHashCode_m23365_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23366_gshared (DefaultComparer_t3730 * __this, UIVertex_t793  ___x, UIVertex_t793  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23366(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3730 *, UIVertex_t793 , UIVertex_t793 , const MethodInfo*))DefaultComparer_Equals_m23366_gshared)(__this, ___x, ___y, method)
