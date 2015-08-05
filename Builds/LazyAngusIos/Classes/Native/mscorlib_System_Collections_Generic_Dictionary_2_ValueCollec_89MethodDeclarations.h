#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3317;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62646_gshared (Enumerator_t8534 * __this, Dictionary_2_t3317 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m62646(__this, ___host, method) (( void (*) (Enumerator_t8534 *, Dictionary_2_t3317 *, const MethodInfo*))Enumerator__ctor_m62646_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62647_gshared (Enumerator_t8534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62647(__this, method) (( Object_t * (*) (Enumerator_t8534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62648_gshared (Enumerator_t8534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62648(__this, method) (( void (*) (Enumerator_t8534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62649_gshared (Enumerator_t8534 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62649(__this, method) (( void (*) (Enumerator_t8534 *, const MethodInfo*))Enumerator_Dispose_m62649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62650_gshared (Enumerator_t8534 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62650(__this, method) (( bool (*) (Enumerator_t8534 *, const MethodInfo*))Enumerator_MoveNext_m62650_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3309  Enumerator_get_Current_m62651_gshared (Enumerator_t8534 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62651(__this, method) (( TimeType_t3309  (*) (Enumerator_t8534 *, const MethodInfo*))Enumerator_get_Current_m62651_gshared)(__this, method)
