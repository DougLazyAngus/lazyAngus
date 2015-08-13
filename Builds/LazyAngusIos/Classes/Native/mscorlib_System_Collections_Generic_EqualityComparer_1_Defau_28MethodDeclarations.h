#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t8439;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m61022_gshared (DefaultComparer_t8439 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m61022(__this, method) (( void (*) (DefaultComparer_t8439 *, const MethodInfo*))DefaultComparer__ctor_m61022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m61023_gshared (DefaultComparer_t8439 * __this, UILineInfo_t1076  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m61023(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8439 *, UILineInfo_t1076 , const MethodInfo*))DefaultComparer_GetHashCode_m61023_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m61024_gshared (DefaultComparer_t8439 * __this, UILineInfo_t1076  ___x, UILineInfo_t1076  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m61024(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8439 *, UILineInfo_t1076 , UILineInfo_t1076 , const MethodInfo*))DefaultComparer_Equals_m61024_gshared)(__this, ___x, ___y, method)
