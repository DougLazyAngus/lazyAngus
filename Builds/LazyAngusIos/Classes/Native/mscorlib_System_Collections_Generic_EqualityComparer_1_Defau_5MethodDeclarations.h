#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3937;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m26414_gshared (DefaultComparer_t3937 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26414(__this, method) (( void (*) (DefaultComparer_t3937 *, const MethodInfo*))DefaultComparer__ctor_m26414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26415_gshared (DefaultComparer_t3937 * __this, UILineInfo_t968  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26415(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3937 *, UILineInfo_t968 , const MethodInfo*))DefaultComparer_GetHashCode_m26415_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26416_gshared (DefaultComparer_t3937 * __this, UILineInfo_t968  ___x, UILineInfo_t968  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26416(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3937 *, UILineInfo_t968 , UILineInfo_t968 , const MethodInfo*))DefaultComparer_Equals_m26416_gshared)(__this, ___x, ___y, method)
