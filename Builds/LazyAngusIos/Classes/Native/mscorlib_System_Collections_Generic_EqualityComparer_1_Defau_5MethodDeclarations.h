#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3859;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25315_gshared (DefaultComparer_t3859 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25315(__this, method) (( void (*) (DefaultComparer_t3859 *, const MethodInfo*))DefaultComparer__ctor_m25315_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25316_gshared (DefaultComparer_t3859 * __this, UILineInfo_t911  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25316(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3859 *, UILineInfo_t911 , const MethodInfo*))DefaultComparer_GetHashCode_m25316_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25317_gshared (DefaultComparer_t3859 * __this, UILineInfo_t911  ___x, UILineInfo_t911  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25317(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3859 *, UILineInfo_t911 , UILineInfo_t911 , const MethodInfo*))DefaultComparer_Equals_m25317_gshared)(__this, ___x, ___y, method)
