#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t5973;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m30891_gshared (DefaultComparer_t5973 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m30891(__this, method) (( void (*) (DefaultComparer_t5973 *, const MethodInfo*))DefaultComparer__ctor_m30891_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m30892_gshared (DefaultComparer_t5973 * __this, KeyValuePair_2_t70  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m30892(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5973 *, KeyValuePair_2_t70 , const MethodInfo*))DefaultComparer_GetHashCode_m30892_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m30893_gshared (DefaultComparer_t5973 * __this, KeyValuePair_2_t70  ___x, KeyValuePair_2_t70  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m30893(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5973 *, KeyValuePair_2_t70 , KeyValuePair_2_t70 , const MethodInfo*))DefaultComparer_Equals_m30893_gshared)(__this, ___x, ___y, method)
