#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t7936;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m55264_gshared (DefaultComparer_t7936 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55264(__this, method) (( void (*) (DefaultComparer_t7936 *, const MethodInfo*))DefaultComparer__ctor_m55264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55265_gshared (DefaultComparer_t7936 * __this, KeyValuePair_2_t6955  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55265(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7936 *, KeyValuePair_2_t6955 , const MethodInfo*))DefaultComparer_GetHashCode_m55265_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55266_gshared (DefaultComparer_t7936 * __this, KeyValuePair_2_t6955  ___x, KeyValuePair_2_t6955  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55266(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7936 *, KeyValuePair_2_t6955 , KeyValuePair_2_t6955 , const MethodInfo*))DefaultComparer_Equals_m55266_gshared)(__this, ___x, ___y, method)
