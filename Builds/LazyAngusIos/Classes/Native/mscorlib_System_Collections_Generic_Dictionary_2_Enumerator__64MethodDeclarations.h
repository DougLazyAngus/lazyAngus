#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8368;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8365;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60414_gshared (Enumerator_t8368 * __this, Dictionary_2_t8365 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60414(__this, ___dictionary, method) (( void (*) (Enumerator_t8368 *, Dictionary_2_t8365 *, const MethodInfo*))Enumerator__ctor_m60414_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60415_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60415(__this, method) (( Object_t * (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60415_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60416_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60416(__this, method) (( void (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60416_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60417_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60417(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60417_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60418_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60418(__this, method) (( Object_t * (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60418_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60419_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60419(__this, method) (( Object_t * (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60420_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60420(__this, method) (( bool (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_MoveNext_m60420_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7162  Enumerator_get_Current_m60421_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60421(__this, method) (( KeyValuePair_2_t7162  (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_get_Current_m60421_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m60422_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60422(__this, method) (( Object_t * (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_get_CurrentKey_m60422_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m60423_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60423(__this, method) (( int64_t (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_get_CurrentValue_m60423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m60424_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60424(__this, method) (( void (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_Reset_m60424_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m60425_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60425(__this, method) (( void (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_VerifyState_m60425_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60426_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60426(__this, method) (( void (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_VerifyCurrent_m60426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m60427_gshared (Enumerator_t8368 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60427(__this, method) (( void (*) (Enumerator_t8368 *, const MethodInfo*))Enumerator_Dispose_m60427_gshared)(__this, method)
