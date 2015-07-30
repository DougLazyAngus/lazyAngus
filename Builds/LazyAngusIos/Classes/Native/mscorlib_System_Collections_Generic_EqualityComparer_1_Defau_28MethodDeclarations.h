#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t8365;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m60322_gshared (DefaultComparer_t8365 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60322(__this, method) (( void (*) (DefaultComparer_t8365 *, const MethodInfo*))DefaultComparer__ctor_m60322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60323_gshared (DefaultComparer_t8365 * __this, UILineInfo_t1015  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60323(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8365 *, UILineInfo_t1015 , const MethodInfo*))DefaultComparer_GetHashCode_m60323_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60324_gshared (DefaultComparer_t8365 * __this, UILineInfo_t1015  ___x, UILineInfo_t1015  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60324(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8365 *, UILineInfo_t1015 , UILineInfo_t1015 , const MethodInfo*))DefaultComparer_Equals_m60324_gshared)(__this, ___x, ___y, method)
