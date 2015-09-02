#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t7469;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m49385_gshared (DefaultComparer_t7469 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49385(__this, method) (( void (*) (DefaultComparer_t7469 *, const MethodInfo*))DefaultComparer__ctor_m49385_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49386_gshared (DefaultComparer_t7469 * __this, KeyValuePair_2_t7239  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49386(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7469 *, KeyValuePair_2_t7239 , const MethodInfo*))DefaultComparer_GetHashCode_m49386_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49387_gshared (DefaultComparer_t7469 * __this, KeyValuePair_2_t7239  ___x, KeyValuePair_2_t7239  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49387(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7469 *, KeyValuePair_2_t7239 , KeyValuePair_2_t7239 , const MethodInfo*))DefaultComparer_Equals_m49387_gshared)(__this, ___x, ___y, method)
