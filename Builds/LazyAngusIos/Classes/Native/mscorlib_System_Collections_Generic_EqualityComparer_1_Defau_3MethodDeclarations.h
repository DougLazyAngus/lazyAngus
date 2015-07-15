#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3721;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m23323_gshared (DefaultComparer_t3721 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23323(__this, method) (( void (*) (DefaultComparer_t3721 *, const MethodInfo*))DefaultComparer__ctor_m23323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23324_gshared (DefaultComparer_t3721 * __this, UIVertex_t785  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23324(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3721 *, UIVertex_t785 , const MethodInfo*))DefaultComparer_GetHashCode_m23324_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23325_gshared (DefaultComparer_t3721 * __this, UIVertex_t785  ___x, UIVertex_t785  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23325(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3721 *, UIVertex_t785 , UIVertex_t785 , const MethodInfo*))DefaultComparer_Equals_m23325_gshared)(__this, ___x, ___y, method)
