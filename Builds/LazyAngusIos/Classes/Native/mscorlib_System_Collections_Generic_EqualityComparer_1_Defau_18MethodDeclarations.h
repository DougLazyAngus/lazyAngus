#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct DefaultComparer_t7502;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void DefaultComparer__ctor_m49797_gshared (DefaultComparer_t7502 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49797(__this, method) (( void (*) (DefaultComparer_t7502 *, const MethodInfo*))DefaultComparer__ctor_m49797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49798_gshared (DefaultComparer_t7502 * __this, KeyValuePair_2_t7218  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49798(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7502 *, KeyValuePair_2_t7218 , const MethodInfo*))DefaultComparer_GetHashCode_m49798_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49799_gshared (DefaultComparer_t7502 * __this, KeyValuePair_2_t7218  ___x, KeyValuePair_2_t7218  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49799(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7502 *, KeyValuePair_2_t7218 , KeyValuePair_2_t7218 , const MethodInfo*))DefaultComparer_Equals_m49799_gshared)(__this, ___x, ___y, method)
