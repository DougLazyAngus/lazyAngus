#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t7935;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m55257_gshared (DefaultComparer_t7935 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55257(__this, method) (( void (*) (DefaultComparer_t7935 *, const MethodInfo*))DefaultComparer__ctor_m55257_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55258_gshared (DefaultComparer_t7935 * __this, KeyValuePair_2_t6954  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55258(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7935 *, KeyValuePair_2_t6954 , const MethodInfo*))DefaultComparer_GetHashCode_m55258_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55259_gshared (DefaultComparer_t7935 * __this, KeyValuePair_2_t6954  ___x, KeyValuePair_2_t6954  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55259(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7935 *, KeyValuePair_2_t6954 , KeyValuePair_2_t6954 , const MethodInfo*))DefaultComparer_Equals_m55259_gshared)(__this, ___x, ___y, method)
