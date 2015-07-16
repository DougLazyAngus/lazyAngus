#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t3861;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25237_gshared (DefaultComparer_t3861 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25237(__this, method) (( void (*) (DefaultComparer_t3861 *, const MethodInfo*))DefaultComparer__ctor_m25237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25238_gshared (DefaultComparer_t3861 * __this, UICharInfo_t922  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25238(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3861 *, UICharInfo_t922 , const MethodInfo*))DefaultComparer_GetHashCode_m25238_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25239_gshared (DefaultComparer_t3861 * __this, UICharInfo_t922  ___x, UICharInfo_t922  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25239(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3861 *, UICharInfo_t922 , UICharInfo_t922 , const MethodInfo*))DefaultComparer_Equals_m25239_gshared)(__this, ___x, ___y, method)
