#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6215;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6212;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33663_gshared (Enumerator_t6215 * __this, Dictionary_2_t6212 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33663(__this, ___dictionary, method) (( void (*) (Enumerator_t6215 *, Dictionary_2_t6212 *, const MethodInfo*))Enumerator__ctor_m33663_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33664_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33664(__this, method) (( Object_t * (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33665_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33665(__this, method) (( void (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33665_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33666_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33666(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33667_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33667(__this, method) (( Object_t * (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33668_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33668(__this, method) (( Object_t * (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33669_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33669(__this, method) (( bool (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_MoveNext_m33669_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6189  Enumerator_get_Current_m33670_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33670(__this, method) (( KeyValuePair_2_t6189  (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_get_Current_m33670_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m33671_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33671(__this, method) (( Object_t * (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_get_CurrentKey_m33671_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33672_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33672(__this, method) (( uint8_t (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_get_CurrentValue_m33672_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33673_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33673(__this, method) (( void (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_Reset_m33673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33674_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33674(__this, method) (( void (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_VerifyState_m33674_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33675_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33675(__this, method) (( void (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_VerifyCurrent_m33675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33676_gshared (Enumerator_t6215 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33676(__this, method) (( void (*) (Enumerator_t6215 *, const MethodInfo*))Enumerator_Dispose_m33676_gshared)(__this, method)
