#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7062;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7059;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44840_gshared (Enumerator_t7062 * __this, Dictionary_2_t7059 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44840(__this, ___dictionary, method) (( void (*) (Enumerator_t7062 *, Dictionary_2_t7059 *, const MethodInfo*))Enumerator__ctor_m44840_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44842_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44842(__this, method) (( Object_t * (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44842_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44844_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44844(__this, method) (( void (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44844_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44846_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44846(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44848_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44848(__this, method) (( Object_t * (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44850_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44850(__this, method) (( Object_t * (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44852_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44852(__this, method) (( bool (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_MoveNext_m44852_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t6952  Enumerator_get_Current_m44854_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44854(__this, method) (( KeyValuePair_2_t6952  (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_get_Current_m44854_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44856_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44856(__this, method) (( Object_t * (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_get_CurrentKey_m44856_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1192  Enumerator_get_CurrentValue_m44858_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44858(__this, method) (( ParseGeoPoint_t1192  (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_get_CurrentValue_m44858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m44860_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44860(__this, method) (( void (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_Reset_m44860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m44862_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44862(__this, method) (( void (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_VerifyState_m44862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44864_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44864(__this, method) (( void (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_VerifyCurrent_m44864_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m44866_gshared (Enumerator_t7062 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44866(__this, method) (( void (*) (Enumerator_t7062 *, const MethodInfo*))Enumerator_Dispose_m44866_gshared)(__this, method)
