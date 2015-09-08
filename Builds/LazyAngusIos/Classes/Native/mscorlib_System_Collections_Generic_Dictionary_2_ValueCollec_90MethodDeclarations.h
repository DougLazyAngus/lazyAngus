#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9196;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3794;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m68139_gshared (Enumerator_t9196 * __this, Dictionary_2_t3794 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m68139(__this, ___host, method) (( void (*) (Enumerator_t9196 *, Dictionary_2_t3794 *, const MethodInfo*))Enumerator__ctor_m68139_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m68140_gshared (Enumerator_t9196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m68140(__this, method) (( Object_t * (*) (Enumerator_t9196 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m68140_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m68141_gshared (Enumerator_t9196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m68141(__this, method) (( void (*) (Enumerator_t9196 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m68141_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m68142_gshared (Enumerator_t9196 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m68142(__this, method) (( void (*) (Enumerator_t9196 *, const MethodInfo*))Enumerator_Dispose_m68142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m68143_gshared (Enumerator_t9196 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m68143(__this, method) (( bool (*) (Enumerator_t9196 *, const MethodInfo*))Enumerator_MoveNext_m68143_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3755  Enumerator_get_Current_m68144_gshared (Enumerator_t9196 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m68144(__this, method) (( TimeType_t3755  (*) (Enumerator_t9196 *, const MethodInfo*))Enumerator_get_Current_m68144_gshared)(__this, method)
