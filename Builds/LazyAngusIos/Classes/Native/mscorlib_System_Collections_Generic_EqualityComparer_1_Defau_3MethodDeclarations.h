#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t5776;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m28517_gshared (DefaultComparer_t5776 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28517(__this, method) (( void (*) (DefaultComparer_t5776 *, const MethodInfo*))DefaultComparer__ctor_m28517_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28518_gshared (DefaultComparer_t5776 * __this, UIVertex_t890  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28518(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5776 *, UIVertex_t890 , const MethodInfo*))DefaultComparer_GetHashCode_m28518_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28519_gshared (DefaultComparer_t5776 * __this, UIVertex_t890  ___x, UIVertex_t890  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28519(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5776 *, UIVertex_t890 , UIVertex_t890 , const MethodInfo*))DefaultComparer_Equals_m28519_gshared)(__this, ___x, ___y, method)
