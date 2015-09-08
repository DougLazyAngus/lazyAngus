#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t8005;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m53660_gshared (DefaultComparer_t8005 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53660(__this, method) (( void (*) (DefaultComparer_t8005 *, const MethodInfo*))DefaultComparer__ctor_m53660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53661_gshared (DefaultComparer_t8005 * __this, KeyValuePair_2_t7775  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53661(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8005 *, KeyValuePair_2_t7775 , const MethodInfo*))DefaultComparer_GetHashCode_m53661_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53662_gshared (DefaultComparer_t8005 * __this, KeyValuePair_2_t7775  ___x, KeyValuePair_2_t7775  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53662(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8005 *, KeyValuePair_2_t7775 , KeyValuePair_2_t7775 , const MethodInfo*))DefaultComparer_Equals_m53662_gshared)(__this, ___x, ___y, method)
