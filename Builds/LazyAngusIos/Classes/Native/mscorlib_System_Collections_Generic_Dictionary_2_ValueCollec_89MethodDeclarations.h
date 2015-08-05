#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8535;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3318;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62651_gshared (Enumerator_t8535 * __this, Dictionary_2_t3318 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62651(__this, ___host, method) (( void (*) (Enumerator_t8535 *, Dictionary_2_t3318 *, const MethodInfo*))Enumerator__ctor_m62651_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62652_gshared (Enumerator_t8535 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62652(__this, method) (( Object_t * (*) (Enumerator_t8535 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62652_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62653_gshared (Enumerator_t8535 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62653(__this, method) (( void (*) (Enumerator_t8535 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62653_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62654_gshared (Enumerator_t8535 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62654(__this, method) (( void (*) (Enumerator_t8535 *, const MethodInfo*))Enumerator_Dispose_m62654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62655_gshared (Enumerator_t8535 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62655(__this, method) (( bool (*) (Enumerator_t8535 *, const MethodInfo*))Enumerator_MoveNext_m62655_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3310  Enumerator_get_Current_m62656_gshared (Enumerator_t8535 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62656(__this, method) (( TimeType_t3310  (*) (Enumerator_t8535 *, const MethodInfo*))Enumerator_get_Current_m62656_gshared)(__this, method)
