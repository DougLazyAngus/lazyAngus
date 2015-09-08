#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t9101;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9095;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m67022_gshared (Enumerator_t9101 * __this, Dictionary_2_t9095 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m67022(__this, ___host, method) (( void (*) (Enumerator_t9101 *, Dictionary_2_t9095 *, const MethodInfo*))Enumerator__ctor_m67022_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m67023_gshared (Enumerator_t9101 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m67023(__this, method) (( Object_t * (*) (Enumerator_t9101 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m67023_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m67024_gshared (Enumerator_t9101 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m67024(__this, method) (( void (*) (Enumerator_t9101 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m67024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m67025_gshared (Enumerator_t9101 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m67025(__this, method) (( void (*) (Enumerator_t9101 *, const MethodInfo*))Enumerator_Dispose_m67025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m67026_gshared (Enumerator_t9101 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m67026(__this, method) (( bool (*) (Enumerator_t9101 *, const MethodInfo*))Enumerator_MoveNext_m67026_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m67027_gshared (Enumerator_t9101 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m67027(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t9101 *, const MethodInfo*))Enumerator_get_Current_m67027_gshared)(__this, method)
