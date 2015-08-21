#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t8434;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m60959_gshared (DefaultComparer_t8434 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60959(__this, method) (( void (*) (DefaultComparer_t8434 *, const MethodInfo*))DefaultComparer__ctor_m60959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60960_gshared (DefaultComparer_t8434 * __this, UICharInfo_t1076  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60960(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8434 *, UICharInfo_t1076 , const MethodInfo*))DefaultComparer_GetHashCode_m60960_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60961_gshared (DefaultComparer_t8434 * __this, UICharInfo_t1076  ___x, UICharInfo_t1076  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60961(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8434 *, UICharInfo_t1076 , UICharInfo_t1076 , const MethodInfo*))DefaultComparer_Equals_m60961_gshared)(__this, ___x, ___y, method)
