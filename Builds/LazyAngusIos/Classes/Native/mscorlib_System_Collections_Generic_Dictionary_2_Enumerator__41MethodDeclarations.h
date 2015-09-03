#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6777;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6774;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38235_gshared (Enumerator_t6777 * __this, Dictionary_2_t6774 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38235(__this, ___dictionary, method) (( void (*) (Enumerator_t6777 *, Dictionary_2_t6774 *, const MethodInfo*))Enumerator__ctor_m38235_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38236_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38236(__this, method) (( Object_t * (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38236_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38237_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38237(__this, method) (( void (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38237_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38238_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38238(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38238_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38239_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38239(__this, method) (( Object_t * (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38240_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38240(__this, method) (( Object_t * (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38240_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38241_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38241(__this, method) (( bool (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_MoveNext_m38241_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6751  Enumerator_get_Current_m38242_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38242(__this, method) (( KeyValuePair_2_t6751  (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_get_Current_m38242_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m38243_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38243(__this, method) (( Object_t * (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_get_CurrentKey_m38243_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38244_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38244(__this, method) (( uint8_t (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_get_CurrentValue_m38244_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38245_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38245(__this, method) (( void (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_Reset_m38245_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38246_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38246(__this, method) (( void (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_VerifyState_m38246_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38247_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38247(__this, method) (( void (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_VerifyCurrent_m38247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38248_gshared (Enumerator_t6777 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38248(__this, method) (( void (*) (Enumerator_t6777 *, const MethodInfo*))Enumerator_Dispose_m38248_gshared)(__this, method)
