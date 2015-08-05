#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t7937;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m55269_gshared (DefaultComparer_t7937 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55269(__this, method) (( void (*) (DefaultComparer_t7937 *, const MethodInfo*))DefaultComparer__ctor_m55269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55270_gshared (DefaultComparer_t7937 * __this, KeyValuePair_2_t6956  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55270(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7937 *, KeyValuePair_2_t6956 , const MethodInfo*))DefaultComparer_GetHashCode_m55270_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55271_gshared (DefaultComparer_t7937 * __this, KeyValuePair_2_t6956  ___x, KeyValuePair_2_t6956  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55271(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7937 *, KeyValuePair_2_t6956 , KeyValuePair_2_t6956 , const MethodInfo*))DefaultComparer_Equals_m55271_gshared)(__this, ___x, ___y, method)
