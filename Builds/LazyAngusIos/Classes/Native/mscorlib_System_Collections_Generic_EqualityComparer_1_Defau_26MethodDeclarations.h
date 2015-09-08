#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct DefaultComparer_t8579;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void DefaultComparer__ctor_m60669_gshared (DefaultComparer_t8579 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m60669(__this, method) (( void (*) (DefaultComparer_t8579 *, const MethodInfo*))DefaultComparer__ctor_m60669_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m60670_gshared (DefaultComparer_t8579 * __this, KeyValuePair_2_t7598  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m60670(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8579 *, KeyValuePair_2_t7598 , const MethodInfo*))DefaultComparer_GetHashCode_m60670_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m60671_gshared (DefaultComparer_t8579 * __this, KeyValuePair_2_t7598  ___x, KeyValuePair_2_t7598  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m60671(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8579 *, KeyValuePair_2_t7598 , KeyValuePair_2_t7598 , const MethodInfo*))DefaultComparer_Equals_m60671_gshared)(__this, ___x, ___y, method)
