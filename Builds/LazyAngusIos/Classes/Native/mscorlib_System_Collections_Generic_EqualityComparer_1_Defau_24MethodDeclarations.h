#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct DefaultComparer_t8478;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void DefaultComparer__ctor_m59423_gshared (DefaultComparer_t8478 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m59423(__this, method) (( void (*) (DefaultComparer_t8478 *, const MethodInfo*))DefaultComparer__ctor_m59423_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m59424_gshared (DefaultComparer_t8478 * __this, KeyValuePair_2_t7577  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m59424(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8478 *, KeyValuePair_2_t7577 , const MethodInfo*))DefaultComparer_GetHashCode_m59424_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m59425_gshared (DefaultComparer_t8478 * __this, KeyValuePair_2_t7577  ___x, KeyValuePair_2_t7577  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m59425(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8478 *, KeyValuePair_2_t7577 , KeyValuePair_2_t7577 , const MethodInfo*))DefaultComparer_Equals_m59425_gshared)(__this, ___x, ___y, method)
