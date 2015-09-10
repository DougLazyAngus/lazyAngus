#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t8017;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m53729_gshared (DefaultComparer_t8017 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53729(__this, method) (( void (*) (DefaultComparer_t8017 *, const MethodInfo*))DefaultComparer__ctor_m53729_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53730_gshared (DefaultComparer_t8017 * __this, KeyValuePair_2_t7787  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53730(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8017 *, KeyValuePair_2_t7787 , const MethodInfo*))DefaultComparer_GetHashCode_m53730_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53731_gshared (DefaultComparer_t8017 * __this, KeyValuePair_2_t7787  ___x, KeyValuePair_2_t7787  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53731(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8017 *, KeyValuePair_2_t7787 , KeyValuePair_2_t7787 , const MethodInfo*))DefaultComparer_Equals_m53731_gshared)(__this, ___x, ___y, method)
