#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7069;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7063;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45014_gshared (Enumerator_t7069 * __this, Dictionary_2_t7063 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m45014(__this, ___host, method) (( void (*) (Enumerator_t7069 *, Dictionary_2_t7063 *, const MethodInfo*))Enumerator__ctor_m45014_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45015_gshared (Enumerator_t7069 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45015(__this, method) (( Object_t * (*) (Enumerator_t7069 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45016_gshared (Enumerator_t7069 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45016(__this, method) (( void (*) (Enumerator_t7069 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45016_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45017_gshared (Enumerator_t7069 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45017(__this, method) (( void (*) (Enumerator_t7069 *, const MethodInfo*))Enumerator_Dispose_m45017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45018_gshared (Enumerator_t7069 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45018(__this, method) (( bool (*) (Enumerator_t7069 *, const MethodInfo*))Enumerator_MoveNext_m45018_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" ParseGeoPoint_t1196  Enumerator_get_Current_m45019_gshared (Enumerator_t7069 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45019(__this, method) (( ParseGeoPoint_t1196  (*) (Enumerator_t7069 *, const MethodInfo*))Enumerator_get_Current_m45019_gshared)(__this, method)
