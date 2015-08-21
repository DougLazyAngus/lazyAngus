#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8528;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8522;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62357_gshared (Enumerator_t8528 * __this, Dictionary_2_t8522 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62357(__this, ___host, method) (( void (*) (Enumerator_t8528 *, Dictionary_2_t8522 *, const MethodInfo*))Enumerator__ctor_m62357_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62358_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62358(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62359_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62359(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62360_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62360(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_Dispose_m62360_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62361_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62361(__this, method) (( bool (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_MoveNext_m62361_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m62362_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62362(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_Current_m62362_gshared)(__this, method)
