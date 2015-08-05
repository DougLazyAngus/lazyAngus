#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t7363;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m48260_gshared (DefaultComparer_t7363 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48260(__this, method) (( void (*) (DefaultComparer_t7363 *, const MethodInfo*))DefaultComparer__ctor_m48260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48261_gshared (DefaultComparer_t7363 * __this, KeyValuePair_2_t7133  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48261(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7363 *, KeyValuePair_2_t7133 , const MethodInfo*))DefaultComparer_GetHashCode_m48261_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48262_gshared (DefaultComparer_t7363 * __this, KeyValuePair_2_t7133  ___x, KeyValuePair_2_t7133  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48262(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7363 *, KeyValuePair_2_t7133 , KeyValuePair_2_t7133 , const MethodInfo*))DefaultComparer_Equals_m48262_gshared)(__this, ___x, ___y, method)
