#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7031;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7025;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44573_gshared (Enumerator_t7031 * __this, Dictionary_2_t7025 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m44573(__this, ___host, method) (( void (*) (Enumerator_t7031 *, Dictionary_2_t7025 *, const MethodInfo*))Enumerator__ctor_m44573_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44574_gshared (Enumerator_t7031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44574(__this, method) (( Object_t * (*) (Enumerator_t7031 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44575_gshared (Enumerator_t7031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44575(__this, method) (( void (*) (Enumerator_t7031 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m44576_gshared (Enumerator_t7031 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44576(__this, method) (( void (*) (Enumerator_t7031 *, const MethodInfo*))Enumerator_Dispose_m44576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44577_gshared (Enumerator_t7031 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44577(__this, method) (( bool (*) (Enumerator_t7031 *, const MethodInfo*))Enumerator_MoveNext_m44577_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" DateTime_t287  Enumerator_get_Current_m44578_gshared (Enumerator_t7031 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44578(__this, method) (( DateTime_t287  (*) (Enumerator_t7031 *, const MethodInfo*))Enumerator_get_Current_m44578_gshared)(__this, method)
