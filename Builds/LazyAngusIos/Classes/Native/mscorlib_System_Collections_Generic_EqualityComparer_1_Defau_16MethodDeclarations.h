#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct DefaultComparer_t7368;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void DefaultComparer__ctor_m48152_gshared (DefaultComparer_t7368 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48152(__this, method) (( void (*) (DefaultComparer_t7368 *, const MethodInfo*))DefaultComparer__ctor_m48152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48153_gshared (DefaultComparer_t7368 * __this, KeyValuePair_2_t7192  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48153(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7368 *, KeyValuePair_2_t7192 , const MethodInfo*))DefaultComparer_GetHashCode_m48153_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48154_gshared (DefaultComparer_t7368 * __this, KeyValuePair_2_t7192  ___x, KeyValuePair_2_t7192  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48154(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7368 *, KeyValuePair_2_t7192 , KeyValuePair_2_t7192 , const MethodInfo*))DefaultComparer_Equals_m48154_gshared)(__this, ___x, ___y, method)
