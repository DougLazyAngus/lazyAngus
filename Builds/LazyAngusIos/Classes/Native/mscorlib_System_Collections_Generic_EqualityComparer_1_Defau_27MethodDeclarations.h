#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t9001;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m65588_gshared (DefaultComparer_t9001 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m65588(__this, method) (( void (*) (DefaultComparer_t9001 *, const MethodInfo*))DefaultComparer__ctor_m65588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m65589_gshared (DefaultComparer_t9001 * __this, UICharInfo_t1095  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m65589(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9001 *, UICharInfo_t1095 , const MethodInfo*))DefaultComparer_GetHashCode_m65589_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m65590_gshared (DefaultComparer_t9001 * __this, UICharInfo_t1095  ___x, UICharInfo_t1095  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m65590(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9001 *, UICharInfo_t1095 , UICharInfo_t1095 , const MethodInfo*))DefaultComparer_Equals_m65590_gshared)(__this, ___x, ___y, method)
