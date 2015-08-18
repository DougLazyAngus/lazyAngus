#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7112;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45317_gshared (Enumerator_t7112 * __this, Dictionary_2_t7106 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m45317(__this, ___host, method) (( void (*) (Enumerator_t7112 *, Dictionary_2_t7106 *, const MethodInfo*))Enumerator__ctor_m45317_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45318_gshared (Enumerator_t7112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45318(__this, method) (( Object_t * (*) (Enumerator_t7112 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45319_gshared (Enumerator_t7112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45319(__this, method) (( void (*) (Enumerator_t7112 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m45320_gshared (Enumerator_t7112 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45320(__this, method) (( void (*) (Enumerator_t7112 *, const MethodInfo*))Enumerator_Dispose_m45320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45321_gshared (Enumerator_t7112 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45321(__this, method) (( bool (*) (Enumerator_t7112 *, const MethodInfo*))Enumerator_MoveNext_m45321_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" DateTime_t287  Enumerator_get_Current_m45322_gshared (Enumerator_t7112 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45322(__this, method) (( DateTime_t287  (*) (Enumerator_t7112 *, const MethodInfo*))Enumerator_get_Current_m45322_gshared)(__this, method)
