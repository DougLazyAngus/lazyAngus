#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4104;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m28100_gshared (DefaultComparer_t4104 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28100(__this, method) (( void (*) (DefaultComparer_t4104 *, const MethodInfo*))DefaultComparer__ctor_m28100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28101_gshared (DefaultComparer_t4104 * __this, TimeSpan_t266  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28101(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4104 *, TimeSpan_t266 , const MethodInfo*))DefaultComparer_GetHashCode_m28101_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28102_gshared (DefaultComparer_t4104 * __this, TimeSpan_t266  ___x, TimeSpan_t266  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28102(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4104 *, TimeSpan_t266 , TimeSpan_t266 , const MethodInfo*))DefaultComparer_Equals_m28102_gshared)(__this, ___x, ___y, method)
