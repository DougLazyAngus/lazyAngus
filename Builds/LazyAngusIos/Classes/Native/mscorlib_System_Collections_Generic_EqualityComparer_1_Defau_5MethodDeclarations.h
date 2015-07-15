#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3861;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25340_gshared (DefaultComparer_t3861 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25340(__this, method) (( void (*) (DefaultComparer_t3861 *, const MethodInfo*))DefaultComparer__ctor_m25340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25341_gshared (DefaultComparer_t3861 * __this, UILineInfo_t912  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25341(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3861 *, UILineInfo_t912 , const MethodInfo*))DefaultComparer_GetHashCode_m25341_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25342_gshared (DefaultComparer_t3861 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25342(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3861 *, UILineInfo_t912 , UILineInfo_t912 , const MethodInfo*))DefaultComparer_Equals_m25342_gshared)(__this, ___x, ___y, method)
