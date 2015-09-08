#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t9011;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m65753_gshared (DefaultComparer_t9011 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m65753(__this, method) (( void (*) (DefaultComparer_t9011 *, const MethodInfo*))DefaultComparer__ctor_m65753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m65754_gshared (DefaultComparer_t9011 * __this, UILineInfo_t1094  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m65754(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9011 *, UILineInfo_t1094 , const MethodInfo*))DefaultComparer_GetHashCode_m65754_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m65755_gshared (DefaultComparer_t9011 * __this, UILineInfo_t1094  ___x, UILineInfo_t1094  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m65755(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9011 *, UILineInfo_t1094 , UILineInfo_t1094 , const MethodInfo*))DefaultComparer_Equals_m65755_gshared)(__this, ___x, ___y, method)
