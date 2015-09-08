#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct DefaultComparer_t8070;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void DefaultComparer__ctor_m54437_gshared (DefaultComparer_t8070 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m54437(__this, method) (( void (*) (DefaultComparer_t8070 *, const MethodInfo*))DefaultComparer__ctor_m54437_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m54438_gshared (DefaultComparer_t8070 * __this, KeyValuePair_2_t7786  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m54438(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8070 *, KeyValuePair_2_t7786 , const MethodInfo*))DefaultComparer_GetHashCode_m54438_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m54439_gshared (DefaultComparer_t8070 * __this, KeyValuePair_2_t7786  ___x, KeyValuePair_2_t7786  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m54439(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8070 *, KeyValuePair_2_t7786 , KeyValuePair_2_t7786 , const MethodInfo*))DefaultComparer_Equals_m54439_gshared)(__this, ___x, ___y, method)
