#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
struct DefaultComparer_t6209;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m33521_gshared (DefaultComparer_t6209 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m33521(__this, method) (( void (*) (DefaultComparer_t6209 *, const MethodInfo*))DefaultComparer__ctor_m33521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m33522_gshared (DefaultComparer_t6209 * __this, uint8_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m33522(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6209 *, uint8_t, const MethodInfo*))DefaultComparer_GetHashCode_m33522_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m33523_gshared (DefaultComparer_t6209 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m33523(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6209 *, uint8_t, uint8_t, const MethodInfo*))DefaultComparer_Equals_m33523_gshared)(__this, ___x, ___y, method)
