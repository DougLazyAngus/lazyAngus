#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct DefaultComparer_t8485;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void DefaultComparer__ctor_m59480_gshared (DefaultComparer_t8485 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m59480(__this, method) (( void (*) (DefaultComparer_t8485 *, const MethodInfo*))DefaultComparer__ctor_m59480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m59481_gshared (DefaultComparer_t8485 * __this, KeyValuePair_2_t7584  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m59481(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8485 *, KeyValuePair_2_t7584 , const MethodInfo*))DefaultComparer_GetHashCode_m59481_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m59482_gshared (DefaultComparer_t8485 * __this, KeyValuePair_2_t7584  ___x, KeyValuePair_2_t7584  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m59482(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8485 *, KeyValuePair_2_t7584 , KeyValuePair_2_t7584 , const MethodInfo*))DefaultComparer_Equals_m59482_gshared)(__this, ___x, ___y, method)
