#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6244;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6241;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33995_gshared (Enumerator_t6244 * __this, Dictionary_2_t6241 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33995(__this, ___dictionary, method) (( void (*) (Enumerator_t6244 *, Dictionary_2_t6241 *, const MethodInfo*))Enumerator__ctor_m33995_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33996_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33996(__this, method) (( Object_t * (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33996_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33997_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33997(__this, method) (( void (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33997_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33998_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33998(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33999_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33999(__this, method) (( Object_t * (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34000_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34000(__this, method) (( Object_t * (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34001_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m34001(__this, method) (( bool (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_MoveNext_m34001_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6218  Enumerator_get_Current_m34002_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m34002(__this, method) (( KeyValuePair_2_t6218  (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_get_Current_m34002_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m34003_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m34003(__this, method) (( Object_t * (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_get_CurrentKey_m34003_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m34004_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m34004(__this, method) (( uint8_t (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_get_CurrentValue_m34004_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m34005_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_Reset_m34005(__this, method) (( void (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_Reset_m34005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m34006_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m34006(__this, method) (( void (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_VerifyState_m34006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m34007_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m34007(__this, method) (( void (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_VerifyCurrent_m34007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34008_gshared (Enumerator_t6244 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m34008(__this, method) (( void (*) (Enumerator_t6244 *, const MethodInfo*))Enumerator_Dispose_m34008_gshared)(__this, method)
