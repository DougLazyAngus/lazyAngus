#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9191;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3791;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m68127_gshared (Enumerator_t9191 * __this, Dictionary_2_t3791 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m68127(__this, ___host, method) (( void (*) (Enumerator_t9191 *, Dictionary_2_t3791 *, const MethodInfo*))Enumerator__ctor_m68127_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m68128_gshared (Enumerator_t9191 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m68128(__this, method) (( Object_t * (*) (Enumerator_t9191 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m68128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m68129_gshared (Enumerator_t9191 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m68129(__this, method) (( void (*) (Enumerator_t9191 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m68129_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m68130_gshared (Enumerator_t9191 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m68130(__this, method) (( void (*) (Enumerator_t9191 *, const MethodInfo*))Enumerator_Dispose_m68130_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m68131_gshared (Enumerator_t9191 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m68131(__this, method) (( bool (*) (Enumerator_t9191 *, const MethodInfo*))Enumerator_MoveNext_m68131_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3752  Enumerator_get_Current_m68132_gshared (Enumerator_t9191 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m68132(__this, method) (( TimeType_t3752  (*) (Enumerator_t9191 *, const MethodInfo*))Enumerator_get_Current_m68132_gshared)(__this, method)
