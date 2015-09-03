#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct DefaultComparer_t8069;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void DefaultComparer__ctor_m54424_gshared (DefaultComparer_t8069 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m54424(__this, method) (( void (*) (DefaultComparer_t8069 *, const MethodInfo*))DefaultComparer__ctor_m54424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m54425_gshared (DefaultComparer_t8069 * __this, KeyValuePair_2_t7785  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m54425(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8069 *, KeyValuePair_2_t7785 , const MethodInfo*))DefaultComparer_GetHashCode_m54425_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m54426_gshared (DefaultComparer_t8069 * __this, KeyValuePair_2_t7785  ___x, KeyValuePair_2_t7785  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m54426(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8069 *, KeyValuePair_2_t7785 , KeyValuePair_2_t7785 , const MethodInfo*))DefaultComparer_Equals_m54426_gshared)(__this, ___x, ___y, method)
