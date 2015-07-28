#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8524;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3307;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62576_gshared (Enumerator_t8524 * __this, Dictionary_2_t3307 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62576(__this, ___host, method) (( void (*) (Enumerator_t8524 *, Dictionary_2_t3307 *, const MethodInfo*))Enumerator__ctor_m62576_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62577_gshared (Enumerator_t8524 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62577(__this, method) (( Object_t * (*) (Enumerator_t8524 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62577_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62578_gshared (Enumerator_t8524 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62578(__this, method) (( void (*) (Enumerator_t8524 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62579_gshared (Enumerator_t8524 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62579(__this, method) (( void (*) (Enumerator_t8524 *, const MethodInfo*))Enumerator_Dispose_m62579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62580_gshared (Enumerator_t8524 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62580(__this, method) (( bool (*) (Enumerator_t8524 *, const MethodInfo*))Enumerator_MoveNext_m62580_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3299  Enumerator_get_Current_m62581_gshared (Enumerator_t8524 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62581(__this, method) (( TimeType_t3299  (*) (Enumerator_t8524 *, const MethodInfo*))Enumerator_get_Current_m62581_gshared)(__this, method)
