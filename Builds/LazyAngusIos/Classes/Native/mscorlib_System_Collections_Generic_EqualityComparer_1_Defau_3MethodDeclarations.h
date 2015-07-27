#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3797;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m24401_gshared (DefaultComparer_t3797 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m24401(__this, method) (( void (*) (DefaultComparer_t3797 *, const MethodInfo*))DefaultComparer__ctor_m24401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m24402_gshared (DefaultComparer_t3797 * __this, UIVertex_t841  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m24402(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3797 *, UIVertex_t841 , const MethodInfo*))DefaultComparer_GetHashCode_m24402_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m24403_gshared (DefaultComparer_t3797 * __this, UIVertex_t841  ___x, UIVertex_t841  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m24403(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3797 *, UIVertex_t841 , UIVertex_t841 , const MethodInfo*))DefaultComparer_Equals_m24403_gshared)(__this, ___x, ___y, method)
