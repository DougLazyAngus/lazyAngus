#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t9002;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m65601_gshared (DefaultComparer_t9002 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m65601(__this, method) (( void (*) (DefaultComparer_t9002 *, const MethodInfo*))DefaultComparer__ctor_m65601_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m65602_gshared (DefaultComparer_t9002 * __this, UICharInfo_t1096  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m65602(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9002 *, UICharInfo_t1096 , const MethodInfo*))DefaultComparer_GetHashCode_m65602_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m65603_gshared (DefaultComparer_t9002 * __this, UICharInfo_t1096  ___x, UICharInfo_t1096  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m65603(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9002 *, UICharInfo_t1096 , UICharInfo_t1096 , const MethodInfo*))DefaultComparer_Equals_m65603_gshared)(__this, ___x, ___y, method)
