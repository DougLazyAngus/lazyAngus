﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3842;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m25284_gshared (DefaultComparer_t3842 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25284(__this, method) (( void (*) (DefaultComparer_t3842 *, const MethodInfo*))DefaultComparer__ctor_m25284_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25285_gshared (DefaultComparer_t3842 * __this, UILineInfo_t887  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25285(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3842 *, UILineInfo_t887 , const MethodInfo*))DefaultComparer_GetHashCode_m25285_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25286_gshared (DefaultComparer_t3842 * __this, UILineInfo_t887  ___x, UILineInfo_t887  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25286(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3842 *, UILineInfo_t887 , UILineInfo_t887 , const MethodInfo*))DefaultComparer_Equals_m25286_gshared)(__this, ___x, ___y, method)