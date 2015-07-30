#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t7359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m48232_gshared (DefaultComparer_t7359 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48232(__this, method) (( void (*) (DefaultComparer_t7359 *, const MethodInfo*))DefaultComparer__ctor_m48232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48233_gshared (DefaultComparer_t7359 * __this, KeyValuePair_2_t7129  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48233(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7359 *, KeyValuePair_2_t7129 , const MethodInfo*))DefaultComparer_GetHashCode_m48233_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48234_gshared (DefaultComparer_t7359 * __this, KeyValuePair_2_t7129  ___x, KeyValuePair_2_t7129  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48234(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7359 *, KeyValuePair_2_t7129 , KeyValuePair_2_t7129 , const MethodInfo*))DefaultComparer_Equals_m48234_gshared)(__this, ___x, ___y, method)
