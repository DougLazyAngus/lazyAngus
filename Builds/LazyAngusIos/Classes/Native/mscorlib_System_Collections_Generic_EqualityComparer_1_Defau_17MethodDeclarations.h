#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t7440;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void DefaultComparer__ctor_m49053_gshared (DefaultComparer_t7440 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49053(__this, method) (( void (*) (DefaultComparer_t7440 *, const MethodInfo*))DefaultComparer__ctor_m49053_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49054_gshared (DefaultComparer_t7440 * __this, KeyValuePair_2_t7210  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49054(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7440 *, KeyValuePair_2_t7210 , const MethodInfo*))DefaultComparer_GetHashCode_m49054_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49055_gshared (DefaultComparer_t7440 * __this, KeyValuePair_2_t7210  ___x, KeyValuePair_2_t7210  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49055(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7440 *, KeyValuePair_2_t7210 , KeyValuePair_2_t7210 , const MethodInfo*))DefaultComparer_Equals_m49055_gshared)(__this, ___x, ___y, method)
