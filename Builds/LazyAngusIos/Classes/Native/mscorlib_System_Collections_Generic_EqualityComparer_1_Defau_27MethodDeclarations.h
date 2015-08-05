#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t8360;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m60198_gshared (DefaultComparer_t8360 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60198(__this, method) (( void (*) (DefaultComparer_t8360 *, const MethodInfo*))DefaultComparer__ctor_m60198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60199_gshared (DefaultComparer_t8360 * __this, UICharInfo_t1021  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60199(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8360 *, UICharInfo_t1021 , const MethodInfo*))DefaultComparer_GetHashCode_m60199_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60200_gshared (DefaultComparer_t8360 * __this, UICharInfo_t1021  ___x, UICharInfo_t1021  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60200(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8360 *, UICharInfo_t1021 , UICharInfo_t1021 , const MethodInfo*))DefaultComparer_Equals_m60200_gshared)(__this, ___x, ___y, method)
