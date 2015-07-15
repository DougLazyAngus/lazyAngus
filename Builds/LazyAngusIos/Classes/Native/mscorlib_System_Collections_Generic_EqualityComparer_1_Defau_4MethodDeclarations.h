#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t3852;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25196_gshared (DefaultComparer_t3852 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25196(__this, method) (( void (*) (DefaultComparer_t3852 *, const MethodInfo*))DefaultComparer__ctor_m25196_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25197_gshared (DefaultComparer_t3852 * __this, UICharInfo_t914  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25197(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3852 *, UICharInfo_t914 , const MethodInfo*))DefaultComparer_GetHashCode_m25197_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25198_gshared (DefaultComparer_t3852 * __this, UICharInfo_t914  ___x, UICharInfo_t914  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25198(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3852 *, UICharInfo_t914 , UICharInfo_t914 , const MethodInfo*))DefaultComparer_Equals_m25198_gshared)(__this, ___x, ___y, method)
