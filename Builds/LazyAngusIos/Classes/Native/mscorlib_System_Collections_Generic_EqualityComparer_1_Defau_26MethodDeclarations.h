#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t8007;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m55938_gshared (DefaultComparer_t8007 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55938(__this, method) (( void (*) (DefaultComparer_t8007 *, const MethodInfo*))DefaultComparer__ctor_m55938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55939_gshared (DefaultComparer_t8007 * __this, KeyValuePair_2_t7026  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55939(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8007 *, KeyValuePair_2_t7026 , const MethodInfo*))DefaultComparer_GetHashCode_m55939_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55940_gshared (DefaultComparer_t8007 * __this, KeyValuePair_2_t7026  ___x, KeyValuePair_2_t7026  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55940(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8007 *, KeyValuePair_2_t7026 , KeyValuePair_2_t7026 , const MethodInfo*))DefaultComparer_Equals_m55940_gshared)(__this, ___x, ___y, method)
