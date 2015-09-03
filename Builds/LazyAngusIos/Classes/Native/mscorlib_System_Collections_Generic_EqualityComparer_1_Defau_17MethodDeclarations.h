#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t8004;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m53647_gshared (DefaultComparer_t8004 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53647(__this, method) (( void (*) (DefaultComparer_t8004 *, const MethodInfo*))DefaultComparer__ctor_m53647_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53648_gshared (DefaultComparer_t8004 * __this, KeyValuePair_2_t7774  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53648(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8004 *, KeyValuePair_2_t7774 , const MethodInfo*))DefaultComparer_GetHashCode_m53648_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53649_gshared (DefaultComparer_t8004 * __this, KeyValuePair_2_t7774  ___x, KeyValuePair_2_t7774  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53649(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8004 *, KeyValuePair_2_t7774 , KeyValuePair_2_t7774 , const MethodInfo*))DefaultComparer_Equals_m53649_gshared)(__this, ___x, ___y, method)
