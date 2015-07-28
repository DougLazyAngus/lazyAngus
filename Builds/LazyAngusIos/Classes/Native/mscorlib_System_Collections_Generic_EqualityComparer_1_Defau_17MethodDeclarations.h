#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t7351;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m48185_gshared (DefaultComparer_t7351 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48185(__this, method) (( void (*) (DefaultComparer_t7351 *, const MethodInfo*))DefaultComparer__ctor_m48185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48186_gshared (DefaultComparer_t7351 * __this, KeyValuePair_2_t7121  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48186(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7351 *, KeyValuePair_2_t7121 , const MethodInfo*))DefaultComparer_GetHashCode_m48186_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48187_gshared (DefaultComparer_t7351 * __this, KeyValuePair_2_t7121  ___x, KeyValuePair_2_t7121  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48187(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7351 *, KeyValuePair_2_t7121 , KeyValuePair_2_t7121 , const MethodInfo*))DefaultComparer_Equals_m48187_gshared)(__this, ___x, ___y, method)
