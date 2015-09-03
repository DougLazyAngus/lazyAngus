#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t8134;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m55201_gshared (DefaultComparer_t8134 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55201(__this, method) (( void (*) (DefaultComparer_t8134 *, const MethodInfo*))DefaultComparer__ctor_m55201_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55202_gshared (DefaultComparer_t8134 * __this, KeyValuePair_2_t6082  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55202(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8134 *, KeyValuePair_2_t6082 , const MethodInfo*))DefaultComparer_GetHashCode_m55202_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55203_gshared (DefaultComparer_t8134 * __this, KeyValuePair_2_t6082  ___x, KeyValuePair_2_t6082  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55203(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8134 *, KeyValuePair_2_t6082 , KeyValuePair_2_t6082 , const MethodInfo*))DefaultComparer_Equals_m55203_gshared)(__this, ___x, ___y, method)
