#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3818;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25126_gshared (DefaultComparer_t3818 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25126(__this, method) (( void (*) (DefaultComparer_t3818 *, const MethodInfo*))DefaultComparer__ctor_m25126_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25127_gshared (DefaultComparer_t3818 * __this, UILineInfo_t865  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25127(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3818 *, UILineInfo_t865 , const MethodInfo*))DefaultComparer_GetHashCode_m25127_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25128_gshared (DefaultComparer_t3818 * __this, UILineInfo_t865  ___x, UILineInfo_t865  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25128(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3818 *, UILineInfo_t865 , UILineInfo_t865 , const MethodInfo*))DefaultComparer_Equals_m25128_gshared)(__this, ___x, ___y, method)
