#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3916;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3910;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26380_gshared (Enumerator_t3916 * __this, Dictionary_2_t3910 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m26380(__this, ___host, method) (( void (*) (Enumerator_t3916 *, Dictionary_2_t3910 *, const MethodInfo*))Enumerator__ctor_m26380_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26381_gshared (Enumerator_t3916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26381(__this, method) (( Object_t * (*) (Enumerator_t3916 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26382_gshared (Enumerator_t3916 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26382(__this, method) (( void (*) (Enumerator_t3916 *, const MethodInfo*))Enumerator_Dispose_m26382_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26383_gshared (Enumerator_t3916 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26383(__this, method) (( bool (*) (Enumerator_t3916 *, const MethodInfo*))Enumerator_MoveNext_m26383_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m26384_gshared (Enumerator_t3916 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26384(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3916 *, const MethodInfo*))Enumerator_get_Current_m26384_gshared)(__this, method)
