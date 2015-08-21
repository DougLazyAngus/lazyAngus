#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t8443;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m61111_gshared (DefaultComparer_t8443 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m61111(__this, method) (( void (*) (DefaultComparer_t8443 *, const MethodInfo*))DefaultComparer__ctor_m61111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m61112_gshared (DefaultComparer_t8443 * __this, UILineInfo_t1074  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m61112(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8443 *, UILineInfo_t1074 , const MethodInfo*))DefaultComparer_GetHashCode_m61112_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m61113_gshared (DefaultComparer_t8443 * __this, UILineInfo_t1074  ___x, UILineInfo_t1074  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m61113(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8443 *, UILineInfo_t1074 , UILineInfo_t1074 , const MethodInfo*))DefaultComparer_Equals_m61113_gshared)(__this, ___x, ___y, method)
