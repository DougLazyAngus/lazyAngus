#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7716;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7710;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50419_gshared (Enumerator_t7716 * __this, Dictionary_2_t7710 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m50419(__this, ___host, method) (( void (*) (Enumerator_t7716 *, Dictionary_2_t7710 *, const MethodInfo*))Enumerator__ctor_m50419_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50420_gshared (Enumerator_t7716 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50420(__this, method) (( Object_t * (*) (Enumerator_t7716 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50421_gshared (Enumerator_t7716 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50421(__this, method) (( void (*) (Enumerator_t7716 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m50422_gshared (Enumerator_t7716 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50422(__this, method) (( void (*) (Enumerator_t7716 *, const MethodInfo*))Enumerator_Dispose_m50422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50423_gshared (Enumerator_t7716 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50423(__this, method) (( bool (*) (Enumerator_t7716 *, const MethodInfo*))Enumerator_MoveNext_m50423_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" ParseGeoPoint_t1268  Enumerator_get_Current_m50424_gshared (Enumerator_t7716 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50424(__this, method) (( ParseGeoPoint_t1268  (*) (Enumerator_t7716 *, const MethodInfo*))Enumerator_get_Current_m50424_gshared)(__this, method)
