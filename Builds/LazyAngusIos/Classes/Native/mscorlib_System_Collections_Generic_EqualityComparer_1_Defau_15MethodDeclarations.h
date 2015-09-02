#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t7327;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void DefaultComparer__ctor_m47539_gshared (DefaultComparer_t7327 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m47539(__this, method) (( void (*) (DefaultComparer_t7327 *, const MethodInfo*))DefaultComparer__ctor_m47539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m47540_gshared (DefaultComparer_t7327 * __this, KeyValuePair_2_t6218  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m47540(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7327 *, KeyValuePair_2_t6218 , const MethodInfo*))DefaultComparer_GetHashCode_m47540_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m47541_gshared (DefaultComparer_t7327 * __this, KeyValuePair_2_t6218  ___x, KeyValuePair_2_t6218  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m47541(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7327 *, KeyValuePair_2_t6218 , KeyValuePair_2_t6218 , const MethodInfo*))DefaultComparer_Equals_m47541_gshared)(__this, ___x, ___y, method)
