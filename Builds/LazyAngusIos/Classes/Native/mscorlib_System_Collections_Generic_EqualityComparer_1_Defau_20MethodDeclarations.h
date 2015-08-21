#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct DefaultComparer_t7632;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void DefaultComparer__ctor_m51351_gshared (DefaultComparer_t7632 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m51351(__this, method) (( void (*) (DefaultComparer_t7632 *, const MethodInfo*))DefaultComparer__ctor_m51351_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m51352_gshared (DefaultComparer_t7632 * __this, KeyValuePair_2_t7236  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m51352(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7632 *, KeyValuePair_2_t7236 , const MethodInfo*))DefaultComparer_GetHashCode_m51352_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m51353_gshared (DefaultComparer_t7632 * __this, KeyValuePair_2_t7236  ___x, KeyValuePair_2_t7236  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m51353(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7632 *, KeyValuePair_2_t7236 , KeyValuePair_2_t7236 , const MethodInfo*))DefaultComparer_Equals_m51353_gshared)(__this, ___x, ___y, method)
