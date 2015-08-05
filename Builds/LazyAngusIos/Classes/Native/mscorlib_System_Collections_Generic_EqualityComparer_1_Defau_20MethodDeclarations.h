#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct DefaultComparer_t7558;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void DefaultComparer__ctor_m50591_gshared (DefaultComparer_t7558 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m50591(__this, method) (( void (*) (DefaultComparer_t7558 *, const MethodInfo*))DefaultComparer__ctor_m50591_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m50592_gshared (DefaultComparer_t7558 * __this, KeyValuePair_2_t7162  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m50592(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7558 *, KeyValuePair_2_t7162 , const MethodInfo*))DefaultComparer_GetHashCode_m50592_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m50593_gshared (DefaultComparer_t7558 * __this, KeyValuePair_2_t7162  ___x, KeyValuePair_2_t7162  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m50593(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7558 *, KeyValuePair_2_t7162 , KeyValuePair_2_t7162 , const MethodInfo*))DefaultComparer_Equals_m50593_gshared)(__this, ___x, ___y, method)
