#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7146;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7140;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45804_gshared (Enumerator_t7146 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m45804(__this, ___host, method) (( void (*) (Enumerator_t7146 *, Dictionary_2_t7140 *, const MethodInfo*))Enumerator__ctor_m45804_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45805_gshared (Enumerator_t7146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45805(__this, method) (( Object_t * (*) (Enumerator_t7146 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45806_gshared (Enumerator_t7146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45806(__this, method) (( void (*) (Enumerator_t7146 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45806_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45807_gshared (Enumerator_t7146 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45807(__this, method) (( void (*) (Enumerator_t7146 *, const MethodInfo*))Enumerator_Dispose_m45807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45808_gshared (Enumerator_t7146 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45808(__this, method) (( bool (*) (Enumerator_t7146 *, const MethodInfo*))Enumerator_MoveNext_m45808_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" ParseGeoPoint_t1248  Enumerator_get_Current_m45809_gshared (Enumerator_t7146 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45809(__this, method) (( ParseGeoPoint_t1248  (*) (Enumerator_t7146 *, const MethodInfo*))Enumerator_get_Current_m45809_gshared)(__this, method)
