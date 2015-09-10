#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7690;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50111_gshared (Enumerator_t7696 * __this, Dictionary_2_t7690 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m50111(__this, ___host, method) (( void (*) (Enumerator_t7696 *, Dictionary_2_t7690 *, const MethodInfo*))Enumerator__ctor_m50111_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50112_gshared (Enumerator_t7696 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50112(__this, method) (( Object_t * (*) (Enumerator_t7696 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50112_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50113_gshared (Enumerator_t7696 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50113(__this, method) (( void (*) (Enumerator_t7696 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m50114_gshared (Enumerator_t7696 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50114(__this, method) (( void (*) (Enumerator_t7696 *, const MethodInfo*))Enumerator_Dispose_m50114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50115_gshared (Enumerator_t7696 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50115(__this, method) (( bool (*) (Enumerator_t7696 *, const MethodInfo*))Enumerator_MoveNext_m50115_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" DateTime_t287  Enumerator_get_Current_m50116_gshared (Enumerator_t7696 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50116(__this, method) (( DateTime_t287  (*) (Enumerator_t7696 *, const MethodInfo*))Enumerator_get_Current_m50116_gshared)(__this, method)
