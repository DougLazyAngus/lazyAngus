#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t3927;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m26267_gshared (DefaultComparer_t3927 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26267(__this, method) (( void (*) (DefaultComparer_t3927 *, const MethodInfo*))DefaultComparer__ctor_m26267_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26268_gshared (DefaultComparer_t3927 * __this, UICharInfo_t969  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26268(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3927 *, UICharInfo_t969 , const MethodInfo*))DefaultComparer_GetHashCode_m26268_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26269_gshared (DefaultComparer_t3927 * __this, UICharInfo_t969  ___x, UICharInfo_t969  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26269(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3927 *, UICharInfo_t969 , UICharInfo_t969 , const MethodInfo*))DefaultComparer_Equals_m26269_gshared)(__this, ___x, ___y, method)
