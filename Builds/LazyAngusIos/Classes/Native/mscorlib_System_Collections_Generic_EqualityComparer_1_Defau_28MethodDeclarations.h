#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t8368;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m60345_gshared (DefaultComparer_t8368 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60345(__this, method) (( void (*) (DefaultComparer_t8368 *, const MethodInfo*))DefaultComparer__ctor_m60345_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60346_gshared (DefaultComparer_t8368 * __this, UILineInfo_t1018  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60346(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8368 *, UILineInfo_t1018 , const MethodInfo*))DefaultComparer_GetHashCode_m60346_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60347_gshared (DefaultComparer_t8368 * __this, UILineInfo_t1018  ___x, UILineInfo_t1018  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60347(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8368 *, UILineInfo_t1018 , UILineInfo_t1018 , const MethodInfo*))DefaultComparer_Equals_m60347_gshared)(__this, ___x, ___y, method)
