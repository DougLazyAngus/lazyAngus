#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t6434;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m33976_gshared (DefaultComparer_t6434 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m33976(__this, method) (( void (*) (DefaultComparer_t6434 *, const MethodInfo*))DefaultComparer__ctor_m33976_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m33977_gshared (DefaultComparer_t6434 * __this, UIVertex_t976  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m33977(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6434 *, UIVertex_t976 , const MethodInfo*))DefaultComparer_GetHashCode_m33977_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m33978_gshared (DefaultComparer_t6434 * __this, UIVertex_t976  ___x, UIVertex_t976  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m33978(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6434 *, UIVertex_t976 , UIVertex_t976 , const MethodInfo*))DefaultComparer_Equals_m33978_gshared)(__this, ___x, ___y, method)
