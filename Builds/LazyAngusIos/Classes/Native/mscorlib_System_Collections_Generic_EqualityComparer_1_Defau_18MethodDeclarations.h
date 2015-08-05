#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct DefaultComparer_t7428;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void DefaultComparer__ctor_m49040_gshared (DefaultComparer_t7428 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49040(__this, method) (( void (*) (DefaultComparer_t7428 *, const MethodInfo*))DefaultComparer__ctor_m49040_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49041_gshared (DefaultComparer_t7428 * __this, KeyValuePair_2_t7144  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49041(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7428 *, KeyValuePair_2_t7144 , const MethodInfo*))DefaultComparer_GetHashCode_m49041_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49042_gshared (DefaultComparer_t7428 * __this, KeyValuePair_2_t7144  ___x, KeyValuePair_2_t7144  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49042(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7428 *, KeyValuePair_2_t7144 , KeyValuePair_2_t7144 , const MethodInfo*))DefaultComparer_Equals_m49042_gshared)(__this, ___x, ___y, method)
