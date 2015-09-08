#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>
struct DefaultComparer_t7006;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::.ctor()
extern "C" void DefaultComparer__ctor_m41303_gshared (DefaultComparer_t7006 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41303(__this, method) (( void (*) (DefaultComparer_t7006 *, const MethodInfo*))DefaultComparer__ctor_m41303_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m41304_gshared (DefaultComparer_t7006 * __this, int8_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m41304(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7006 *, int8_t, const MethodInfo*))DefaultComparer_GetHashCode_m41304_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m41305_gshared (DefaultComparer_t7006 * __this, int8_t ___x, int8_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m41305(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7006 *, int8_t, int8_t, const MethodInfo*))DefaultComparer_Equals_m41305_gshared)(__this, ___x, ___y, method)
