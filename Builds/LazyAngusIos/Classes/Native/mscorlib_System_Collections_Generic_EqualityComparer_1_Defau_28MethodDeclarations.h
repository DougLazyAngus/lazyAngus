#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t9023;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m65822_gshared (DefaultComparer_t9023 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m65822(__this, method) (( void (*) (DefaultComparer_t9023 *, const MethodInfo*))DefaultComparer__ctor_m65822_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m65823_gshared (DefaultComparer_t9023 * __this, UILineInfo_t1104  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m65823(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9023 *, UILineInfo_t1104 , const MethodInfo*))DefaultComparer_GetHashCode_m65823_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m65824_gshared (DefaultComparer_t9023 * __this, UILineInfo_t1104  ___x, UILineInfo_t1104  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m65824(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9023 *, UILineInfo_t1104 , UILineInfo_t1104 , const MethodInfo*))DefaultComparer_Equals_m65824_gshared)(__this, ___x, ___y, method)
