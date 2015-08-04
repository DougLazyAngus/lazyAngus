#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7067;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7061;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44999_gshared (Enumerator_t7067 * __this, Dictionary_2_t7061 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m44999(__this, ___host, method) (( void (*) (Enumerator_t7067 *, Dictionary_2_t7061 *, const MethodInfo*))Enumerator__ctor_m44999_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45000_gshared (Enumerator_t7067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45000(__this, method) (( Object_t * (*) (Enumerator_t7067 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45001_gshared (Enumerator_t7067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45001(__this, method) (( void (*) (Enumerator_t7067 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45001_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45002_gshared (Enumerator_t7067 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45002(__this, method) (( void (*) (Enumerator_t7067 *, const MethodInfo*))Enumerator_Dispose_m45002_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45003_gshared (Enumerator_t7067 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45003(__this, method) (( bool (*) (Enumerator_t7067 *, const MethodInfo*))Enumerator_MoveNext_m45003_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" ParseGeoPoint_t1194  Enumerator_get_Current_m45004_gshared (Enumerator_t7067 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45004(__this, method) (( ParseGeoPoint_t1194  (*) (Enumerator_t7067 *, const MethodInfo*))Enumerator_get_Current_m45004_gshared)(__this, method)
