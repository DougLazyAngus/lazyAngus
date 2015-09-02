#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t5888;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m29674_gshared (DefaultComparer_t5888 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29674(__this, method) (( void (*) (DefaultComparer_t5888 *, const MethodInfo*))DefaultComparer__ctor_m29674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29675_gshared (DefaultComparer_t5888 * __this, UIVertex_t965  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29675(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5888 *, UIVertex_t965 , const MethodInfo*))DefaultComparer_GetHashCode_m29675_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29676_gshared (DefaultComparer_t5888 * __this, UIVertex_t965  ___x, UIVertex_t965  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29676(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5888 *, UIVertex_t965 , UIVertex_t965 , const MethodInfo*))DefaultComparer_Equals_m29676_gshared)(__this, ___x, ___y, method)
