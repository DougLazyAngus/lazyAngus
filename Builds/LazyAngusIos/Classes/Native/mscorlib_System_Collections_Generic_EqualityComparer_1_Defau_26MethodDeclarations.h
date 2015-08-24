#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t8014;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m56062_gshared (DefaultComparer_t8014 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m56062(__this, method) (( void (*) (DefaultComparer_t8014 *, const MethodInfo*))DefaultComparer__ctor_m56062_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m56063_gshared (DefaultComparer_t8014 * __this, KeyValuePair_2_t7033  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m56063(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8014 *, KeyValuePair_2_t7033 , const MethodInfo*))DefaultComparer_GetHashCode_m56063_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m56064_gshared (DefaultComparer_t8014 * __this, KeyValuePair_2_t7033  ___x, KeyValuePair_2_t7033  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m56064(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8014 *, KeyValuePair_2_t7033 , KeyValuePair_2_t7033 , const MethodInfo*))DefaultComparer_Equals_m56064_gshared)(__this, ___x, ___y, method)
