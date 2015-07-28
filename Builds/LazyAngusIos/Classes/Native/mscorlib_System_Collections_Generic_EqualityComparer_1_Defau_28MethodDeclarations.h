#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t8357;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m60275_gshared (DefaultComparer_t8357 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60275(__this, method) (( void (*) (DefaultComparer_t8357 *, const MethodInfo*))DefaultComparer__ctor_m60275_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60276_gshared (DefaultComparer_t8357 * __this, UILineInfo_t1008  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60276(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8357 *, UILineInfo_t1008 , const MethodInfo*))DefaultComparer_GetHashCode_m60276_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60277_gshared (DefaultComparer_t8357 * __this, UILineInfo_t1008  ___x, UILineInfo_t1008  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60277(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8357 *, UILineInfo_t1008 , UILineInfo_t1008 , const MethodInfo*))DefaultComparer_Equals_m60277_gshared)(__this, ___x, ___y, method)
