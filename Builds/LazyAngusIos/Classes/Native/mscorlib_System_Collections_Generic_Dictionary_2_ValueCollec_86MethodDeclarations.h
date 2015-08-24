#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8531;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8525;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62390_gshared (Enumerator_t8531 * __this, Dictionary_2_t8525 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62390(__this, ___host, method) (( void (*) (Enumerator_t8531 *, Dictionary_2_t8525 *, const MethodInfo*))Enumerator__ctor_m62390_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62391_gshared (Enumerator_t8531 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62391(__this, method) (( Object_t * (*) (Enumerator_t8531 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62391_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62392_gshared (Enumerator_t8531 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62392(__this, method) (( void (*) (Enumerator_t8531 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62392_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62393_gshared (Enumerator_t8531 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62393(__this, method) (( void (*) (Enumerator_t8531 *, const MethodInfo*))Enumerator_Dispose_m62393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62394_gshared (Enumerator_t8531 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62394(__this, method) (( bool (*) (Enumerator_t8531 *, const MethodInfo*))Enumerator_MoveNext_m62394_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m62395_gshared (Enumerator_t8531 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62395(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8531 *, const MethodInfo*))Enumerator_get_Current_m62395_gshared)(__this, method)
