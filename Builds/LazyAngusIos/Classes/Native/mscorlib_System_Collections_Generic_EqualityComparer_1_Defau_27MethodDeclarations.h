#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t9007;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m65613_gshared (DefaultComparer_t9007 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m65613(__this, method) (( void (*) (DefaultComparer_t9007 *, const MethodInfo*))DefaultComparer__ctor_m65613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m65614_gshared (DefaultComparer_t9007 * __this, UICharInfo_t1099  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m65614(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9007 *, UICharInfo_t1099 , const MethodInfo*))DefaultComparer_GetHashCode_m65614_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m65615_gshared (DefaultComparer_t9007 * __this, UICharInfo_t1099  ___x, UICharInfo_t1099  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m65615(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9007 *, UICharInfo_t1099 , UICharInfo_t1099 , const MethodInfo*))DefaultComparer_Equals_m65615_gshared)(__this, ___x, ___y, method)
