#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8609;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3362;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63412_gshared (Enumerator_t8609 * __this, Dictionary_2_t3362 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m63412(__this, ___host, method) (( void (*) (Enumerator_t8609 *, Dictionary_2_t3362 *, const MethodInfo*))Enumerator__ctor_m63412_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63413_gshared (Enumerator_t8609 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63413(__this, method) (( Object_t * (*) (Enumerator_t8609 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63414_gshared (Enumerator_t8609 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63414(__this, method) (( void (*) (Enumerator_t8609 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63414_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m63415_gshared (Enumerator_t8609 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63415(__this, method) (( void (*) (Enumerator_t8609 *, const MethodInfo*))Enumerator_Dispose_m63415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63416_gshared (Enumerator_t8609 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63416(__this, method) (( bool (*) (Enumerator_t8609 *, const MethodInfo*))Enumerator_MoveNext_m63416_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3354  Enumerator_get_Current_m63417_gshared (Enumerator_t8609 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63417(__this, method) (( TimeType_t3354  (*) (Enumerator_t8609 *, const MethodInfo*))Enumerator_get_Current_m63417_gshared)(__this, method)
