#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8560;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8554;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62722_gshared (Enumerator_t8560 * __this, Dictionary_2_t8554 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62722(__this, ___host, method) (( void (*) (Enumerator_t8560 *, Dictionary_2_t8554 *, const MethodInfo*))Enumerator__ctor_m62722_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62723_gshared (Enumerator_t8560 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62723(__this, method) (( Object_t * (*) (Enumerator_t8560 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62723_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62724_gshared (Enumerator_t8560 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62724(__this, method) (( void (*) (Enumerator_t8560 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62724_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62725_gshared (Enumerator_t8560 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62725(__this, method) (( void (*) (Enumerator_t8560 *, const MethodInfo*))Enumerator_Dispose_m62725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62726_gshared (Enumerator_t8560 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62726(__this, method) (( bool (*) (Enumerator_t8560 *, const MethodInfo*))Enumerator_MoveNext_m62726_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m62727_gshared (Enumerator_t8560 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62727(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8560 *, const MethodInfo*))Enumerator_get_Current_m62727_gshared)(__this, method)
