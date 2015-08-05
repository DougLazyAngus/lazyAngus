#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8453;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8447;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61592_gshared (Enumerator_t8453 * __this, Dictionary_2_t8447 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m61592(__this, ___host, method) (( void (*) (Enumerator_t8453 *, Dictionary_2_t8447 *, const MethodInfo*))Enumerator__ctor_m61592_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61593_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61593(__this, method) (( Object_t * (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61594_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61594(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61594_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m61595_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61595(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_Dispose_m61595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61596_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61596(__this, method) (( bool (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_MoveNext_m61596_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m61597_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61597(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_get_Current_m61597_gshared)(__this, method)
