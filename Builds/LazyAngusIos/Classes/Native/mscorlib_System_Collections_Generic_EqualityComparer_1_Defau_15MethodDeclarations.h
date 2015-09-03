#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t7862;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void DefaultComparer__ctor_m51801_gshared (DefaultComparer_t7862 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m51801(__this, method) (( void (*) (DefaultComparer_t7862 *, const MethodInfo*))DefaultComparer__ctor_m51801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m51802_gshared (DefaultComparer_t7862 * __this, KeyValuePair_2_t6751  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m51802(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7862 *, KeyValuePair_2_t6751 , const MethodInfo*))DefaultComparer_GetHashCode_m51802_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m51803_gshared (DefaultComparer_t7862 * __this, KeyValuePair_2_t6751  ___x, KeyValuePair_2_t6751  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m51803(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7862 *, KeyValuePair_2_t6751 , KeyValuePair_2_t6751 , const MethodInfo*))DefaultComparer_Equals_m51803_gshared)(__this, ___x, ___y, method)
